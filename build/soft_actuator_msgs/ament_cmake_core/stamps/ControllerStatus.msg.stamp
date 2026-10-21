# Controller diagnostics for one actuator. Position vectors use the PCC base frame, in mm.
# header.frame_id names the PCC base frame; header.stamp is ROS publication time.
std_msgs/Header header
string session_id
# Adapter-level state (for example disabled, waiting for input, or running).
string state
bool enabled
# Requested mode and mode actually used by the current core step.
string requested_mode
string effective_mode
string feedback_reason
bool numeric_valid
bool pressure_limited
# True only when error_mm is based on actual valid feedback rather than model prediction.
bool measured_error_valid
string contact_state
float64[3] target_mm
float64[3] predicted_mm
float64[3] error_mm
# Core pressure before its internal limits, in kPa.
float64[3] requested_pressure_kpa
# Core pressure after its internal limits, in kPa.
float64[3] core_pressure_kpa
# Adapter output-policy result sent to the writer, in kPa; not proof of a successful write.
float64[3] output_pressure_kpa
# Most recent acknowledged successful board write, in kPa; not measured chamber pressure.
float64[3] last_written_pressure_kpa
# Whether the last accepted writer report is fresh according to local monotonic receipt time.
bool writer_fresh
# Adapter-assigned sequence of the latest distinct feedback source frame.
uint64 feedback_sequence
