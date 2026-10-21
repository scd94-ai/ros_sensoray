// generated from rosidl_typesupport_introspection_c/resource/idl__type_support.c.em
// with input from soft_actuator_msgs:msg/ControllerStatus.idl
// generated code does not contain a copyright notice

#include <stddef.h>
#include "soft_actuator_msgs/msg/detail/controller_status__rosidl_typesupport_introspection_c.h"
#include "soft_actuator_msgs/msg/rosidl_typesupport_introspection_c__visibility_control.h"
#include "rosidl_typesupport_introspection_c/field_types.h"
#include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/message_introspection.h"
#include "soft_actuator_msgs/msg/detail/controller_status__functions.h"
#include "soft_actuator_msgs/msg/detail/controller_status__struct.h"


// Include directives for member types
// Member `header`
#include "std_msgs/msg/header.h"
// Member `header`
#include "std_msgs/msg/detail/header__rosidl_typesupport_introspection_c.h"
// Member `session_id`
// Member `state`
// Member `requested_mode`
// Member `effective_mode`
// Member `feedback_reason`
// Member `contact_state`
#include "rosidl_runtime_c/string_functions.h"

#ifdef __cplusplus
extern "C"
{
#endif

void soft_actuator_msgs__msg__ControllerStatus__rosidl_typesupport_introspection_c__ControllerStatus_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  soft_actuator_msgs__msg__ControllerStatus__init(message_memory);
}

void soft_actuator_msgs__msg__ControllerStatus__rosidl_typesupport_introspection_c__ControllerStatus_fini_function(void * message_memory)
{
  soft_actuator_msgs__msg__ControllerStatus__fini(message_memory);
}

size_t soft_actuator_msgs__msg__ControllerStatus__rosidl_typesupport_introspection_c__size_function__ControllerStatus__target_mm(
  const void * untyped_member)
{
  (void)untyped_member;
  return 3;
}

const void * soft_actuator_msgs__msg__ControllerStatus__rosidl_typesupport_introspection_c__get_const_function__ControllerStatus__target_mm(
  const void * untyped_member, size_t index)
{
  const double * member =
    (const double *)(untyped_member);
  return &member[index];
}

void * soft_actuator_msgs__msg__ControllerStatus__rosidl_typesupport_introspection_c__get_function__ControllerStatus__target_mm(
  void * untyped_member, size_t index)
{
  double * member =
    (double *)(untyped_member);
  return &member[index];
}

void soft_actuator_msgs__msg__ControllerStatus__rosidl_typesupport_introspection_c__fetch_function__ControllerStatus__target_mm(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const double * item =
    ((const double *)
    soft_actuator_msgs__msg__ControllerStatus__rosidl_typesupport_introspection_c__get_const_function__ControllerStatus__target_mm(untyped_member, index));
  double * value =
    (double *)(untyped_value);
  *value = *item;
}

void soft_actuator_msgs__msg__ControllerStatus__rosidl_typesupport_introspection_c__assign_function__ControllerStatus__target_mm(
  void * untyped_member, size_t index, const void * untyped_value)
{
  double * item =
    ((double *)
    soft_actuator_msgs__msg__ControllerStatus__rosidl_typesupport_introspection_c__get_function__ControllerStatus__target_mm(untyped_member, index));
  const double * value =
    (const double *)(untyped_value);
  *item = *value;
}

size_t soft_actuator_msgs__msg__ControllerStatus__rosidl_typesupport_introspection_c__size_function__ControllerStatus__predicted_mm(
  const void * untyped_member)
{
  (void)untyped_member;
  return 3;
}

const void * soft_actuator_msgs__msg__ControllerStatus__rosidl_typesupport_introspection_c__get_const_function__ControllerStatus__predicted_mm(
  const void * untyped_member, size_t index)
{
  const double * member =
    (const double *)(untyped_member);
  return &member[index];
}

void * soft_actuator_msgs__msg__ControllerStatus__rosidl_typesupport_introspection_c__get_function__ControllerStatus__predicted_mm(
  void * untyped_member, size_t index)
{
  double * member =
    (double *)(untyped_member);
  return &member[index];
}

void soft_actuator_msgs__msg__ControllerStatus__rosidl_typesupport_introspection_c__fetch_function__ControllerStatus__predicted_mm(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const double * item =
    ((const double *)
    soft_actuator_msgs__msg__ControllerStatus__rosidl_typesupport_introspection_c__get_const_function__ControllerStatus__predicted_mm(untyped_member, index));
  double * value =
    (double *)(untyped_value);
  *value = *item;
}

void soft_actuator_msgs__msg__ControllerStatus__rosidl_typesupport_introspection_c__assign_function__ControllerStatus__predicted_mm(
  void * untyped_member, size_t index, const void * untyped_value)
{
  double * item =
    ((double *)
    soft_actuator_msgs__msg__ControllerStatus__rosidl_typesupport_introspection_c__get_function__ControllerStatus__predicted_mm(untyped_member, index));
  const double * value =
    (const double *)(untyped_value);
  *item = *value;
}

size_t soft_actuator_msgs__msg__ControllerStatus__rosidl_typesupport_introspection_c__size_function__ControllerStatus__error_mm(
  const void * untyped_member)
{
  (void)untyped_member;
  return 3;
}

const void * soft_actuator_msgs__msg__ControllerStatus__rosidl_typesupport_introspection_c__get_const_function__ControllerStatus__error_mm(
  const void * untyped_member, size_t index)
{
  const double * member =
    (const double *)(untyped_member);
  return &member[index];
}

void * soft_actuator_msgs__msg__ControllerStatus__rosidl_typesupport_introspection_c__get_function__ControllerStatus__error_mm(
  void * untyped_member, size_t index)
{
  double * member =
    (double *)(untyped_member);
  return &member[index];
}

void soft_actuator_msgs__msg__ControllerStatus__rosidl_typesupport_introspection_c__fetch_function__ControllerStatus__error_mm(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const double * item =
    ((const double *)
    soft_actuator_msgs__msg__ControllerStatus__rosidl_typesupport_introspection_c__get_const_function__ControllerStatus__error_mm(untyped_member, index));
  double * value =
    (double *)(untyped_value);
  *value = *item;
}

void soft_actuator_msgs__msg__ControllerStatus__rosidl_typesupport_introspection_c__assign_function__ControllerStatus__error_mm(
  void * untyped_member, size_t index, const void * untyped_value)
{
  double * item =
    ((double *)
    soft_actuator_msgs__msg__ControllerStatus__rosidl_typesupport_introspection_c__get_function__ControllerStatus__error_mm(untyped_member, index));
  const double * value =
    (const double *)(untyped_value);
  *item = *value;
}

size_t soft_actuator_msgs__msg__ControllerStatus__rosidl_typesupport_introspection_c__size_function__ControllerStatus__requested_pressure_kpa(
  const void * untyped_member)
{
  (void)untyped_member;
  return 3;
}

const void * soft_actuator_msgs__msg__ControllerStatus__rosidl_typesupport_introspection_c__get_const_function__ControllerStatus__requested_pressure_kpa(
  const void * untyped_member, size_t index)
{
  const double * member =
    (const double *)(untyped_member);
  return &member[index];
}

void * soft_actuator_msgs__msg__ControllerStatus__rosidl_typesupport_introspection_c__get_function__ControllerStatus__requested_pressure_kpa(
  void * untyped_member, size_t index)
{
  double * member =
    (double *)(untyped_member);
  return &member[index];
}

void soft_actuator_msgs__msg__ControllerStatus__rosidl_typesupport_introspection_c__fetch_function__ControllerStatus__requested_pressure_kpa(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const double * item =
    ((const double *)
    soft_actuator_msgs__msg__ControllerStatus__rosidl_typesupport_introspection_c__get_const_function__ControllerStatus__requested_pressure_kpa(untyped_member, index));
  double * value =
    (double *)(untyped_value);
  *value = *item;
}

void soft_actuator_msgs__msg__ControllerStatus__rosidl_typesupport_introspection_c__assign_function__ControllerStatus__requested_pressure_kpa(
  void * untyped_member, size_t index, const void * untyped_value)
{
  double * item =
    ((double *)
    soft_actuator_msgs__msg__ControllerStatus__rosidl_typesupport_introspection_c__get_function__ControllerStatus__requested_pressure_kpa(untyped_member, index));
  const double * value =
    (const double *)(untyped_value);
  *item = *value;
}

size_t soft_actuator_msgs__msg__ControllerStatus__rosidl_typesupport_introspection_c__size_function__ControllerStatus__core_pressure_kpa(
  const void * untyped_member)
{
  (void)untyped_member;
  return 3;
}

const void * soft_actuator_msgs__msg__ControllerStatus__rosidl_typesupport_introspection_c__get_const_function__ControllerStatus__core_pressure_kpa(
  const void * untyped_member, size_t index)
{
  const double * member =
    (const double *)(untyped_member);
  return &member[index];
}

void * soft_actuator_msgs__msg__ControllerStatus__rosidl_typesupport_introspection_c__get_function__ControllerStatus__core_pressure_kpa(
  void * untyped_member, size_t index)
{
  double * member =
    (double *)(untyped_member);
  return &member[index];
}

void soft_actuator_msgs__msg__ControllerStatus__rosidl_typesupport_introspection_c__fetch_function__ControllerStatus__core_pressure_kpa(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const double * item =
    ((const double *)
    soft_actuator_msgs__msg__ControllerStatus__rosidl_typesupport_introspection_c__get_const_function__ControllerStatus__core_pressure_kpa(untyped_member, index));
  double * value =
    (double *)(untyped_value);
  *value = *item;
}

void soft_actuator_msgs__msg__ControllerStatus__rosidl_typesupport_introspection_c__assign_function__ControllerStatus__core_pressure_kpa(
  void * untyped_member, size_t index, const void * untyped_value)
{
  double * item =
    ((double *)
    soft_actuator_msgs__msg__ControllerStatus__rosidl_typesupport_introspection_c__get_function__ControllerStatus__core_pressure_kpa(untyped_member, index));
  const double * value =
    (const double *)(untyped_value);
  *item = *value;
}

size_t soft_actuator_msgs__msg__ControllerStatus__rosidl_typesupport_introspection_c__size_function__ControllerStatus__output_pressure_kpa(
  const void * untyped_member)
{
  (void)untyped_member;
  return 3;
}

const void * soft_actuator_msgs__msg__ControllerStatus__rosidl_typesupport_introspection_c__get_const_function__ControllerStatus__output_pressure_kpa(
  const void * untyped_member, size_t index)
{
  const double * member =
    (const double *)(untyped_member);
  return &member[index];
}

void * soft_actuator_msgs__msg__ControllerStatus__rosidl_typesupport_introspection_c__get_function__ControllerStatus__output_pressure_kpa(
  void * untyped_member, size_t index)
{
  double * member =
    (double *)(untyped_member);
  return &member[index];
}

void soft_actuator_msgs__msg__ControllerStatus__rosidl_typesupport_introspection_c__fetch_function__ControllerStatus__output_pressure_kpa(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const double * item =
    ((const double *)
    soft_actuator_msgs__msg__ControllerStatus__rosidl_typesupport_introspection_c__get_const_function__ControllerStatus__output_pressure_kpa(untyped_member, index));
  double * value =
    (double *)(untyped_value);
  *value = *item;
}

void soft_actuator_msgs__msg__ControllerStatus__rosidl_typesupport_introspection_c__assign_function__ControllerStatus__output_pressure_kpa(
  void * untyped_member, size_t index, const void * untyped_value)
{
  double * item =
    ((double *)
    soft_actuator_msgs__msg__ControllerStatus__rosidl_typesupport_introspection_c__get_function__ControllerStatus__output_pressure_kpa(untyped_member, index));
  const double * value =
    (const double *)(untyped_value);
  *item = *value;
}

size_t soft_actuator_msgs__msg__ControllerStatus__rosidl_typesupport_introspection_c__size_function__ControllerStatus__last_written_pressure_kpa(
  const void * untyped_member)
{
  (void)untyped_member;
  return 3;
}

const void * soft_actuator_msgs__msg__ControllerStatus__rosidl_typesupport_introspection_c__get_const_function__ControllerStatus__last_written_pressure_kpa(
  const void * untyped_member, size_t index)
{
  const double * member =
    (const double *)(untyped_member);
  return &member[index];
}

void * soft_actuator_msgs__msg__ControllerStatus__rosidl_typesupport_introspection_c__get_function__ControllerStatus__last_written_pressure_kpa(
  void * untyped_member, size_t index)
{
  double * member =
    (double *)(untyped_member);
  return &member[index];
}

void soft_actuator_msgs__msg__ControllerStatus__rosidl_typesupport_introspection_c__fetch_function__ControllerStatus__last_written_pressure_kpa(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const double * item =
    ((const double *)
    soft_actuator_msgs__msg__ControllerStatus__rosidl_typesupport_introspection_c__get_const_function__ControllerStatus__last_written_pressure_kpa(untyped_member, index));
  double * value =
    (double *)(untyped_value);
  *value = *item;
}

void soft_actuator_msgs__msg__ControllerStatus__rosidl_typesupport_introspection_c__assign_function__ControllerStatus__last_written_pressure_kpa(
  void * untyped_member, size_t index, const void * untyped_value)
{
  double * item =
    ((double *)
    soft_actuator_msgs__msg__ControllerStatus__rosidl_typesupport_introspection_c__get_function__ControllerStatus__last_written_pressure_kpa(untyped_member, index));
  const double * value =
    (const double *)(untyped_value);
  *item = *value;
}

static rosidl_typesupport_introspection_c__MessageMember soft_actuator_msgs__msg__ControllerStatus__rosidl_typesupport_introspection_c__ControllerStatus_message_member_array[20] = {
  {
    "header",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is key
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(soft_actuator_msgs__msg__ControllerStatus, header),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "session_id",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_STRING,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is key
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(soft_actuator_msgs__msg__ControllerStatus, session_id),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "state",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_STRING,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is key
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(soft_actuator_msgs__msg__ControllerStatus, state),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "enabled",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_BOOLEAN,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is key
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(soft_actuator_msgs__msg__ControllerStatus, enabled),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "requested_mode",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_STRING,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is key
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(soft_actuator_msgs__msg__ControllerStatus, requested_mode),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "effective_mode",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_STRING,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is key
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(soft_actuator_msgs__msg__ControllerStatus, effective_mode),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "feedback_reason",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_STRING,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is key
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(soft_actuator_msgs__msg__ControllerStatus, feedback_reason),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "numeric_valid",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_BOOLEAN,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is key
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(soft_actuator_msgs__msg__ControllerStatus, numeric_valid),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "pressure_limited",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_BOOLEAN,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is key
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(soft_actuator_msgs__msg__ControllerStatus, pressure_limited),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "measured_error_valid",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_BOOLEAN,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is key
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(soft_actuator_msgs__msg__ControllerStatus, measured_error_valid),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "contact_state",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_STRING,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is key
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(soft_actuator_msgs__msg__ControllerStatus, contact_state),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "target_mm",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_DOUBLE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is key
    true,  // is array
    3,  // array size
    false,  // is upper bound
    offsetof(soft_actuator_msgs__msg__ControllerStatus, target_mm),  // bytes offset in struct
    NULL,  // default value
    soft_actuator_msgs__msg__ControllerStatus__rosidl_typesupport_introspection_c__size_function__ControllerStatus__target_mm,  // size() function pointer
    soft_actuator_msgs__msg__ControllerStatus__rosidl_typesupport_introspection_c__get_const_function__ControllerStatus__target_mm,  // get_const(index) function pointer
    soft_actuator_msgs__msg__ControllerStatus__rosidl_typesupport_introspection_c__get_function__ControllerStatus__target_mm,  // get(index) function pointer
    soft_actuator_msgs__msg__ControllerStatus__rosidl_typesupport_introspection_c__fetch_function__ControllerStatus__target_mm,  // fetch(index, &value) function pointer
    soft_actuator_msgs__msg__ControllerStatus__rosidl_typesupport_introspection_c__assign_function__ControllerStatus__target_mm,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "predicted_mm",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_DOUBLE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is key
    true,  // is array
    3,  // array size
    false,  // is upper bound
    offsetof(soft_actuator_msgs__msg__ControllerStatus, predicted_mm),  // bytes offset in struct
    NULL,  // default value
    soft_actuator_msgs__msg__ControllerStatus__rosidl_typesupport_introspection_c__size_function__ControllerStatus__predicted_mm,  // size() function pointer
    soft_actuator_msgs__msg__ControllerStatus__rosidl_typesupport_introspection_c__get_const_function__ControllerStatus__predicted_mm,  // get_const(index) function pointer
    soft_actuator_msgs__msg__ControllerStatus__rosidl_typesupport_introspection_c__get_function__ControllerStatus__predicted_mm,  // get(index) function pointer
    soft_actuator_msgs__msg__ControllerStatus__rosidl_typesupport_introspection_c__fetch_function__ControllerStatus__predicted_mm,  // fetch(index, &value) function pointer
    soft_actuator_msgs__msg__ControllerStatus__rosidl_typesupport_introspection_c__assign_function__ControllerStatus__predicted_mm,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "error_mm",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_DOUBLE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is key
    true,  // is array
    3,  // array size
    false,  // is upper bound
    offsetof(soft_actuator_msgs__msg__ControllerStatus, error_mm),  // bytes offset in struct
    NULL,  // default value
    soft_actuator_msgs__msg__ControllerStatus__rosidl_typesupport_introspection_c__size_function__ControllerStatus__error_mm,  // size() function pointer
    soft_actuator_msgs__msg__ControllerStatus__rosidl_typesupport_introspection_c__get_const_function__ControllerStatus__error_mm,  // get_const(index) function pointer
    soft_actuator_msgs__msg__ControllerStatus__rosidl_typesupport_introspection_c__get_function__ControllerStatus__error_mm,  // get(index) function pointer
    soft_actuator_msgs__msg__ControllerStatus__rosidl_typesupport_introspection_c__fetch_function__ControllerStatus__error_mm,  // fetch(index, &value) function pointer
    soft_actuator_msgs__msg__ControllerStatus__rosidl_typesupport_introspection_c__assign_function__ControllerStatus__error_mm,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "requested_pressure_kpa",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_DOUBLE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is key
    true,  // is array
    3,  // array size
    false,  // is upper bound
    offsetof(soft_actuator_msgs__msg__ControllerStatus, requested_pressure_kpa),  // bytes offset in struct
    NULL,  // default value
    soft_actuator_msgs__msg__ControllerStatus__rosidl_typesupport_introspection_c__size_function__ControllerStatus__requested_pressure_kpa,  // size() function pointer
    soft_actuator_msgs__msg__ControllerStatus__rosidl_typesupport_introspection_c__get_const_function__ControllerStatus__requested_pressure_kpa,  // get_const(index) function pointer
    soft_actuator_msgs__msg__ControllerStatus__rosidl_typesupport_introspection_c__get_function__ControllerStatus__requested_pressure_kpa,  // get(index) function pointer
    soft_actuator_msgs__msg__ControllerStatus__rosidl_typesupport_introspection_c__fetch_function__ControllerStatus__requested_pressure_kpa,  // fetch(index, &value) function pointer
    soft_actuator_msgs__msg__ControllerStatus__rosidl_typesupport_introspection_c__assign_function__ControllerStatus__requested_pressure_kpa,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "core_pressure_kpa",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_DOUBLE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is key
    true,  // is array
    3,  // array size
    false,  // is upper bound
    offsetof(soft_actuator_msgs__msg__ControllerStatus, core_pressure_kpa),  // bytes offset in struct
    NULL,  // default value
    soft_actuator_msgs__msg__ControllerStatus__rosidl_typesupport_introspection_c__size_function__ControllerStatus__core_pressure_kpa,  // size() function pointer
    soft_actuator_msgs__msg__ControllerStatus__rosidl_typesupport_introspection_c__get_const_function__ControllerStatus__core_pressure_kpa,  // get_const(index) function pointer
    soft_actuator_msgs__msg__ControllerStatus__rosidl_typesupport_introspection_c__get_function__ControllerStatus__core_pressure_kpa,  // get(index) function pointer
    soft_actuator_msgs__msg__ControllerStatus__rosidl_typesupport_introspection_c__fetch_function__ControllerStatus__core_pressure_kpa,  // fetch(index, &value) function pointer
    soft_actuator_msgs__msg__ControllerStatus__rosidl_typesupport_introspection_c__assign_function__ControllerStatus__core_pressure_kpa,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "output_pressure_kpa",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_DOUBLE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is key
    true,  // is array
    3,  // array size
    false,  // is upper bound
    offsetof(soft_actuator_msgs__msg__ControllerStatus, output_pressure_kpa),  // bytes offset in struct
    NULL,  // default value
    soft_actuator_msgs__msg__ControllerStatus__rosidl_typesupport_introspection_c__size_function__ControllerStatus__output_pressure_kpa,  // size() function pointer
    soft_actuator_msgs__msg__ControllerStatus__rosidl_typesupport_introspection_c__get_const_function__ControllerStatus__output_pressure_kpa,  // get_const(index) function pointer
    soft_actuator_msgs__msg__ControllerStatus__rosidl_typesupport_introspection_c__get_function__ControllerStatus__output_pressure_kpa,  // get(index) function pointer
    soft_actuator_msgs__msg__ControllerStatus__rosidl_typesupport_introspection_c__fetch_function__ControllerStatus__output_pressure_kpa,  // fetch(index, &value) function pointer
    soft_actuator_msgs__msg__ControllerStatus__rosidl_typesupport_introspection_c__assign_function__ControllerStatus__output_pressure_kpa,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "last_written_pressure_kpa",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_DOUBLE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is key
    true,  // is array
    3,  // array size
    false,  // is upper bound
    offsetof(soft_actuator_msgs__msg__ControllerStatus, last_written_pressure_kpa),  // bytes offset in struct
    NULL,  // default value
    soft_actuator_msgs__msg__ControllerStatus__rosidl_typesupport_introspection_c__size_function__ControllerStatus__last_written_pressure_kpa,  // size() function pointer
    soft_actuator_msgs__msg__ControllerStatus__rosidl_typesupport_introspection_c__get_const_function__ControllerStatus__last_written_pressure_kpa,  // get_const(index) function pointer
    soft_actuator_msgs__msg__ControllerStatus__rosidl_typesupport_introspection_c__get_function__ControllerStatus__last_written_pressure_kpa,  // get(index) function pointer
    soft_actuator_msgs__msg__ControllerStatus__rosidl_typesupport_introspection_c__fetch_function__ControllerStatus__last_written_pressure_kpa,  // fetch(index, &value) function pointer
    soft_actuator_msgs__msg__ControllerStatus__rosidl_typesupport_introspection_c__assign_function__ControllerStatus__last_written_pressure_kpa,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "writer_fresh",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_BOOLEAN,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is key
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(soft_actuator_msgs__msg__ControllerStatus, writer_fresh),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "feedback_sequence",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_UINT64,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is key
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(soft_actuator_msgs__msg__ControllerStatus, feedback_sequence),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers soft_actuator_msgs__msg__ControllerStatus__rosidl_typesupport_introspection_c__ControllerStatus_message_members = {
  "soft_actuator_msgs__msg",  // message namespace
  "ControllerStatus",  // message name
  20,  // number of fields
  sizeof(soft_actuator_msgs__msg__ControllerStatus),
  false,  // has_any_key_member_
  soft_actuator_msgs__msg__ControllerStatus__rosidl_typesupport_introspection_c__ControllerStatus_message_member_array,  // message members
  soft_actuator_msgs__msg__ControllerStatus__rosidl_typesupport_introspection_c__ControllerStatus_init_function,  // function to initialize message memory (memory has to be allocated)
  soft_actuator_msgs__msg__ControllerStatus__rosidl_typesupport_introspection_c__ControllerStatus_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t soft_actuator_msgs__msg__ControllerStatus__rosidl_typesupport_introspection_c__ControllerStatus_message_type_support_handle = {
  0,
  &soft_actuator_msgs__msg__ControllerStatus__rosidl_typesupport_introspection_c__ControllerStatus_message_members,
  get_message_typesupport_handle_function,
  &soft_actuator_msgs__msg__ControllerStatus__get_type_hash,
  &soft_actuator_msgs__msg__ControllerStatus__get_type_description,
  &soft_actuator_msgs__msg__ControllerStatus__get_type_description_sources,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_soft_actuator_msgs
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, soft_actuator_msgs, msg, ControllerStatus)() {
  soft_actuator_msgs__msg__ControllerStatus__rosidl_typesupport_introspection_c__ControllerStatus_message_member_array[0].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, std_msgs, msg, Header)();
  if (!soft_actuator_msgs__msg__ControllerStatus__rosidl_typesupport_introspection_c__ControllerStatus_message_type_support_handle.typesupport_identifier) {
    soft_actuator_msgs__msg__ControllerStatus__rosidl_typesupport_introspection_c__ControllerStatus_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &soft_actuator_msgs__msg__ControllerStatus__rosidl_typesupport_introspection_c__ControllerStatus_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif
