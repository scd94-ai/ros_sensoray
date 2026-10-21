# Writer acknowledgement/status for one actuator.
# header.stamp is the writer's ROS publication time for observation.
# The controller uses the acknowledged command's local send time as a conservative
# lower bound for write time; delayed/repeated ACKs never refresh an old command.
std_msgs/Header header
# Echo the session_id of the command acknowledged by this message.
string session_id
# Echo the sequence of the command acknowledged by this message.
uint64 command_sequence
# The three pressure commands actually written successfully to the board, in kPa.
# These values are NOT measured chamber pressures and do not prove physical pressure response.
# If write_success is false, this field must not update the controller's write history.
float64[3] written_pressure_kpa
# True only after the actual board write succeeds, never merely after ROS message receipt.
bool write_success
# True when the writer is ready to accept output commands.
bool ready
# Empty when no writer fault is active; otherwise a human-readable fault description.
string fault
