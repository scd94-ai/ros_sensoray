# One three-channel pressure command for one actuator.
# header.stamp is ROS publication time, not a core monotonic timestamp.
std_msgs/Header header
# Identifies one controller process session; reject acknowledgements from other sessions.
string session_id
# Increases within this session. A writer must acknowledge the exact command it wrote.
uint64 sequence
# Requested channel pressures [channel 1, channel 2, channel 3], in kPa.
float64[3] pressure_kpa
# Request the writer's emergency-zero path, bypassing ordinary slew/hold policies.
bool force_zero
# Maximum command validity duration; the writer must enforce command expiry/watchdog.
builtin_interfaces/Duration valid_for
# Human-readable command purpose or reason, not a machine-readable status code.
string reason
