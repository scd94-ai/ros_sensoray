// generated from rosidl_typesupport_introspection_cpp/resource/idl__type_support.cpp.em
// with input from soft_actuator_msgs:msg/PressureCommand.idl
// generated code does not contain a copyright notice

#include "array"
#include "cstddef"
#include "string"
#include "vector"
#include "rosidl_runtime_c/message_type_support_struct.h"
#include "rosidl_typesupport_cpp/message_type_support.hpp"
#include "rosidl_typesupport_interface/macros.h"
#include "soft_actuator_msgs/msg/detail/pressure_command__functions.h"
#include "soft_actuator_msgs/msg/detail/pressure_command__struct.hpp"
#include "rosidl_typesupport_introspection_cpp/field_types.hpp"
#include "rosidl_typesupport_introspection_cpp/identifier.hpp"
#include "rosidl_typesupport_introspection_cpp/message_introspection.hpp"
#include "rosidl_typesupport_introspection_cpp/message_type_support_decl.hpp"
#include "rosidl_typesupport_introspection_cpp/visibility_control.h"

namespace soft_actuator_msgs
{

namespace msg
{

namespace rosidl_typesupport_introspection_cpp
{

void PressureCommand_init_function(
  void * message_memory, rosidl_runtime_cpp::MessageInitialization _init)
{
  new (message_memory) soft_actuator_msgs::msg::PressureCommand(_init);
}

void PressureCommand_fini_function(void * message_memory)
{
  auto typed_message = static_cast<soft_actuator_msgs::msg::PressureCommand *>(message_memory);
  typed_message->~PressureCommand();
}

size_t size_function__PressureCommand__pressure_kpa(const void * untyped_member)
{
  (void)untyped_member;
  return 3;
}

const void * get_const_function__PressureCommand__pressure_kpa(const void * untyped_member, size_t index)
{
  const auto & member =
    *reinterpret_cast<const std::array<double, 3> *>(untyped_member);
  return &member[index];
}

void * get_function__PressureCommand__pressure_kpa(void * untyped_member, size_t index)
{
  auto & member =
    *reinterpret_cast<std::array<double, 3> *>(untyped_member);
  return &member[index];
}

void fetch_function__PressureCommand__pressure_kpa(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const auto & item = *reinterpret_cast<const double *>(
    get_const_function__PressureCommand__pressure_kpa(untyped_member, index));
  auto & value = *reinterpret_cast<double *>(untyped_value);
  value = item;
}

void assign_function__PressureCommand__pressure_kpa(
  void * untyped_member, size_t index, const void * untyped_value)
{
  auto & item = *reinterpret_cast<double *>(
    get_function__PressureCommand__pressure_kpa(untyped_member, index));
  const auto & value = *reinterpret_cast<const double *>(untyped_value);
  item = value;
}

static const ::rosidl_typesupport_introspection_cpp::MessageMember PressureCommand_message_member_array[7] = {
  {
    "header",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    ::rosidl_typesupport_introspection_cpp::get_message_type_support_handle<std_msgs::msg::Header>(),  // members of sub message
    false,  // is key
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(soft_actuator_msgs::msg::PressureCommand, header),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr,  // fetch(index, &value) function pointer
    nullptr,  // assign(index, value) function pointer
    nullptr  // resize(index) function pointer
  },
  {
    "session_id",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_STRING,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    false,  // is key
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(soft_actuator_msgs::msg::PressureCommand, session_id),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr,  // fetch(index, &value) function pointer
    nullptr,  // assign(index, value) function pointer
    nullptr  // resize(index) function pointer
  },
  {
    "sequence",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_UINT64,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    false,  // is key
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(soft_actuator_msgs::msg::PressureCommand, sequence),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr,  // fetch(index, &value) function pointer
    nullptr,  // assign(index, value) function pointer
    nullptr  // resize(index) function pointer
  },
  {
    "pressure_kpa",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_DOUBLE,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    false,  // is key
    true,  // is array
    3,  // array size
    false,  // is upper bound
    offsetof(soft_actuator_msgs::msg::PressureCommand, pressure_kpa),  // bytes offset in struct
    nullptr,  // default value
    size_function__PressureCommand__pressure_kpa,  // size() function pointer
    get_const_function__PressureCommand__pressure_kpa,  // get_const(index) function pointer
    get_function__PressureCommand__pressure_kpa,  // get(index) function pointer
    fetch_function__PressureCommand__pressure_kpa,  // fetch(index, &value) function pointer
    assign_function__PressureCommand__pressure_kpa,  // assign(index, value) function pointer
    nullptr  // resize(index) function pointer
  },
  {
    "force_zero",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_BOOLEAN,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    false,  // is key
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(soft_actuator_msgs::msg::PressureCommand, force_zero),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr,  // fetch(index, &value) function pointer
    nullptr,  // assign(index, value) function pointer
    nullptr  // resize(index) function pointer
  },
  {
    "valid_for",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    ::rosidl_typesupport_introspection_cpp::get_message_type_support_handle<builtin_interfaces::msg::Duration>(),  // members of sub message
    false,  // is key
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(soft_actuator_msgs::msg::PressureCommand, valid_for),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr,  // fetch(index, &value) function pointer
    nullptr,  // assign(index, value) function pointer
    nullptr  // resize(index) function pointer
  },
  {
    "reason",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_STRING,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    false,  // is key
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(soft_actuator_msgs::msg::PressureCommand, reason),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr,  // fetch(index, &value) function pointer
    nullptr,  // assign(index, value) function pointer
    nullptr  // resize(index) function pointer
  }
};

static const ::rosidl_typesupport_introspection_cpp::MessageMembers PressureCommand_message_members = {
  "soft_actuator_msgs::msg",  // message namespace
  "PressureCommand",  // message name
  7,  // number of fields
  sizeof(soft_actuator_msgs::msg::PressureCommand),
  false,  // has_any_key_member_
  PressureCommand_message_member_array,  // message members
  PressureCommand_init_function,  // function to initialize message memory (memory has to be allocated)
  PressureCommand_fini_function  // function to terminate message instance (will not free memory)
};

static const rosidl_message_type_support_t PressureCommand_message_type_support_handle = {
  ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
  &PressureCommand_message_members,
  get_message_typesupport_handle_function,
  &soft_actuator_msgs__msg__PressureCommand__get_type_hash,
  &soft_actuator_msgs__msg__PressureCommand__get_type_description,
  &soft_actuator_msgs__msg__PressureCommand__get_type_description_sources,
};

}  // namespace rosidl_typesupport_introspection_cpp

}  // namespace msg

}  // namespace soft_actuator_msgs


namespace rosidl_typesupport_introspection_cpp
{

template<>
ROSIDL_TYPESUPPORT_INTROSPECTION_CPP_PUBLIC
const rosidl_message_type_support_t *
get_message_type_support_handle<soft_actuator_msgs::msg::PressureCommand>()
{
  return &::soft_actuator_msgs::msg::rosidl_typesupport_introspection_cpp::PressureCommand_message_type_support_handle;
}

}  // namespace rosidl_typesupport_introspection_cpp

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_INTROSPECTION_CPP_PUBLIC
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, soft_actuator_msgs, msg, PressureCommand)() {
  return &::soft_actuator_msgs::msg::rosidl_typesupport_introspection_cpp::PressureCommand_message_type_support_handle;
}

#ifdef __cplusplus
}
#endif
