// Pure POSIX signal lifecycle; no ROS, SDK, device or output operations.
#include "hangup_signal.hpp"
#include <gtest/gtest.h>

namespace {
volatile std::sig_atomic_t previous_calls = 0;
void previousHandler(int) { previous_calls = previous_calls + 1; }
}
TEST(HangupSignal, FlagOnlyDuringStartupAndRepeatedCleanupSignals) {
    sensoray826_ros::HangupSignalGuard guard;
    EXPECT_FALSE(guard.requested());
    ASSERT_EQ(raise(SIGHUP), 0);
    EXPECT_TRUE(guard.requested());
    // Cleanup can continue after another SIGHUP; no exception/exit from handler.
    ASSERT_EQ(raise(SIGHUP), 0);
    EXPECT_TRUE(guard.requested());
}
TEST(HangupSignal, RestoresPreviousHandlerAfterCleanup) {
    struct sigaction action {}, original {};
    action.sa_handler = previousHandler;
    sigemptyset(&action.sa_mask);
    ASSERT_EQ(sigaction(SIGHUP, &action, &original), 0);
    previous_calls = 0;
    {
        sensoray826_ros::HangupSignalGuard guard;
        EXPECT_EQ(raise(SIGHUP), 0);
        EXPECT_TRUE(guard.requested());
        EXPECT_EQ(previous_calls, 0);
    }
    EXPECT_EQ(raise(SIGHUP), 0);
    EXPECT_EQ(previous_calls, 1);
    EXPECT_EQ(sigaction(SIGHUP, &original, nullptr), 0);
}
