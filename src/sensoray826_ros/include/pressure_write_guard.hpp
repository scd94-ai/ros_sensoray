#pragma once

#include <array>
#include <chrono>
#include <cstddef>

namespace sensoray826_ros {

enum class PressureWriteStatus {
    Success,
    ExpiredBeforeWrite,
    ExpiredDuringWrite,
    DacError,
};

struct PressureWriteResult {
    PressureWriteStatus status;
    std::size_t channels_written;
};

// Injecting the clock and channel writer permits deterministic tests without
// opening a board. The caller owns fault latching, zeroing, and acknowledgements.
template <typename Now, typename WriteChannel>
PressureWriteResult writePressureBeforeDeadline(
    const std::array<double, 3>& pressures,
    std::chrono::steady_clock::time_point deadline,
    Now&& now,
    WriteChannel&& write_channel)
{
    std::size_t channels_written = 0;
    for (std::size_t i = 0; i < pressures.size(); ++i) {
        if (now() >= deadline) {
            return {
                channels_written == 0 ? PressureWriteStatus::ExpiredBeforeWrite
                                      : PressureWriteStatus::ExpiredDuringWrite,
                channels_written,
            };
        }
        if (!write_channel(i, pressures[i])) {
            return {PressureWriteStatus::DacError, channels_written};
        }
        ++channels_written;
        // A single SDK call cannot be interrupted here. Detect its overrun on
        // return and let the caller zero all channels before acknowledging failure.
        if (now() >= deadline) {
            return {PressureWriteStatus::ExpiredDuringWrite, channels_written};
        }
    }
    return {PressureWriteStatus::Success, channels_written};
}

}  // namespace sensoray826_ros
