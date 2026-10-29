#include "pressure_write_guard.hpp"

#include <gtest/gtest.h>

#include <array>
#include <chrono>
#include <cstddef>
#include <optional>
#include <string>
#include <tuple>
#include <utility>
#include <vector>

namespace
{

using Clock = std::chrono::steady_clock;
using Milliseconds = std::chrono::milliseconds;
using sensoray826_ros::PressureWriteStatus;
using sensoray826_ros::writePressureBeforeDeadline;

constexpr auto kTtl = Milliseconds{50};

std::array<double, 3> pressures(bool zero_command)
{
    return zero_command ? std::array<double, 3>{0.0, 0.0, 0.0}
                        : std::array<double, 3>{10.0, 20.0, 30.0};
}

std::string commandName(bool zero_command)
{
    return zero_command ? "ZeroPressure" : "NonzeroPressure";
}

struct FakeClock
{
    Clock::time_point current{Milliseconds{100}};

    Clock::time_point now() const
    {
        return current;
    }
};

struct FakeDac
{
    explicit FakeDac(FakeClock & fake_clock) : clock(fake_clock) {}

    bool write(std::size_t channel, double pressure)
    {
        attempts.emplace_back(channel, pressure);
        clock.current += write_duration.at(channel);
        return !failed_channel || channel != *failed_channel;
    }

    FakeClock & clock;
    std::array<Milliseconds, 3> write_duration{};
    std::optional<std::size_t> failed_channel;
    std::vector<std::pair<std::size_t, double>> attempts;
};

void expectAttempts(
    const FakeDac & dac, const std::array<double, 3> & command, std::size_t count)
{
    ASSERT_EQ(dac.attempts.size(), count);
    for (std::size_t channel = 0; channel < count; ++channel) {
        EXPECT_EQ(dac.attempts[channel].first, channel);
        EXPECT_DOUBLE_EQ(dac.attempts[channel].second, command[channel]);
    }
}

// Both kinds of command use the same original deadline, including zero pressure.
using BoundaryCase = std::tuple<bool, int>;
class ExpiredBeforeWriteTest : public testing::TestWithParam<BoundaryCase> {};

TEST_P(ExpiredBeforeWriteTest, DoesNotCallAnyDacOrExtendTheDeadline)
{
    const auto [zero_command, overdue_ms] = GetParam();
    FakeClock clock;
    FakeDac dac(clock);
    const auto command = pressures(zero_command);
    const auto deadline = clock.current + kTtl;
    clock.current = deadline + Milliseconds{overdue_ms};

    const auto result = writePressureBeforeDeadline(
        command, deadline, [&] {return clock.now();},
        [&](std::size_t channel, double pressure) {return dac.write(channel, pressure);});

    EXPECT_EQ(result.status, PressureWriteStatus::ExpiredBeforeWrite);
    EXPECT_EQ(result.channels_written, 0U);
    EXPECT_TRUE(dac.attempts.empty());
}

INSTANTIATE_TEST_SUITE_P(
    Commands, ExpiredBeforeWriteTest,
    testing::Combine(testing::Bool(), testing::Values(0, 1)),
    [](const testing::TestParamInfo<BoundaryCase> & info) {
        return commandName(std::get<0>(info.param)) +
               (std::get<1>(info.param) == 0 ? "AtDeadline" : "AfterDeadline");
    });

using WriteExpiryCase = std::tuple<bool, std::size_t, int>;
class ExpiredDuringWriteTest : public testing::TestWithParam<WriteExpiryCase> {};

TEST_P(ExpiredDuringWriteTest, CountsTheCompletedDacButRejectsTheTriple)
{
    const auto [zero_command, expired_channel, overdue_ms] = GetParam();
    FakeClock clock;
    FakeDac dac(clock);
    const auto command = pressures(zero_command);
    const auto deadline = clock.current + kTtl;
    dac.write_duration[expired_channel] = kTtl + Milliseconds{overdue_ms};

    const auto result = writePressureBeforeDeadline(
        command, deadline, [&] {return clock.now();},
        [&](std::size_t channel, double pressure) {return dac.write(channel, pressure);});

    EXPECT_EQ(result.status, PressureWriteStatus::ExpiredDuringWrite);
    EXPECT_EQ(result.channels_written, expired_channel + 1);
    expectAttempts(dac, command, expired_channel + 1);
    // The third DAC returning successfully still cannot make an expired triple valid.
    EXPECT_GE(clock.current, deadline);
}

INSTANTIATE_TEST_SUITE_P(
    CommandsAndChannels, ExpiredDuringWriteTest,
    testing::Combine(testing::Bool(), testing::Values(std::size_t{0}, std::size_t{1},
                                                    std::size_t{2}),
                     testing::Values(0, 1)),
    [](const testing::TestParamInfo<WriteExpiryCase> & info) {
        return commandName(std::get<0>(info.param)) + "Channel" +
               std::to_string(std::get<1>(info.param)) +
               (std::get<2>(info.param) == 0 ? "AtDeadline" : "AfterDeadline");
    });

using ChannelCase = std::tuple<bool, std::size_t>;
class SchedulingDelayTest : public testing::TestWithParam<ChannelCase> {};

TEST_P(SchedulingDelayTest, RechecksDeadlineBeforeTheNextDac)
{
    const auto [zero_command, completed_channels] = GetParam();
    FakeClock clock;
    FakeDac dac(clock);
    const auto command = pressures(zero_command);
    const auto deadline = clock.current + kTtl;
    std::size_t checks_after_write = 0;
    auto now = [&] {
        if (dac.attempts.size() == completed_channels) {
            // The post-write check succeeds; scheduling delay then consumes the TTL
            // before the next channel's pre-write check. No real sleeping is used.
            if (++checks_after_write >= 2) {
                clock.current = deadline;
            }
        }
        return clock.now();
    };

    const auto result = writePressureBeforeDeadline(
        command, deadline, now,
        [&](std::size_t channel, double pressure) {return dac.write(channel, pressure);});

    EXPECT_EQ(result.status, PressureWriteStatus::ExpiredDuringWrite);
    EXPECT_EQ(result.channels_written, completed_channels);
    expectAttempts(dac, command, completed_channels);
    EXPECT_GE(checks_after_write, 2U);
}

INSTANTIATE_TEST_SUITE_P(
    CommandsAndGaps, SchedulingDelayTest,
    testing::Combine(testing::Bool(), testing::Values(std::size_t{1}, std::size_t{2})),
    [](const testing::TestParamInfo<ChannelCase> & info) {
        return commandName(std::get<0>(info.param)) + "AfterChannel" +
               std::to_string(std::get<1>(info.param) - 1);
    });

class SuccessfulWriteTest : public testing::TestWithParam<bool> {};

TEST_P(SuccessfulWriteTest, FinishesAllThreeChannelsBeforeTheOriginalDeadline)
{
    FakeClock clock;
    FakeDac dac(clock);
    const auto command = pressures(GetParam());
    const auto deadline = clock.current + kTtl;
    dac.write_duration = {Milliseconds{10}, Milliseconds{10}, Milliseconds{29}};

    const auto result = writePressureBeforeDeadline(
        command, deadline, [&] {return clock.now();},
        [&](std::size_t channel, double pressure) {return dac.write(channel, pressure);});

    EXPECT_EQ(result.status, PressureWriteStatus::Success);
    EXPECT_EQ(result.channels_written, 3U);
    expectAttempts(dac, command, 3);
    EXPECT_EQ(clock.current, deadline - Milliseconds{1});
}

INSTANTIATE_TEST_SUITE_P(
    Commands, SuccessfulWriteTest, testing::Bool(),
    [](const testing::TestParamInfo<bool> & info) {return commandName(info.param);});

class DacFailureTest : public testing::TestWithParam<ChannelCase> {};

TEST_P(DacFailureTest, CountsOnlySuccessfulWritesAndDoesNotCallLaterChannels)
{
    const auto [zero_command, failed_channel] = GetParam();
    FakeClock clock;
    FakeDac dac(clock);
    const auto command = pressures(zero_command);
    const auto deadline = clock.current + kTtl;
    dac.failed_channel = failed_channel;

    const auto result = writePressureBeforeDeadline(
        command, deadline, [&] {return clock.now();},
        [&](std::size_t channel, double pressure) {return dac.write(channel, pressure);});

    EXPECT_EQ(result.status, PressureWriteStatus::DacError);
    EXPECT_EQ(result.channels_written, failed_channel);
    expectAttempts(dac, command, failed_channel + 1);
}

INSTANTIATE_TEST_SUITE_P(
    CommandsAndChannels, DacFailureTest,
    testing::Combine(testing::Bool(), testing::Values(std::size_t{0}, std::size_t{1},
                                                    std::size_t{2})),
    [](const testing::TestParamInfo<ChannelCase> & info) {
        return commandName(std::get<0>(info.param)) + "Channel" +
               std::to_string(std::get<1>(info.param));
    });

}  // namespace
