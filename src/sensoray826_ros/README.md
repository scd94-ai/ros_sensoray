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

## Raw potentiometers and ADC-only mode (2026-10-28)

The new `sensoray826_msgs` package is defined once in this driver's workspace.
It does not change either `soft_actuator_msgs` schema. The raw topic is
`/sensoray/potentiometers` (`sensoray826_msgs/msg/PotentiometerState`),
BEST_EFFORT, VOLATILE, KEEP_LAST(1). Subscribers must request compatible QoS;
a default RELIABLE subscriber does not match this publisher.

| Parameter | Default | Meaning |
|---|---:|---|
| `board` | 0 | Validated local board |
| `enable_pressure` | true | Existing three-channel pressure writer/watchdog |
| `enable_potentiometers` | false | Enable independent ADC worker/publication |
| `potentiometer_supply` | false | Add raw AIN9/slot6 supply observation |
| `potentiometer_settling_us` | 100 | ADC settling; calibration expects 100 us |
| `potentiometer_poll_rate_hz` | 200 | Dedicated nonblocking acquisition thread |
| `potentiometer_publish_rate_hz` | 200 | Separate lower-priority latest publisher |

These parameters are read-only after initialization; restart the sole owner to
change hardware/worker configuration.

Ordinary `ros2 run sensoray826_ros sensoray_node` preserves pressure-only mode.
After sourcing the separate `install_jaw_input/setup.bash` (or `.zsh`), the two
explicit launch options are:

```bash
ros2 launch sensoray826_ros adc_only.launch.py
ros2 launch sensoray826_ros pressure_and_adc.launch.py
```

These are hardware launch commands, not offline tests. Run only one board owner;
stop the calibration server or any prior native/ROS owner deliberately before
starting a new owner. `adc_only.launch.py` constructs no Festo object, creates no
pressure subscription/watchdog/state publisher, and never configures or writes
DACs, including startup, failure and shutdown. Combined mode is a single owner
for both features. Neither launch emits robot/jaw commands, filtering, profile
mapping or supply-ratio correction. An optional `supply:=true` requires the
already-verified AIN9 differential wiring.

AIN11/slot4 is finger and AIN10/slot5 is leftdevice. Voltages are raw +/-10 V ADC
observations; electrical plausibility/filtering/calibration remain downstream.
Each session has a new identity. Header time and sequence are assigned in the
acquisition thread and remain unchanged by publication; repeated source data
or NOTREADY with no data do not create a fresh capture. A critical SDK failure
may create a new invalid acquisition-event snapshot with its error status, not
a valid conversion. Per-slot timestamps are unsigned microseconds and wrap.
MISSEDTRIG data are published invalid with the warning preserved. Missing data
use NaN plus valid=false; consumers must check flags/status before voltage.
Optional supply observation has its own valid flag and source timestamp.

Publication copies the latest snapshot under a short mutex, releases it and
performs DDS work on its own thread. On Linux only that publisher thread requests
nice +5, capped at 19; failure is reported. No system-wide scheduling/affinity or
real-time permission changes are made. Pressure callbacks/watchdog retain their
original executor and deadline guard; only the brief serialized SDK operation
can contend with ADC. Acquisition and publication may drop intermediate
snapshots rather than replay a backlog. Consumers must independently reject
stale header/source/receipt data when publications stop; latest values are not
a source freshness guarantee.

Shutdown joins acquisition and publication threads before zeroing initialized
pressure channels (pressure modes only), stopping/restoring ADC with readback,
and closing the sole SDK session. Existing rclcpp SIGINT/SIGTERM shutdown is
used; forced process death cannot restore an in-memory snapshot. An already
running ADC is refused rather than silently taken over.

On this shared Linux host, some fd/maps inspection is restricted even for the
current UID. The native ownership audit then runs the fixed read-only command
`sudo -n /usr/bin/fuser -v /dev/s826_0` with a 2-second deadline and bounded
cleanup. Only a completed no-holder result with no output permits SDK opening;
permission errors, timeout and ambiguous results refuse startup. No sudo policy
is changed by this feature. The existing advisory lock and ADC-disabled check
remain necessary; the audit is not an exclusive kernel device lease.

Build native `sensoray826/install_jaw_input` first, then use separate colcon
`build_jaw_input`, `install_jaw_input`, and `log_jaw_input` directories with
`sensoray826_driver_DIR` pointing at that native install. `soft_actuator_core`
continues to use the existing numeric-fix install. The ROS tests retain every
pressure deadline-guard case and add a real-node/in-memory-SDK binary for
ADC-only, pressure-only and combined startup/shutdown. Set
`SENSORAY826_TEST_SOURCE_DIR` if the native source is not at the local sibling
path. The fake binary is not installed, links no Sensoray SDK, uses isolated
localhost Domain 184, and performs no hardware operations.
