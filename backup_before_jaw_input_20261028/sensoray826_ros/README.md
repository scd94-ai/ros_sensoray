# Sensoray 826 ROS 2 node (Humble / Jazzy)

This package wraps the existing `Sensoray826` and `Festo` classes and deliberately
does not modify the standalone executable.

## Topics

- Subscribes: `/soft_haptics/right/pressure_command` — `soft_actuator_msgs/msg/PressureCommand`
- Publishes: `/soft_haptics/right/sensoray_state` — `soft_actuator_msgs/msg/PressureState`

## Exact message contract (provided by Jiaji)

The adapter now matches the supplied `PressureCommand.msg` and
`PressureState.msg` fields. Commands contain `session_id` (string),
`sequence` (uint64), `pressure_kpa` (three float64 values),
`force_zero` (bool), `valid_for` (ROS Duration), and `reason`.
State publishes `header.stamp`, matching `session_id`,
`command_sequence`, `written_pressure_kpa`, `write_success`,
`ready`, and `fault`.

Get the actual message package from:
`/home/erie_lab/Documents/jxs1778/soft_actuator_ros2_ws/src/soft_actuator_ros2/soft_actuator_msgs`.
Copy or link it to your workspace `src/`, then build with colcon.

## Workspace and dependencies

This package is in
`/home/erie_lab/Documents/soft_actuator_ros2_ws/src/sensoray826_ros`.
The controller is in the separate workspace
`/home/erie_lab/Documents/jxs1778/soft_actuator_ros2_ws`.
The former `sensoray826/ros2/sensoray826_ros` path is obsolete.

CMake imports `sensoray826::driver` and `soft_actuator::core`. On this host their
package directories are:

- `/home/erie_lab/Documents/sensoray826/install_quiet_fix/lib/cmake/sensoray826_driver`
- `/home/erie_lab/Documents/jxs1778/soft_actuator_ros2_ws/core_install_numeric_fix/lib/cmake/soft_actuator_core`

Use matching ROS domains in all terminals. Activate the shared Python environment
with `. env.zsh t` in zsh, source Jazzy, then source the controller and driver
workspaces' `install/local_setup.zsh` files. The executable is
`ros2 run sensoray826_ros sensoray_node`; it initializes hardware and commands
zero pressure immediately. Run one board owner, without the standalone app or
the mock writer on the same topics.

## Deadline protection and offline tests

Every command retains the remaining lifetime derived from its source timestamp
and TTL. `pressure_write_guard.hpp` checks the steady-clock deadline immediately
before and after each DAC call. Expiry prevents subsequent requested writes and
enters the latched fault path, which attempts zero on every initialized channel.
Successful acknowledgements have a further deadline check immediately before
publication. Fault zeroing is deliberately independent of the expired deadline.

The guard uses injected clock and channel-write functions in its gtests; tests
do not initialize ROS, load the Sensoray SDK, or open hardware. They cover exact
deadline boundaries, write overruns, scheduling gaps, channel failures, and zero
commands. A blocking SDK call cannot be interrupted by these checks; an overrun
is detected when it returns. DDS delivery can still be delayed, so the controller
also validates ACK age against the original command's send time.

Use separate build/install directories while an older driver is running. From
this workspace, with the installed messages sourced:

```zsh
python /usr/bin/colcon --log-base log_quiet_fix build \
  --base-paths src/sensoray826_ros \
  --build-base build_quiet_fix --install-base install_quiet_fix \
  --packages-select sensoray826_ros --executor sequential \
  --cmake-args -DBUILD_TESTING=ON -DCMAKE_BUILD_TYPE=Release \
  -Dsensoray826_driver_DIR=/home/erie_lab/Documents/sensoray826/install_quiet_fix/lib/cmake/sensoray826_driver \
  -Dsoft_actuator_core_DIR=/home/erie_lab/Documents/jxs1778/soft_actuator_ros2_ws/core_install_numeric_fix/lib/cmake/soft_actuator_core
ctest --test-dir build_quiet_fix/sensoray826_ros --output-on-failure
```

Building does not replace an already running process. After stopping the old
controller and driver, source `install_quiet_fix/local_setup.zsh` after the
regular overlays before restarting `sensoray_node`. Check `ros2 pkg prefix
sensoray826_ros` to confirm the selected installation. Restart the controller
and complete a new zero-pressure handshake before manually enabling it.

## Console output and timeout diagnosis

The ROS node uses `Festo::setPressure(pressure, false)` for normal, startup-zero,
and fault-zero writes. The native library preserves its original single-argument
interface and standalone diagnostic output, while the new overload suppresses
only successful per-write output. Native initialization retains its brief
one-time output; startup and failure diagnostics remain. Build
and install that native library into `sensoray826/install_quiet_fix` before using
the ROS build command above; linking the original native archive will not apply
this change. Pressure mapping, DAC calls, error returns, command lifetime, and
zero-write/ACK rules are unchanged.

Previously, three channels at 100 Hz produced approximately 900 console lines
per second in the single-threaded ROS callback. Terminal backpressure can block
that callback. Removing this path does not prove that logging caused a particular
past timeout or eliminate SDK/scheduling/DDS delays.

Timeout faults now identify their trigger: `pressure_command_expired_on_receive`
means the source timestamp already exceeded TTL at callback entry; the error log
includes sequence, source age, and TTL. `pressure_command_expired_watchdog` means
no accepted command renewed the deadline in time; its log includes last sequence
and deadline lateness. Per-DAC and pre-ACK deadline faults remain distinct. All
these faults continue to latch until driver restart. Never increase TTL just to
hide an unexplained timeout.

## Operational behavior

- Board 0 and three FESTOs; DAC 0/1/2; AIN 15/14/13. The command mapping is
  -50..+50 kPa to 0..5 V, so zero kPa commands 2.5 V. Confirm the physical
  regulators match this mapping before use.
- Every initialized FESTO receives a zero-kPa startup command.
- No ADC measurement or empirical feedback value is used as write acknowledgment.
- Nonzero commands must be finite. The output policy applies the global
  **[-40, +50] kPa** envelope and a 20 kPa per-write slew limit relative to
  the last complete triple. The hardcoded study guard holds the previous whole
  triple if any post-slew channel is at or beyond -40/+45 kPa. ACKs report the
  values actually written, including policy holds.
- Commands include bounded validity duration; an expired command attempts
  to write zero on all three channels and latches a fault until restart.
- A partial DAC failure attempts zero on all channels and latches a fault.
- The state includes only the **last fully completed triple**. A partial
  write means physical channel states can differ; `ready=false` and the
  fault string flag this condition.
- Force-zero bypasses pressure/delta checks, but still requires a valid TTL.
- The first accepted session is locked until driver restart. After restarting
  the controller or latching a driver fault, restart the driver as well.
- Source age is subtracted from validity; receipt does not renew the full TTL.
- ROS shutdown is best-effort only; a separate emergency stop and hardware
  pressure-relief design must address process crashes and power loss.
- Offline tests and a successful build do not establish live pneumatic behavior.

The provisional Festo analog feedback mapping remains unchanged in the
standalone hardware classes; it is not used to claim physical pressure.
