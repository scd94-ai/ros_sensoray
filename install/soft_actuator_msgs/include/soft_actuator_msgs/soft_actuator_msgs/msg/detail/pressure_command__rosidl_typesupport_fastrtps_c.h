// generated from rosidl_typesupport_fastrtps_c/resource/idl__rosidl_typesupport_fastrtps_c.h.em
// with input from soft_actuator_msgs:msg/PressureCommand.idl
// generated code does not contain a copyright notice
#ifndef SOFT_ACTUATOR_MSGS__MSG__DETAIL__PRESSURE_COMMAND__ROSIDL_TYPESUPPORT_FASTRTPS_C_H_
#define SOFT_ACTUATOR_MSGS__MSG__DETAIL__PRESSURE_COMMAND__ROSIDL_TYPESUPPORT_FASTRTPS_C_H_


#include <stddef.h>
#include "rosidl_runtime_c/message_type_support_struct.h"
#include "rosidl_typesupport_interface/macros.h"
#include "soft_actuator_msgs/msg/rosidl_typesupport_fastrtps_c__visibility_control.h"
#include "soft_actuator_msgs/msg/detail/pressure_command__struct.h"
#include "fastcdr/Cdr.h"

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_soft_actuator_msgs
bool cdr_serialize_soft_actuator_msgs__msg__PressureCommand(
  const soft_actuator_msgs__msg__PressureCommand * ros_message,
  eprosima::fastcdr::Cdr & cdr);

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_soft_actuator_msgs
bool cdr_deserialize_soft_actuator_msgs__msg__PressureCommand(
  eprosima::fastcdr::Cdr &,
  soft_actuator_msgs__msg__PressureCommand * ros_message);

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_soft_actuator_msgs
size_t get_serialized_size_soft_actuator_msgs__msg__PressureCommand(
  const void * untyped_ros_message,
  size_t current_alignment);

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_soft_actuator_msgs
size_t max_serialized_size_soft_actuator_msgs__msg__PressureCommand(
  bool & full_bounded,
  bool & is_plain,
  size_t current_alignment);

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_soft_actuator_msgs
bool cdr_serialize_key_soft_actuator_msgs__msg__PressureCommand(
  const soft_actuator_msgs__msg__PressureCommand * ros_message,
  eprosima::fastcdr::Cdr & cdr);

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_soft_actuator_msgs
size_t get_serialized_size_key_soft_actuator_msgs__msg__PressureCommand(
  const void * untyped_ros_message,
  size_t current_alignment);

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_soft_actuator_msgs
size_t max_serialized_size_key_soft_actuator_msgs__msg__PressureCommand(
  bool & full_bounded,
  bool & is_plain,
  size_t current_alignment);

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_soft_actuator_msgs
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, soft_actuator_msgs, msg, PressureCommand)();

#ifdef __cplusplus
}
#endif

#endif  // SOFT_ACTUATOR_MSGS__MSG__DETAIL__PRESSURE_COMMAND__ROSIDL_TYPESUPPORT_FASTRTPS_C_H_
