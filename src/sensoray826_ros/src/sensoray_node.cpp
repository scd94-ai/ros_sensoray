#include "Festo.h"
#include "Sensoray826.h"
#include "826api.h"

#include <rclcpp/rclcpp.hpp>
#include <soft_actuator_msgs/msg/pressure_command.hpp>
#include <soft_actuator_msgs/msg/pressure_state.hpp>
#include <soft_actuator_core/output_policy.hpp>

#include <array>
#include <algorithm>
#include <chrono>
#include <cmath>
#include <cstdint>
#include <memory>
#include <stdexcept>
#include <string>

using namespace std::chrono_literals;

class SensorayNode final : public rclcpp::Node {
public:
    using Command = soft_actuator_msgs::msg::PressureCommand;
    using State = soft_actuator_msgs::msg::PressureState;
    using SteadyClock = std::chrono::steady_clock;
    using Pressures = std::array<double, 3>;

    SensorayNode()
        : Node("sensoray826_node"),
          board_(0),
          festo0_(board_, 0, 15, 0, -50., 50., 0., 5.),
          festo1_(board_, 1, 14, 1, -50., 50., 0., 5.),
          festo2_(board_, 2, 13, 2, -50., 50., 0., 5.),
          festos_{&festo0_, &festo1_, &festo2_} {

        // An actuator-specific limit must be validated before pneumatic tests.
        output_options_.profileAbsLimitKPa =
            declare_parameter<double>("profile_abs_limit_kpa", 0.0);
        output_options_.studyGuardEnabled =
            declare_parameter<bool>("study_guard_enabled", false);
        output_options_.studyMinKPa =
            declare_parameter<double>("study_min_kpa", -40.0);
        output_options_.studyMaxKPa =
            declare_parameter<double>("study_max_kpa", 45.0);

        if (!std::isfinite(output_options_.profileAbsLimitKPa) ||
            output_options_.profileAbsLimitKPa < 0.0 ||
            (output_options_.studyGuardEnabled &&
             (!std::isfinite(output_options_.studyMinKPa) ||
              !std::isfinite(output_options_.studyMaxKPa) ||
              output_options_.studyMinKPa >= output_options_.studyMaxKPa ||
              output_options_.studyMinKPa < -40.0 ||
              output_options_.studyMaxKPa > 50.0))) {
            throw std::runtime_error("Invalid pressure-protection parameters");
        }

        state_pub_ = create_publisher<State>(
            "/soft_haptics/right/sensoray_state", rclcpp::QoS(10).reliable());

        if (board_.initialize() != S826_ERR_OK) {
            throw std::runtime_error("Cannot initialize Sensoray 826 board");
        }

        try {
            for (Festo* festo : festos_) {
                if (festo->initialize() != S826_ERR_OK) {
                    throw std::runtime_error("FESTO channel initialization failed");
                }
                ++initialized_;
            }
            // initialize() on all three FESTOs commands the configured zero setpoint.
            last_written_ = {0., 0., 0.};
            ready_ = true;
        } catch (...) {
            writeZero();
            board_.close();
            throw;
        }

        // Keep only the newest pressure command in the subscriber queue.
        command_sub_ = create_subscription<Command>(
            "/soft_haptics/right/pressure_command", rclcpp::QoS(1).reliable(),
            [this](Command::ConstSharedPtr msg) { onCommand(*msg); });

        watchdog_ = create_wall_timer(20ms, [this] { checkWatchdog(); });
        publishState(false); // Startup status, not a controller-command ACK.
        RCLCPP_INFO(get_logger(), "Sensoray ready; awaiting pressure commands");
    }

    ~SensorayNode() override {
        writeZero();  // Best effort only; not a physical safety interlock.
        board_.close();
    }

private:
    // --- Hardware ---
    bool writePressures(const Pressures& pressures) {
        for (std::size_t i = 0; i < festos_.size(); ++i) {
            if (festos_[i]->setPressure(pressures[i]) != S826_ERR_OK) {
                return false; // Some earlier channels may have been written.
            }
        }
        last_written_ = pressures; // Record only a complete successful triple.
        return true;
    }

    bool writeZero() {
        bool success = initialized_ == festos_.size();
        for (std::size_t i = 0; i < initialized_; ++i) {
            if (festos_[i]->setPressure(0.0) != S826_ERR_OK) {
                success = false;
            }
        }
        if (success) {
            last_written_ = {0., 0., 0.};
        }
        return success;
    }

    // --- ROS state acknowledgments ---
    void publishState(bool success) {
        State state;
        state.header.stamp = get_clock()->now();
        state.session_id = session_;
        state.command_sequence = sequence_;
        state.written_pressure_kpa = last_written_;
        state.write_success = success;
        state.ready = ready_;
        state.fault = fault_;
        state_pub_->publish(state);
    }

    // A latched fault cannot be cleared by receiving another command.
    void enterFault(const std::string& reason) {
        ready_ = false;
        fault_ = reason;
        if (!writeZero()) {
            fault_ += "; zero_write_failed";
        }
        publishState(false);
        RCLCPP_ERROR(get_logger(), "Sensoray fault: %s", fault_.c_str());
    }

    // --- Incoming controller commands ---
    void onCommand(const Command& msg) {
        const auto received_at = SteadyClock::now();

        if (msg.session_id.empty() || msg.sequence == 0) {
            // Invalid identity is not a valid acknowledgement target.
            return;
        }

        if (session_.empty()) {
            session_ = msg.session_id;
        } else if (msg.session_id != session_) {
            // Never allow an old or competing controller session to take over.
            if (ready_) enterFault("unexpected_session_change");
            return;
        }

        if (have_command_ && msg.sequence <= sequence_) {
            return; // Ignore duplicates and out-of-order messages.
        }
        sequence_ = msg.sequence;
        have_command_ = true;

        if (!ready_) {
            publishState(false);
            return;
        }

        const auto ttl = std::chrono::seconds(msg.valid_for.sec) +
                         std::chrono::nanoseconds(msg.valid_for.nanosec);
        if (ttl <= 0ns || ttl > 1s) {
            enterFault("invalid_command_ttl");
            return;
        }

        // Source timestamps and our local ROS clock must be synchronized.
        if (msg.header.stamp.sec == 0 && msg.header.stamp.nanosec == 0) {
            enterFault("missing_command_timestamp");
            return;
        }
        const auto stamp = rclcpp::Time(msg.header.stamp, RCL_ROS_TIME);
        const auto age_ns = (get_clock()->now() - stamp).nanoseconds();
        if (age_ns < -50'000'000LL) {
            enterFault("future_command_timestamp");
            return;
        }
        // Do not renew a delayed message's full TTL at reception.
        const auto age = std::chrono::nanoseconds(std::max<std::int64_t>(age_ns, 0));
        if (age >= ttl) {
            enterFault("pressure_command_already_expired");
            return;
        }
        expires_at_ = received_at + (ttl - age);

        Pressures requested = {msg.pressure_kpa[0], msg.pressure_kpa[1],
                               msg.pressure_kpa[2]};
        auto options = output_options_;
        options.forceZero = msg.force_zero;

        const auto decision = soft_actuator::PressureOutputPolicy::evaluate(
            requested, last_written_, options);
        if (!decision.validInput) {
            enterFault("invalid_pressure_policy_input");
            return;
        }

        // Even valid policy holds/clamps must be acknowledged using actual
        // approved values, never the originally requested values.
        if (SteadyClock::now() >= expires_at_) {
            enterFault("pressure_command_expired_before_write");
            return;
        }
        if (!writePressures(decision.pressureKPa)) {
            enterFault("partial_dac_write_failed");
            return;
        }
        if (SteadyClock::now() >= expires_at_) {
            enterFault("pressure_command_expired_during_write");
            return;
        }
        publishState(true);
    }

    // --- Communication watchdog ---
    void checkWatchdog() {
        if (ready_ && have_command_ && SteadyClock::now() >= expires_at_) {
            enterFault("pressure_command_expired");
        }
    }

    Sensoray826 board_;
    Festo festo0_;
    Festo festo1_;
    Festo festo2_;
    std::array<Festo*, 3> festos_;
    std::size_t initialized_ = 0;

    bool ready_ = false;
    bool have_command_ = false;
    std::string session_;
    std::uint64_t sequence_ = 0;
    Pressures last_written_ = {0., 0., 0.};
    SteadyClock::time_point expires_at_{};
    std::string fault_;
    soft_actuator::OutputOptions output_options_;

    rclcpp::Publisher<State>::SharedPtr state_pub_;
    rclcpp::Subscription<Command>::SharedPtr command_sub_;
    rclcpp::TimerBase::SharedPtr watchdog_;
};

int main(int argc, char** argv) {
    rclcpp::init(argc, argv);
    try {
        auto node = std::make_shared<SensorayNode>();
        rclcpp::spin(node); // Single threaded; serializes board writes and watchdog.
    } catch (const std::exception& error) {
        RCLCPP_FATAL(rclcpp::get_logger("sensoray826_node"), "%s", error.what());
        rclcpp::shutdown();
        return 1;
    }
    rclcpp::shutdown();
    return 0;
}
