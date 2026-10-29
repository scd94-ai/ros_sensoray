// generated from rosidl_typesupport_fastrtps_c/resource/idl__rosidl_typesupport_fastrtps_c.h.em
// with input from sensoray826_msgs:msg/PotentiometerState.idl
// generated code does not contain a copyright notice
#ifndef SENSORAY826_MSGS__MSG__DETAIL__POTENTIOMETER_STATE__ROSIDL_TYPESUPPORT_FASTRTPS_C_H_
#define SENSORAY826_MSGS__MSG__DETAIL__POTENTIOMETER_STATE__ROSIDL_TYPESUPPORT_FASTRTPS_C_H_


#include <stddef.h>
#include "rosidl_runtime_c/message_type_support_struct.h"
#include "rosidl_typesupport_interface/macros.h"
#include "sensoray826_msgs/msg/rosidl_typesupport_fastrtps_c__visibility_control.h"
#include "sensoray826_msgs/msg/detail/potentiometer_state__struct.h"
#include "fastcdr/Cdr.h"

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_sensoray826_msgs
bool cdr_serialize_sensoray826_msgs__msg__PotentiometerState(
  const sensoray826_msgs__msg__PotentiometerState * ros_message,
  eprosima::fastcdr::Cdr & cdr);

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_sensoray826_msgs
bool cdr_deserialize_sensoray826_msgs__msg__PotentiometerState(
  eprosima::fastcdr::Cdr &,
  sensoray826_msgs__msg__PotentiometerState * ros_message);

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_sensoray826_msgs
size_t get_serialized_size_sensoray826_msgs__msg__PotentiometerState(
  const void * untyped_ros_message,
  size_t current_alignment);

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_sensoray826_msgs
size_t max_serialized_size_sensoray826_msgs__msg__PotentiometerState(
  bool & full_bounded,
  bool & is_plain,
  size_t current_alignment);

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_sensoray826_msgs
bool cdr_serialize_key_sensoray826_msgs__msg__PotentiometerState(
  const sensoray826_msgs__msg__PotentiometerState * ros_message,
  eprosima::fastcdr::Cdr & cdr);

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_sensoray826_msgs
size_t get_serialized_size_key_sensoray826_msgs__msg__PotentiometerState(
  const void * untyped_ros_message,
  size_t current_alignment);

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_sensoray826_msgs
size_t max_serialized_size_key_sensoray826_msgs__msg__PotentiometerState(
  bool & full_bounded,
  bool & is_plain,
  size_t current_alignment);

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_sensoray826_msgs
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, sensoray826_msgs, msg, PotentiometerState)();

#ifdef __cplusplus
}
#endif

#endif  // SENSORAY826_MSGS__MSG__DETAIL__POTENTIOMETER_STATE__ROSIDL_TYPESUPPORT_FASTRTPS_C_H_
