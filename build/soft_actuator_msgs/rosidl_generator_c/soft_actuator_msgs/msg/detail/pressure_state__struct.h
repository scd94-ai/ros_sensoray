// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from soft_actuator_msgs:msg/PressureState.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "soft_actuator_msgs/msg/pressure_state.h"


#ifndef SOFT_ACTUATOR_MSGS__MSG__DETAIL__PRESSURE_STATE__STRUCT_H_
#define SOFT_ACTUATOR_MSGS__MSG__DETAIL__PRESSURE_STATE__STRUCT_H_

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
// Member 'fault'
#include "rosidl_runtime_c/string.h"

/// Struct defined in msg/PressureState in the package soft_actuator_msgs.
/**
  * Writer acknowledgement/status for one actuator.
  * header.stamp is the writer's ROS publication time for observation.
  * The controller uses the acknowledged command's local send time as a conservative
  * lower bound for write time; delayed/repeated ACKs never refresh an old command.
 */
typedef struct soft_actuator_msgs__msg__PressureState
{
  std_msgs__msg__Header header;
  /// Echo the session_id of the command acknowledged by this message.
  rosidl_runtime_c__String session_id;
  /// Echo the sequence of the command acknowledged by this message.
  uint64_t command_sequence;
  /// The three pressure commands actually written successfully to the board, in kPa.
  /// These values are NOT measured chamber pressures and do not prove physical pressure response.
  /// If write_success is false, this field must not update the controller's write history.
  double written_pressure_kpa[3];
  /// True only after the actual board write succeeds, never merely after ROS message receipt.
  bool write_success;
  /// True when the writer is ready to accept output commands.
  bool ready;
  /// Empty when no writer fault is active; otherwise a human-readable fault description.
  rosidl_runtime_c__String fault;
} soft_actuator_msgs__msg__PressureState;

// Struct for a sequence of soft_actuator_msgs__msg__PressureState.
typedef struct soft_actuator_msgs__msg__PressureState__Sequence
{
  soft_actuator_msgs__msg__PressureState * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} soft_actuator_msgs__msg__PressureState__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // SOFT_ACTUATOR_MSGS__MSG__DETAIL__PRESSURE_STATE__STRUCT_H_
