#ifndef SENSORAY826_ROS_HANGUP_SIGNAL_HPP
#define SENSORAY826_ROS_HANGUP_SIGNAL_HPP

#include <cerrno>
#include <csignal>
#include <system_error>

namespace sensoray826_ros {
namespace detail {
inline volatile std::sig_atomic_t hangup_requested = 0;
inline void handleHangup(int) noexcept { hangup_requested = 1; }
} // namespace detail

// Main-thread lifetime only. SIGHUP requests cooperative, normal-context cleanup.
class HangupSignalGuard {
public:
    HangupSignalGuard() {
        struct sigaction action {};
        action.sa_handler = detail::handleHangup;
        sigemptyset(&action.sa_mask);
        action.sa_flags = SA_RESTART;
        detail::hangup_requested = 0;
        if (sigaction(SIGHUP, &action, &previous_) != 0) {
            throw std::system_error(errno, std::generic_category(), "sigaction(SIGHUP)");
        }
    }
    ~HangupSignalGuard() { sigaction(SIGHUP, &previous_, nullptr); }
    HangupSignalGuard(const HangupSignalGuard&) = delete;
    HangupSignalGuard& operator=(const HangupSignalGuard&) = delete;
    bool requested() const noexcept { return detail::hangup_requested != 0; }
private:
    struct sigaction previous_ {};
};
} // namespace sensoray826_ros
#endif
