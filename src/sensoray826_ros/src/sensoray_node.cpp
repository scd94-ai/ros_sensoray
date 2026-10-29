
#include "Festo.h"
#include "Sensoray826.h"
#include "826api.h"
#include "pressure_write_guard.hpp"
#include "hangup_signal.hpp"

#include <rclcpp/rclcpp.hpp>
#include <sensoray826_msgs/msg/potentiometer_state.hpp>
#include <soft_actuator_msgs/msg/pressure_command.hpp>
#include <soft_actuator_msgs/msg/pressure_state.hpp>
#include <soft_actuator_core/output_policy.hpp>

#include <algorithm>
#include <array>
#include <chrono>
#include <cmath>
#include <cstdint>
#include <memory>
#include <optional>
#include <stdexcept>
#include <string>
#include <atomic>
#include <condition_variable>
#include <mutex>
#include <thread>
#include <random>
#include <sstream>
#include <iomanip>
#include <iostream>
#include <sys/resource.h>
#include <sys/syscall.h>
#include <unistd.h>

using namespace std::chrono_literals;

class SensorayNode : public rclcpp::Node {
public:
    using Command = soft_actuator_msgs::msg::PressureCommand;
    using State = soft_actuator_msgs::msg::PressureState;
    using SteadyClock = std::chrono::steady_clock;
    using Triple = std::array<double, 3>;

    using PotState = sensoray826_msgs::msg::PotentiometerState;

    static rcl_interfaces::msg::ParameterDescriptor startupParameter() {
        rcl_interfaces::msg::ParameterDescriptor descriptor;
        descriptor.read_only = true;
        descriptor.description = "Initialization-only hardware/worker setting";
        return descriptor;
    }

    SensorayNode()
        : rclcpp::Node("sensoray826_node"),
          sensoray(static_cast<unsigned int>(declare_parameter<int>("board", 0, startupParameter())))
    {
        pressure_enabled = declare_parameter<bool>("enable_pressure", true, startupParameter());
        adc_enabled = declare_parameter<bool>("enable_potentiometers", false, startupParameter());
        supply_enabled = declare_parameter<bool>("potentiometer_supply", false, startupParameter());
        settling_us = declare_parameter<int>("potentiometer_settling_us", 100, startupParameter());
        poll_rate = declare_parameter<double>("potentiometer_poll_rate_hz", 200.0, startupParameter());
        publish_rate = declare_parameter<double>("potentiometer_publish_rate_hz", 200.0, startupParameter());
        if ((!pressure_enabled && !adc_enabled) || settling_us < 1 || settling_us > 100000 ||
            !std::isfinite(poll_rate) || poll_rate < 50 || poll_rate > 1000 ||
            !std::isfinite(publish_rate) || publish_rate < 1 || publish_rate > 1000) {
            throw std::invalid_argument("Invalid Sensoray mode, settling time or polling/publication rate");
        }
        // No DAC/Festo object or pressure ROS interface exists in ADC-only mode.
        try {
            const int initialization_status = sensoray.initialize();
            if (initialization_status != S826_ERR_OK) {
                throw std::runtime_error("Sensoray ownership/initialization failed (status=" +
                    std::to_string(initialization_status) + "): " + sensoray.initializationError());
            }
            RCLCPP_WARN(get_logger(), "%s", sensoray.ownershipLimitations().c_str());
            if (pressure_enabled) {
                for (std::size_t i = 0; i < festos.size(); ++i) {
                    owned_festos[i] = std::make_unique<Festo>(sensoray, i, 15 - i, i,
                        -50.0, 50.0, 0.0, 5.0);
                    festos[i] = owned_festos[i].get();
                    if (festos[i]->initialize() != S826_ERR_OK) {
                        throw std::runtime_error("FESTO initialization failed");
                    }
                    ++initialized_count;
                }
                if (!writePressures(Triple{0.0, 0.0, 0.0})) {
                    throw std::runtime_error("Startup zero write failed");
                }
                ready = true;
                state_pub = create_publisher<State>("/soft_haptics/right/sensoray_state", rclcpp::QoS(10).reliable());
                command_sub = create_subscription<Command>("/soft_haptics/right/pressure_command",
                    rclcpp::QoS(1).reliable(), [this](Command::SharedPtr msg) { onCommand(*msg); });
                watchdog = create_wall_timer(20ms, [this]() { onWatchdog(); });
                RCLCPP_INFO(get_logger(), "Pressure writer initialized; outputs commanded to zero");
            }
            if (adc_enabled) {
                if (sensoray.startPotentiometers(supply_enabled, settling_us) != S826_ERR_OK) {
                    throw std::runtime_error("Potentiometer ADC configuration/readback failed");
                }
                adc_session = newSession();
                pot_pub = create_publisher<PotState>("/sensoray/potentiometers",
                    rclcpp::QoS(1).best_effort().durability_volatile());
                adc_thread = std::thread([this]() { acquisitionLoop(); });
                publisher_thread = std::thread([this]() { publicationLoop(); });
                RCLCPP_INFO(get_logger(), "Raw potentiometers enabled: ADC-only=%s; poll %.1f Hz, publish %.1f Hz",
                    pressure_enabled ? "false" : "true", poll_rate, publish_rate);
            }
        } catch (...) {
            stopAcquisition();
            if (pressure_enabled) forceZeroAll();
            sensoray.close();
            throw;
        }
    }

    ~SensorayNode() override {
        stopAcquisition(); // Join both workers before stopping/restoring ADC or closing SDK.
        if (pressure_enabled) forceZeroAll();
        const int status = sensoray.close();
        if (status != S826_ERR_OK) {
            RCLCPP_ERROR(get_logger(), "Sensoray ADC cleanup/readback incomplete (%d)", status);
        }
    }

private:
    Sensoray826 sensoray;

    std::array<std::unique_ptr<Festo>, 3> owned_festos;
    std::array<Festo*, 3> festos{};
    bool pressure_enabled = true, adc_enabled = false, supply_enabled = false;
    int settling_us = 100;
    double poll_rate = 200.0, publish_rate = 200.0;
    std::atomic<bool> stopping{false};
    std::thread adc_thread, publisher_thread;
    std::mutex sleep_mutex, snapshot_mutex;
    std::condition_variable wake;
    std::optional<PotState> latest_adc;
    std::string adc_session;
    rclcpp::Publisher<PotState>::SharedPtr pot_pub;

    static std::string newSession() {
        std::random_device random;
        std::ostringstream text;
        text << std::hex << std::setfill('0');
        for (int i = 0; i < 4; ++i) text << std::setw(8) << random();
        return text.str();
    }

    bool waitPeriod(std::chrono::steady_clock::time_point deadline) {
        std::unique_lock<std::mutex> lock(sleep_mutex);
        return wake.wait_until(lock, deadline, [this] { return stopping.load(); });
    }

    void acquisitionLoop() {
        // Only this worker reads ADC. Every SDK call is nonblocking (tmax=0).
        const auto period = std::chrono::duration_cast<SteadyClock::duration>(std::chrono::duration<double>(1.0 / poll_rate));
        auto next = SteadyClock::now();
        std::uint64_t capture_sequence = 0;
        while (!stopping.load()) {
            const auto sample = sensoray.readPotentiometers();
            // No new conversion: never refresh capture time or identity.
            if (sample.have_new_data || (sample.sdk_status != S826_ERR_OK && sample.sdk_status != static_cast<int>(S826_ERR_NOTREADY))) {
                PotState msg;
                msg.header.stamp = get_clock()->now();
                msg.header.frame_id = "sensoray826/board_" + std::to_string(sensoray.boardNumber());
                msg.session_id = adc_session;
                msg.sequence = ++capture_sequence;
                msg.board = static_cast<std::uint8_t>(sensoray.boardNumber());
                msg.settling_us = settling_us;
                msg.adc_channels = {11, 10};
                msg.adc_timestamps_us = sample.timestamps_us;
                msg.voltage_v = sample.voltage_v;
                msg.valid = sample.valid;
                msg.sdk_status = sample.sdk_status;
                msg.supply_valid = sample.supply_valid;
                msg.supply_voltage_v = sample.supply_voltage_v;
                msg.supply_adc_timestamp_us = sample.supply_timestamp_us;
                { std::lock_guard<std::mutex> lock(snapshot_mutex); latest_adc = std::move(msg); }
            }
            next += period;
            if (next < SteadyClock::now()) next = SteadyClock::now() + period;
            if (waitPeriod(next)) break;
        }
    }

    void publicationLoop() {
        // Lower only this thread's priority on Linux; do not alter the host or
        // pressure executor. DDS work never holds the SDK or snapshot mutex.
        const auto tid = static_cast<id_t>(::syscall(SYS_gettid));
        const int current_nice = ::getpriority(PRIO_PROCESS, tid);
        const int requested_nice = std::min(19, current_nice + 5);
        if (::setpriority(PRIO_PROCESS, tid, requested_nice) != 0) {
            RCLCPP_WARN(get_logger(), "Could not lower potentiometer publication thread priority");
        }
        RCLCPP_INFO(get_logger(), "Potentiometer publisher nice requested=%d actual=%d", requested_nice, ::getpriority(PRIO_PROCESS, tid));
        const auto period = std::chrono::duration_cast<SteadyClock::duration>(std::chrono::duration<double>(1.0 / publish_rate));
        auto next = SteadyClock::now();
        std::uint64_t published_sequence = 0;
        while (!stopping.load()) {
            std::optional<PotState> snapshot;
            { std::lock_guard<std::mutex> lock(snapshot_mutex); snapshot = latest_adc; }
            if (snapshot && snapshot->sequence != published_sequence && rclcpp::ok()) {
                try {
                    pot_pub->publish(*snapshot);
                    published_sequence = snapshot->sequence;
                } catch (const std::exception& error) {
                    if (!stopping.load() && rclcpp::ok()) RCLCPP_ERROR(get_logger(), "Potentiometer publication failed: %s", error.what());
                }
            }
            next += period;
            if (next < SteadyClock::now()) next = SteadyClock::now() + period;
            if (waitPeriod(next)) break;
        }
    }

    void stopAcquisition() {
        { std::lock_guard<std::mutex> lock(sleep_mutex); stopping.store(true); }
        wake.notify_all();
        if (adc_thread.joinable()) adc_thread.join();
        if (publisher_thread.joinable()) publisher_thread.join();
    }

    std::size_t initialized_count = 0;

    bool ready = false;
    bool have_command = false;

    std::string session_id;
    std::uint64_t sequence = 0;
    std::string fault;

    Triple last_written{0.0, 0.0, 0.0};

    SteadyClock::time_point expires_at{};

    rclcpp::Subscription<Command>::SharedPtr command_sub;
    rclcpp::Publisher<State>::SharedPtr state_pub;
    rclcpp::TimerBase::SharedPtr watchdog;

    // --------------------------------------------------
    // Write all three requested pressures
    // --------------------------------------------------

    // Successful per-DAC console output is disabled on all ROS write paths:
    // terminal backpressure must not add work inside the command deadline.
    bool writePressures(const Triple& pressures) {
        for (std::size_t i = 0; i < festos.size(); ++i) {
            if (i >= initialized_count) {
                return false;
            }

            if (festos[i]->setPressure(pressures[i], false) != S826_ERR_OK) {
                return false;
            }
        }

        // Update only after all three writes succeed.
        last_written = pressures;
        return true;
    }

    // --------------------------------------------------
    // Best-effort zero command
    // --------------------------------------------------

    bool forceZeroAll() {
        bool success = (initialized_count == festos.size());

        for (std::size_t i = 0; i < initialized_count; ++i) {
            if (festos[i]->setPressure(0.0, false) != S826_ERR_OK) {
                success = false;
            }
        }

        if (success) {
            last_written = Triple{0.0, 0.0, 0.0};
        }

        return success;
    }

    // --------------------------------------------------
    // Publish command acknowledgment / hardware state
    // --------------------------------------------------

    void publishState(bool write_success) {
        State msg;

        msg.header.stamp = get_clock()->now();
        msg.session_id = session_id;
        msg.command_sequence = sequence;
        msg.written_pressure_kpa = last_written;
        msg.write_success = write_success;
        msg.ready = ready;
        msg.fault = fault;

        // Also cover time spent preparing the ACK after the last DAC write.
        // failSafe publishes write_success=false, so this cannot recurse.
        if (write_success && SteadyClock::now() >= expires_at) {
            failSafe("pressure_command_expired_before_ack");
            return;
        }

        state_pub->publish(msg);
    }

    // --------------------------------------------------
    // Latched fault
    // --------------------------------------------------

    void failSafe(const std::string& reason, const std::string& detail = "") {
        ready = false;
        fault = reason;

        if (!forceZeroAll()) {
            fault += "; zero_write_not_confirmed";
        }

        RCLCPP_ERROR(
            get_logger(),
            "Sensoray fault: %s%s%s",
            fault.c_str(),
            detail.empty() ? "" : "; ",
            detail.c_str()
        );

        publishState(false);
    }

    // --------------------------------------------------
    // Incoming ROS pressure command
    // --------------------------------------------------

    void onCommand(const Command& msg) {
        const auto received_at = SteadyClock::now();

        // Reject malformed identities.
        if (msg.session_id.empty() || msg.sequence == 0) {
            RCLCPP_WARN(
                get_logger(),
                "Rejected command with invalid session or sequence"
            );
            return;
        }

        // Only accept increasing sequences within one session.
        if (have_command &&
            msg.session_id == session_id &&
            msg.sequence <= sequence) {
            return;
        }

        // In this demo, do not switch sessions after the
        // first accepted session without restarting the node.
        if (have_command && msg.session_id != session_id) {
            RCLCPP_WARN(
                get_logger(),
                "Rejected command from different session"
            );
            return;
        }

        session_id = msg.session_id;
        sequence = msg.sequence;
        have_command = true;

        if (!ready) {
            publishState(false);
            return;
        }

        // Validate command lifetime: (0, 1 second].
        const std::int64_t ttl_ns =
            static_cast<std::int64_t>(msg.valid_for.sec) *
                1000000000LL +
            static_cast<std::int64_t>(msg.valid_for.nanosec);

        if (ttl_ns <= 0 || ttl_ns > 1000000000LL) {
            failSafe("invalid_command_ttl");
            return;
        }

        // Reject delayed commands using their ROS timestamp.
        // A header timestamp is required for nonzero commands.
        const bool stamp_present =
            msg.header.stamp.sec != 0 ||
            msg.header.stamp.nanosec != 0;

        if (!stamp_present && !msg.force_zero) {
            failSafe("missing_command_timestamp");
            return;
        }

        std::int64_t remaining_ns = ttl_ns;

        if (stamp_present) {
            const auto stamp =
                rclcpp::Time(msg.header.stamp);

            const auto age_ns =
                (get_clock()->now() - stamp).nanoseconds();

            // Reject timestamps too far in the future.
            if (age_ns < -100000000LL) {
                failSafe("future_command_timestamp");
                return;
            }

            if (age_ns >= ttl_ns) {
                failSafe("pressure_command_expired_on_receive",
                    "sequence=" + std::to_string(sequence) +
                    " source_age_ms=" + std::to_string(age_ns * 1e-6) +
                    " ttl_ms=" + std::to_string(ttl_ns * 1e-6));
                return;
            }

            if (age_ns > 0) {
                remaining_ns -= age_ns;
            }
        }

        expires_at = received_at +
            std::chrono::nanoseconds(remaining_ns);

        // Read the requested pressure triple.
        Triple requested{
            msg.pressure_kpa[0],
            msg.pressure_kpa[1],
            msg.pressure_kpa[2]
        };

        // The force-zero flag overrides requested values.
        // Otherwise reject non-finite values.
        if (!msg.force_zero) {
            for (double p : requested) {
                if (!std::isfinite(p)) {
                    failSafe("nonfinite_pressure_command");
                    return;
                }
            }
        }

        // --------------------------------------------------
        // Jiaji's independent output safety policy
        // --------------------------------------------------

        soft_actuator::OutputOptions options;
        options.forceZero = msg.force_zero;

        // Enable the policy's study range [-40, +45] kPa.
        options.studyGuardEnabled = true;

        const std::optional<Triple> previous = last_written;

        const auto decision =
            soft_actuator::PressureOutputPolicy::evaluate(
                requested,
                previous,
                options
            );

        if (!decision.validInput) {
            failSafe("invalid_pressure_policy_input");
            return;
        }

        // The timer cannot run while this single-threaded callback is writing.
        // Check each DAC call directly and stop the triple as soon as it expires.
        const auto result = sensoray826_ros::writePressureBeforeDeadline(
            decision.pressureKPa,
            expires_at,
            [] { return SteadyClock::now(); },
            [this](std::size_t channel, double pressure) {
                return channel < initialized_count &&
                    festos[channel]->setPressure(pressure, false) == S826_ERR_OK;
            });

        // Preserve the last physically completed triple even if it overran its
        // deadline. An overrun still takes the failure path and never gets a
        // successful ACK. A partial write does not replace this record.
        if (result.channels_written == festos.size()) {
            last_written = decision.pressureKPa;
        }

        using sensoray826_ros::PressureWriteStatus;
        if (result.status != PressureWriteStatus::Success) {
            if (result.status == PressureWriteStatus::ExpiredBeforeWrite) {
                failSafe("pressure_command_expired_before_write");
            } else if (result.status == PressureWriteStatus::ExpiredDuringWrite) {
                failSafe("pressure_command_expired_during_write");
            } else {
                failSafe("dac_write_failed");
            }
            return;
        }

        fault.clear();

        publishState(true);
    }

    // --------------------------------------------------
    // Watchdog
    // --------------------------------------------------

    void onWatchdog() {
        if (!ready || !have_command) {
            return;
        }

        const auto now = SteadyClock::now();
        if (now >= expires_at) {
            const double lateness_ms =
                std::chrono::duration<double, std::milli>(now - expires_at).count();
            failSafe("pressure_command_expired_watchdog",
                "last_sequence=" + std::to_string(sequence) +
                "deadline_late_ms=" + std::to_string(lateness_ms));
        }
    }
};

// --------------------------------------------------
// Main
// --------------------------------------------------

int main(int argc, char* argv[]) {
    // Install before ROS/SDK initialization and retain through node cleanup.
    std::optional<sensoray826_ros::HangupSignalGuard> hangup;
    try {
        hangup.emplace();
    } catch (const std::exception& e) {
        std::cerr << "Cannot install Sensoray SIGHUP handler: " << e.what() << '\n';
        return 1;
    }
    rclcpp::init(argc, argv);
    int exit_code = 0;
    try {
        if (!hangup->requested()) {
            auto node = std::make_shared<SensorayNode>();
            // Same single-threaded callback serialization as rclcpp::spin.
            rclcpp::executors::SingleThreadedExecutor executor;
            executor.add_node(node);
            while (rclcpp::ok() && !hangup->requested()) {
                executor.spin_once(20ms);
            }
            if (hangup->requested()) {
                RCLCPP_INFO(node->get_logger(), "SIGHUP received; shutting down in normal thread context");
            }
            executor.remove_node(node);
            node.reset(); // Join workers, zero pressure if enabled, restore ADC, then close SDK.
        }
    } catch (const std::exception& e) {
        RCLCPP_ERROR(rclcpp::get_logger("sensoray826_main"), "Node terminated: %s", e.what());
        exit_code = 1;
    }
    if (rclcpp::ok()) {
        rclcpp::shutdown();
    }
    return exit_code;
}
