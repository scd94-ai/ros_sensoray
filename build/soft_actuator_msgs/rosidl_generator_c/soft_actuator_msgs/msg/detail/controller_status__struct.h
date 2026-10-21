// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from soft_actuator_msgs:msg/ControllerStatus.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "soft_actuator_msgs/msg/controller_status.h"


#ifndef SOFT_ACTUATOR_MSGS__MSG__DETAIL__CONTROLLER_STATUS__STRUCT_H_
#define SOFT_ACTUATOR_MSGS__MSG__DETAIL__CONTROLLER_STATUS__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>

// Constants defined in the message

// Include directives for member types
// Member 'header'
#include "std_msgs/msg/detail/header__struct.h"
// Member 'session_id'
// Member 'state'
// Member 'requested_mode'
// Member 'effective_mode'
// Member 'feedback_reason'
// Member 'contact_state'
#include "rosidl_runtime_c/string.h"

/// Struct defined in msg/ControllerStatus in the package soft_actuator_msgs.
/**
  * Controller diagnostics for one actuator. Position vectors use the PCC base frame, in mm.
  * header.frame_id names the PCC base frame; header.stamp is ROS publication time.
 */
typedef struct soft_actuator_msgs__msg__ControllerStatus
{
  std_msgs__msg__Header header;
  rosidl_runtime_c__String session_id;
  /// Adapter-level state (for example disabled, waiting for input, or running).
  rosidl_runtime_c__String state;
  bool enabled;
  /// Requested mode and mode actually used by the current core step.
  rosidl_runtime_c__String requested_mode;
  rosidl_runtime_c__String effective_mode;
  rosidl_runtime_c__String feedback_reason;
  bool numeric_valid;
  bool pressure_limited;
  /// True only when error_mm is based on actual valid feedback rather than model prediction.
  bool measured_error_valid;
  rosidl_runtime_c__String contact_state;
  double target_mm[3];
  double predicted_mm[3];
  double error_mm[3];
  /// Core pressure before its internal limits, in kPa.
  double requested_pressure_kpa[3];
  /// Core pressure after its internal limits, in kPa.
  double core_pressure_kpa[3];
  /// Adapter output-policy result sent to the writer, in kPa; not proof of a successful write.
  double output_pressure_kpa[3];
  /// Most recent acknowledged successful board write, in kPa; not measured chamber pressure.
  double last_written_pressure_kpa[3];
  /// Whether the last accepted writer report is fresh according to local monotonic receipt time.
  bool writer_fresh;
  /// Adapter-assigned sequence of the latest distinct feedback source frame.
  uint64_t feedback_sequence;
} soft_actuator_msgs__msg__ControllerStatus;

// Struct for a sequence of soft_actuator_msgs__msg__ControllerStatus.
typedef struct soft_actuator_msgs__msg__ControllerStatus__Sequence
{
  soft_actuator_msgs__msg__ControllerStatus * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} soft_actuator_msgs__msg__ControllerStatus__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // SOFT_ACTUATOR_MSGS__MSG__DETAIL__CONTROLLER_STATUS__STRUCT_H_
