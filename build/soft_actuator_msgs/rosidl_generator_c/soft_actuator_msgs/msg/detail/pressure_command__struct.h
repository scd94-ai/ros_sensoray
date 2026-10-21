// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from soft_actuator_msgs:msg/PressureCommand.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "soft_actuator_msgs/msg/pressure_command.h"


#ifndef SOFT_ACTUATOR_MSGS__MSG__DETAIL__PRESSURE_COMMAND__STRUCT_H_
#define SOFT_ACTUATOR_MSGS__MSG__DETAIL__PRESSURE_COMMAND__STRUCT_H_

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
// Member 'reason'
#include "rosidl_runtime_c/string.h"
// Member 'valid_for'
#include "builtin_interfaces/msg/detail/duration__struct.h"

/// Struct defined in msg/PressureCommand in the package soft_actuator_msgs.
/**
  * One three-channel pressure command for one actuator.
  * header.stamp is ROS publication time, not a core monotonic timestamp.
 */
typedef struct soft_actuator_msgs__msg__PressureCommand
{
  std_msgs__msg__Header header;
  /// Identifies one controller process session; reject acknowledgements from other sessions.
  rosidl_runtime_c__String session_id;
  /// Increases within this session. A writer must acknowledge the exact command it wrote.
  uint64_t sequence;
  /// Requested channel pressures [channel 1, channel 2, channel 3], in kPa.
  double pressure_kpa[3];
  /// Request the writer's emergency-zero path, bypassing ordinary slew/hold policies.
  bool force_zero;
  /// Maximum command validity duration; the writer must enforce command expiry/watchdog.
  builtin_interfaces__msg__Duration valid_for;
  /// Human-readable command purpose or reason, not a machine-readable status code.
  rosidl_runtime_c__String reason;
} soft_actuator_msgs__msg__PressureCommand;

// Struct for a sequence of soft_actuator_msgs__msg__PressureCommand.
typedef struct soft_actuator_msgs__msg__PressureCommand__Sequence
{
  soft_actuator_msgs__msg__PressureCommand * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} soft_actuator_msgs__msg__PressureCommand__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // SOFT_ACTUATOR_MSGS__MSG__DETAIL__PRESSURE_COMMAND__STRUCT_H_
