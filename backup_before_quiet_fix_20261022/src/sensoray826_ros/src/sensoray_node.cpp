
#include "Festo.h"
#include "Sensoray826.h"
#include "826api.h"
#include "pressure_write_guard.hpp"

#include <rclcpp/rclcpp.hpp>
#include <soft_actuator_msgs/msg/pressure_command.hpp>
#include <soft_actuator_msgs/msg/pressure_state.hpp>
#include <soft_actuator_core/output_policy.hpp>

#include <array>
#include <chrono>
#include <cmath>
#include <cstdint>
#include <memory>
#include <optional>
#include <stdexcept>
#include <string>

using namespace std::chrono_literals;

class SensorayNode : public rclcpp::Node {
public:
    using Command = soft_actuator_msgs::msg::PressureCommand;
    using State = soft_actuator_msgs::msg::PressureState;
    using SteadyClock = std::chrono::steady_clock;
    using Triple = std::array<double, 3>;

    SensorayNode()
        : rclcpp::Node("sensoray826_node"),
          sensoray(0),
          festo1(sensoray, 0, 15, 0, -50.0, 50.0, 0.0, 5.0),
          festo2(sensoray, 1, 14, 1, -50.0, 50.0, 0.0, 5.0),
          festo3(sensoray, 2, 13, 2, -50.0, 50.0, 0.0, 5.0)
    {
        // Initialize hardware before accepting commands.
        if (sensoray.initialize() != S826_ERR_OK) {
            throw std::runtime_error("Sensoray initialization failed");
        }

        try {
            for (Festo* festo : festos) {
                if (festo->initialize() != S826_ERR_OK) {
                    throw std::runtime_error("FESTO initialization failed");
                }
                ++initialized_count;
            }

            // Establish a zero-pressure command at startup.
            if (!writePressures(Triple{0.0, 0.0, 0.0})) {
                throw std::runtime_error("Startup zero write failed");
            }
        }
        catch (...) {
            forceZeroAll();
            sensoray.close();
            throw;
        }

        ready = true;

        state_pub = create_publisher<State>(
            "/soft_haptics/right/sensoray_state",
            rclcpp::QoS(10).reliable()
        );

        command_sub = create_subscription<Command>(
            "/soft_haptics/right/pressure_command",
            rclcpp::QoS(1).reliable(),
            [this](Command::SharedPtr msg) {
                onCommand(*msg);
            }
        );

        watchdog = create_wall_timer(
            20ms,
            [this]() {
                onWatchdog();
            }
        );

        RCLCPP_INFO(
            get_logger(),
            "Sensoray node initialized; outputs commanded to zero"
        );
    }

    ~SensorayNode() override {
        // Best-effort shutdown. If hardware communication fails,
        // zero output cannot be guaranteed.
        forceZeroAll();
        sensoray.close();
    }

private:
    Sensoray826 sensoray;

    Festo festo1;
    Festo festo2;
    Festo festo3;

    std::array<Festo*, 3> festos{
        &festo1, &festo2, &festo3
    };

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

    bool writePressures(const Triple& pressures) {
        for (std::size_t i = 0; i < festos.size(); ++i) {
            if (i >= initialized_count) {
                return false;
            }

            if (festos[i]->setPressure(pressures[i]) != S826_ERR_OK) {
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
            if (festos[i]->setPressure(0.0) != S826_ERR_OK) {
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

    void failSafe(const std::string& reason) {
        ready = false;
        fault = reason;

        if (!forceZeroAll()) {
            fault += "; zero_write_not_confirmed";
        }

        RCLCPP_ERROR(
            get_logger(),
            "Sensoray fault: %s",
            fault.c_str()
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
                failSafe("pressure_command_expired");
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
                    festos[channel]->setPressure(pressure) == S826_ERR_OK;
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

        if (SteadyClock::now() >= expires_at) {
            failSafe("pressure_command_expired");
        }
    }
};

// --------------------------------------------------
// Main
// --------------------------------------------------

int main(int argc, char* argv[]) {
    rclcpp::init(argc, argv);

    int exit_code = 0;

    try {
        auto node = std::make_shared<SensorayNode>();
        rclcpp::spin(node);
        node.reset();
    }
    catch (const std::exception& e) {
        RCLCPP_ERROR(
            rclcpp::get_logger("sensoray826_main"),
            "Node terminated: %s",
            e.what()
        );

        exit_code = 1;
    }

    if (rclcpp::ok()) {
        rclcpp::shutdown();
    }

    return exit_code;
}
