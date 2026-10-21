// generated from rosidl_typesupport_introspection_c/resource/idl__type_support.c.em
// with input from soft_actuator_msgs:msg/PressureCommand.idl
// generated code does not contain a copyright notice

#include <stddef.h>
#include "soft_actuator_msgs/msg/detail/pressure_command__rosidl_typesupport_introspection_c.h"
#include "soft_actuator_msgs/msg/rosidl_typesupport_introspection_c__visibility_control.h"
#include "rosidl_typesupport_introspection_c/field_types.h"
#include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/message_introspection.h"
#include "soft_actuator_msgs/msg/detail/pressure_command__functions.h"
#include "soft_actuator_msgs/msg/detail/pressure_command__struct.h"


// Include directives for member types
// Member `header`
#include "std_msgs/msg/header.h"
// Member `header`
#include "std_msgs/msg/detail/header__rosidl_typesupport_introspection_c.h"
// Member `session_id`
// Member `reason`
#include "rosidl_runtime_c/string_functions.h"
// Member `valid_for`
#include "builtin_interfaces/msg/duration.h"
// Member `valid_for`
#include "builtin_interfaces/msg/detail/duration__rosidl_typesupport_introspection_c.h"

#ifdef __cplusplus
extern "C"
{
#endif

void soft_actuator_msgs__msg__PressureCommand__rosidl_typesupport_introspection_c__PressureCommand_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  soft_actuator_msgs__msg__PressureCommand__init(message_memory);
}

void soft_actuator_msgs__msg__PressureCommand__rosidl_typesupport_introspection_c__PressureCommand_fini_function(void * message_memory)
{
  soft_actuator_msgs__msg__PressureCommand__fini(message_memory);
}

size_t soft_actuator_msgs__msg__PressureCommand__rosidl_typesupport_introspection_c__size_function__PressureCommand__pressure_kpa(
  const void * untyped_member)
{
  (void)untyped_member;
  return 3;
}

const void * soft_actuator_msgs__msg__PressureCommand__rosidl_typesupport_introspection_c__get_const_function__PressureCommand__pressure_kpa(
  const void * untyped_member, size_t index)
{
  const double * member =
    (const double *)(untyped_member);
  return &member[index];
}

void * soft_actuator_msgs__msg__PressureCommand__rosidl_typesupport_introspection_c__get_function__PressureCommand__pressure_kpa(
  void * untyped_member, size_t index)
{
  double * member =
    (double *)(untyped_member);
  return &member[index];
}

void soft_actuator_msgs__msg__PressureCommand__rosidl_typesupport_introspection_c__fetch_function__PressureCommand__pressure_kpa(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const double * item =
    ((const double *)
    soft_actuator_msgs__msg__PressureCommand__rosidl_typesupport_introspection_c__get_const_function__PressureCommand__pressure_kpa(untyped_member, index));
  double * value =
    (double *)(untyped_value);
  *value = *item;
}

void soft_actuator_msgs__msg__PressureCommand__rosidl_typesupport_introspection_c__assign_function__PressureCommand__pressure_kpa(
  void * untyped_member, size_t index, const void * untyped_value)
{
  double * item =
    ((double *)
    soft_actuator_msgs__msg__PressureCommand__rosidl_typesupport_introspection_c__get_function__PressureCommand__pressure_kpa(untyped_member, index));
  const double * value =
    (const double *)(untyped_value);
  *item = *value;
}

static rosidl_typesupport_introspection_c__MessageMember soft_actuator_msgs__msg__PressureCommand__rosidl_typesupport_introspection_c__PressureCommand_message_member_array[7] = {
  {
    "header",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is key
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(soft_actuator_msgs__msg__PressureCommand, header),  // bytes offset in struct
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
    offsetof(soft_actuator_msgs__msg__PressureCommand, session_id),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "sequence",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_UINT64,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is key
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(soft_actuator_msgs__msg__PressureCommand, sequence),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "pressure_kpa",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_DOUBLE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is key
    true,  // is array
    3,  // array size
    false,  // is upper bound
    offsetof(soft_actuator_msgs__msg__PressureCommand, pressure_kpa),  // bytes offset in struct
    NULL,  // default value
    soft_actuator_msgs__msg__PressureCommand__rosidl_typesupport_introspection_c__size_function__PressureCommand__pressure_kpa,  // size() function pointer
    soft_actuator_msgs__msg__PressureCommand__rosidl_typesupport_introspection_c__get_const_function__PressureCommand__pressure_kpa,  // get_const(index) function pointer
    soft_actuator_msgs__msg__PressureCommand__rosidl_typesupport_introspection_c__get_function__PressureCommand__pressure_kpa,  // get(index) function pointer
    soft_actuator_msgs__msg__PressureCommand__rosidl_typesupport_introspection_c__fetch_function__PressureCommand__pressure_kpa,  // fetch(index, &value) function pointer
    soft_actuator_msgs__msg__PressureCommand__rosidl_typesupport_introspection_c__assign_function__PressureCommand__pressure_kpa,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "force_zero",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_BOOLEAN,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is key
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(soft_actuator_msgs__msg__PressureCommand, force_zero),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "valid_for",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is key
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(soft_actuator_msgs__msg__PressureCommand, valid_for),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "reason",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_STRING,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is key
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(soft_actuator_msgs__msg__PressureCommand, reason),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers soft_actuator_msgs__msg__PressureCommand__rosidl_typesupport_introspection_c__PressureCommand_message_members = {
  "soft_actuator_msgs__msg",  // message namespace
  "PressureCommand",  // message name
  7,  // number of fields
  sizeof(soft_actuator_msgs__msg__PressureCommand),
  false,  // has_any_key_member_
  soft_actuator_msgs__msg__PressureCommand__rosidl_typesupport_introspection_c__PressureCommand_message_member_array,  // message members
  soft_actuator_msgs__msg__PressureCommand__rosidl_typesupport_introspection_c__PressureCommand_init_function,  // function to initialize message memory (memory has to be allocated)
  soft_actuator_msgs__msg__PressureCommand__rosidl_typesupport_introspection_c__PressureCommand_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t soft_actuator_msgs__msg__PressureCommand__rosidl_typesupport_introspection_c__PressureCommand_message_type_support_handle = {
  0,
  &soft_actuator_msgs__msg__PressureCommand__rosidl_typesupport_introspection_c__PressureCommand_message_members,
  get_message_typesupport_handle_function,
  &soft_actuator_msgs__msg__PressureCommand__get_type_hash,
  &soft_actuator_msgs__msg__PressureCommand__get_type_description,
  &soft_actuator_msgs__msg__PressureCommand__get_type_description_sources,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_soft_actuator_msgs
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, soft_actuator_msgs, msg, PressureCommand)() {
  soft_actuator_msgs__msg__PressureCommand__rosidl_typesupport_introspection_c__PressureCommand_message_member_array[0].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, std_msgs, msg, Header)();
  soft_actuator_msgs__msg__PressureCommand__rosidl_typesupport_introspection_c__PressureCommand_message_member_array[5].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, builtin_interfaces, msg, Duration)();
  if (!soft_actuator_msgs__msg__PressureCommand__rosidl_typesupport_introspection_c__PressureCommand_message_type_support_handle.typesupport_identifier) {
    soft_actuator_msgs__msg__PressureCommand__rosidl_typesupport_introspection_c__PressureCommand_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &soft_actuator_msgs__msg__PressureCommand__rosidl_typesupport_introspection_c__PressureCommand_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif
