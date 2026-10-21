// generated from rosidl_typesupport_introspection_cpp/resource/idl__type_support.cpp.em
// with input from soft_actuator_msgs:msg/ControllerStatus.idl
// generated code does not contain a copyright notice

#include "array"
#include "cstddef"
#include "string"
#include "vector"
#include "rosidl_runtime_c/message_type_support_struct.h"
#include "rosidl_typesupport_cpp/message_type_support.hpp"
#include "rosidl_typesupport_interface/macros.h"
#include "soft_actuator_msgs/msg/detail/controller_status__functions.h"
#include "soft_actuator_msgs/msg/detail/controller_status__struct.hpp"
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

void ControllerStatus_init_function(
  void * message_memory, rosidl_runtime_cpp::MessageInitialization _init)
{
  new (message_memory) soft_actuator_msgs::msg::ControllerStatus(_init);
}

void ControllerStatus_fini_function(void * message_memory)
{
  auto typed_message = static_cast<soft_actuator_msgs::msg::ControllerStatus *>(message_memory);
  typed_message->~ControllerStatus();
}

size_t size_function__ControllerStatus__target_mm(const void * untyped_member)
{
  (void)untyped_member;
  return 3;
}

const void * get_const_function__ControllerStatus__target_mm(const void * untyped_member, size_t index)
{
  const auto & member =
    *reinterpret_cast<const std::array<double, 3> *>(untyped_member);
  return &member[index];
}

void * get_function__ControllerStatus__target_mm(void * untyped_member, size_t index)
{
  auto & member =
    *reinterpret_cast<std::array<double, 3> *>(untyped_member);
  return &member[index];
}

void fetch_function__ControllerStatus__target_mm(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const auto & item = *reinterpret_cast<const double *>(
    get_const_function__ControllerStatus__target_mm(untyped_member, index));
  auto & value = *reinterpret_cast<double *>(untyped_value);
  value = item;
}

void assign_function__ControllerStatus__target_mm(
  void * untyped_member, size_t index, const void * untyped_value)
{
  auto & item = *reinterpret_cast<double *>(
    get_function__ControllerStatus__target_mm(untyped_member, index));
  const auto & value = *reinterpret_cast<const double *>(untyped_value);
  item = value;
}

size_t size_function__ControllerStatus__predicted_mm(const void * untyped_member)
{
  (void)untyped_member;
  return 3;
}

const void * get_const_function__ControllerStatus__predicted_mm(const void * untyped_member, size_t index)
{
  const auto & member =
    *reinterpret_cast<const std::array<double, 3> *>(untyped_member);
  return &member[index];
}

void * get_function__ControllerStatus__predicted_mm(void * untyped_member, size_t index)
{
  auto & member =
    *reinterpret_cast<std::array<double, 3> *>(untyped_member);
  return &member[index];
}

void fetch_function__ControllerStatus__predicted_mm(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const auto & item = *reinterpret_cast<const double *>(
    get_const_function__ControllerStatus__predicted_mm(untyped_member, index));
  auto & value = *reinterpret_cast<double *>(untyped_value);
  value = item;
}

void assign_function__ControllerStatus__predicted_mm(
  void * untyped_member, size_t index, const void * untyped_value)
{
  auto & item = *reinterpret_cast<double *>(
    get_function__ControllerStatus__predicted_mm(untyped_member, index));
  const auto & value = *reinterpret_cast<const double *>(untyped_value);
  item = value;
}

size_t size_function__ControllerStatus__error_mm(const void * untyped_member)
{
  (void)untyped_member;
  return 3;
}

const void * get_const_function__ControllerStatus__error_mm(const void * untyped_member, size_t index)
{
  const auto & member =
    *reinterpret_cast<const std::array<double, 3> *>(untyped_member);
  return &member[index];
}

void * get_function__ControllerStatus__error_mm(void * untyped_member, size_t index)
{
  auto & member =
    *reinterpret_cast<std::array<double, 3> *>(untyped_member);
  return &member[index];
}

void fetch_function__ControllerStatus__error_mm(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const auto & item = *reinterpret_cast<const double *>(
    get_const_function__ControllerStatus__error_mm(untyped_member, index));
  auto & value = *reinterpret_cast<double *>(untyped_value);
  value = item;
}

void assign_function__ControllerStatus__error_mm(
  void * untyped_member, size_t index, const void * untyped_value)
{
  auto & item = *reinterpret_cast<double *>(
    get_function__ControllerStatus__error_mm(untyped_member, index));
  const auto & value = *reinterpret_cast<const double *>(untyped_value);
  item = value;
}

size_t size_function__ControllerStatus__requested_pressure_kpa(const void * untyped_member)
{
  (void)untyped_member;
  return 3;
}

const void * get_const_function__ControllerStatus__requested_pressure_kpa(const void * untyped_member, size_t index)
{
  const auto & member =
    *reinterpret_cast<const std::array<double, 3> *>(untyped_member);
  return &member[index];
}

void * get_function__ControllerStatus__requested_pressure_kpa(void * untyped_member, size_t index)
{
  auto & member =
    *reinterpret_cast<std::array<double, 3> *>(untyped_member);
  return &member[index];
}

void fetch_function__ControllerStatus__requested_pressure_kpa(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const auto & item = *reinterpret_cast<const double *>(
    get_const_function__ControllerStatus__requested_pressure_kpa(untyped_member, index));
  auto & value = *reinterpret_cast<double *>(untyped_value);
  value = item;
}

void assign_function__ControllerStatus__requested_pressure_kpa(
  void * untyped_member, size_t index, const void * untyped_value)
{
  auto & item = *reinterpret_cast<double *>(
    get_function__ControllerStatus__requested_pressure_kpa(untyped_member, index));
  const auto & value = *reinterpret_cast<const double *>(untyped_value);
  item = value;
}

size_t size_function__ControllerStatus__core_pressure_kpa(const void * untyped_member)
{
  (void)untyped_member;
  return 3;
}

const void * get_const_function__ControllerStatus__core_pressure_kpa(const void * untyped_member, size_t index)
{
  const auto & member =
    *reinterpret_cast<const std::array<double, 3> *>(untyped_member);
  return &member[index];
}

void * get_function__ControllerStatus__core_pressure_kpa(void * untyped_member, size_t index)
{
  auto & member =
    *reinterpret_cast<std::array<double, 3> *>(untyped_member);
  return &member[index];
}

void fetch_function__ControllerStatus__core_pressure_kpa(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const auto & item = *reinterpret_cast<const double *>(
    get_const_function__ControllerStatus__core_pressure_kpa(untyped_member, index));
  auto & value = *reinterpret_cast<double *>(untyped_value);
  value = item;
}

void assign_function__ControllerStatus__core_pressure_kpa(
  void * untyped_member, size_t index, const void * untyped_value)
{
  auto & item = *reinterpret_cast<double *>(
    get_function__ControllerStatus__core_pressure_kpa(untyped_member, index));
  const auto & value = *reinterpret_cast<const double *>(untyped_value);
  item = value;
}

size_t size_function__ControllerStatus__output_pressure_kpa(const void * untyped_member)
{
  (void)untyped_member;
  return 3;
}

const void * get_const_function__ControllerStatus__output_pressure_kpa(const void * untyped_member, size_t index)
{
  const auto & member =
    *reinterpret_cast<const std::array<double, 3> *>(untyped_member);
  return &member[index];
}

void * get_function__ControllerStatus__output_pressure_kpa(void * untyped_member, size_t index)
{
  auto & member =
    *reinterpret_cast<std::array<double, 3> *>(untyped_member);
  return &member[index];
}

void fetch_function__ControllerStatus__output_pressure_kpa(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const auto & item = *reinterpret_cast<const double *>(
    get_const_function__ControllerStatus__output_pressure_kpa(untyped_member, index));
  auto & value = *reinterpret_cast<double *>(untyped_value);
  value = item;
}

void assign_function__ControllerStatus__output_pressure_kpa(
  void * untyped_member, size_t index, const void * untyped_value)
{
  auto & item = *reinterpret_cast<double *>(
    get_function__ControllerStatus__output_pressure_kpa(untyped_member, index));
  const auto & value = *reinterpret_cast<const double *>(untyped_value);
  item = value;
}

size_t size_function__ControllerStatus__last_written_pressure_kpa(const void * untyped_member)
{
  (void)untyped_member;
  return 3;
}

const void * get_const_function__ControllerStatus__last_written_pressure_kpa(const void * untyped_member, size_t index)
{
  const auto & member =
    *reinterpret_cast<const std::array<double, 3> *>(untyped_member);
  return &member[index];
}

void * get_function__ControllerStatus__last_written_pressure_kpa(void * untyped_member, size_t index)
{
  auto & member =
    *reinterpret_cast<std::array<double, 3> *>(untyped_member);
  return &member[index];
}

void fetch_function__ControllerStatus__last_written_pressure_kpa(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const auto & item = *reinterpret_cast<const double *>(
    get_const_function__ControllerStatus__last_written_pressure_kpa(untyped_member, index));
  auto & value = *reinterpret_cast<double *>(untyped_value);
  value = item;
}

void assign_function__ControllerStatus__last_written_pressure_kpa(
  void * untyped_member, size_t index, const void * untyped_value)
{
  auto & item = *reinterpret_cast<double *>(
    get_function__ControllerStatus__last_written_pressure_kpa(untyped_member, index));
  const auto & value = *reinterpret_cast<const double *>(untyped_value);
  item = value;
}

static const ::rosidl_typesupport_introspection_cpp::MessageMember ControllerStatus_message_member_array[20] = {
  {
    "header",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    ::rosidl_typesupport_introspection_cpp::get_message_type_support_handle<std_msgs::msg::Header>(),  // members of sub message
    false,  // is key
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(soft_actuator_msgs::msg::ControllerStatus, header),  // bytes offset in struct
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
    offsetof(soft_actuator_msgs::msg::ControllerStatus, session_id),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr,  // fetch(index, &value) function pointer
    nullptr,  // assign(index, value) function pointer
    nullptr  // resize(index) function pointer
  },
  {
    "state",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_STRING,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    false,  // is key
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(soft_actuator_msgs::msg::ControllerStatus, state),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr,  // fetch(index, &value) function pointer
    nullptr,  // assign(index, value) function pointer
    nullptr  // resize(index) function pointer
  },
  {
    "enabled",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_BOOLEAN,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    false,  // is key
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(soft_actuator_msgs::msg::ControllerStatus, enabled),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr,  // fetch(index, &value) function pointer
    nullptr,  // assign(index, value) function pointer
    nullptr  // resize(index) function pointer
  },
  {
    "requested_mode",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_STRING,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    false,  // is key
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(soft_actuator_msgs::msg::ControllerStatus, requested_mode),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr,  // fetch(index, &value) function pointer
    nullptr,  // assign(index, value) function pointer
    nullptr  // resize(index) function pointer
  },
  {
    "effective_mode",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_STRING,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    false,  // is key
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(soft_actuator_msgs::msg::ControllerStatus, effective_mode),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr,  // fetch(index, &value) function pointer
    nullptr,  // assign(index, value) function pointer
    nullptr  // resize(index) function pointer
  },
  {
    "feedback_reason",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_STRING,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    false,  // is key
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(soft_actuator_msgs::msg::ControllerStatus, feedback_reason),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr,  // fetch(index, &value) function pointer
    nullptr,  // assign(index, value) function pointer
    nullptr  // resize(index) function pointer
  },
  {
    "numeric_valid",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_BOOLEAN,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    false,  // is key
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(soft_actuator_msgs::msg::ControllerStatus, numeric_valid),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr,  // fetch(index, &value) function pointer
    nullptr,  // assign(index, value) function pointer
    nullptr  // resize(index) function pointer
  },
  {
    "pressure_limited",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_BOOLEAN,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    false,  // is key
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(soft_actuator_msgs::msg::ControllerStatus, pressure_limited),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr,  // fetch(index, &value) function pointer
    nullptr,  // assign(index, value) function pointer
    nullptr  // resize(index) function pointer
  },
  {
    "measured_error_valid",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_BOOLEAN,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    false,  // is key
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(soft_actuator_msgs::msg::ControllerStatus, measured_error_valid),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr,  // fetch(index, &value) function pointer
    nullptr,  // assign(index, value) function pointer
    nullptr  // resize(index) function pointer
  },
  {
    "contact_state",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_STRING,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    false,  // is key
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(soft_actuator_msgs::msg::ControllerStatus, contact_state),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr,  // fetch(index, &value) function pointer
    nullptr,  // assign(index, value) function pointer
    nullptr  // resize(index) function pointer
  },
  {
    "target_mm",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_DOUBLE,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    false,  // is key
    true,  // is array
    3,  // array size
    false,  // is upper bound
    offsetof(soft_actuator_msgs::msg::ControllerStatus, target_mm),  // bytes offset in struct
    nullptr,  // default value
    size_function__ControllerStatus__target_mm,  // size() function pointer
    get_const_function__ControllerStatus__target_mm,  // get_const(index) function pointer
    get_function__ControllerStatus__target_mm,  // get(index) function pointer
    fetch_function__ControllerStatus__target_mm,  // fetch(index, &value) function pointer
    assign_function__ControllerStatus__target_mm,  // assign(index, value) function pointer
    nullptr  // resize(index) function pointer
  },
  {
    "predicted_mm",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_DOUBLE,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    false,  // is key
    true,  // is array
    3,  // array size
    false,  // is upper bound
    offsetof(soft_actuator_msgs::msg::ControllerStatus, predicted_mm),  // bytes offset in struct
    nullptr,  // default value
    size_function__ControllerStatus__predicted_mm,  // size() function pointer
    get_const_function__ControllerStatus__predicted_mm,  // get_const(index) function pointer
    get_function__ControllerStatus__predicted_mm,  // get(index) function pointer
    fetch_function__ControllerStatus__predicted_mm,  // fetch(index, &value) function pointer
    assign_function__ControllerStatus__predicted_mm,  // assign(index, value) function pointer
    nullptr  // resize(index) function pointer
  },
  {
    "error_mm",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_DOUBLE,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    false,  // is key
    true,  // is array
    3,  // array size
    false,  // is upper bound
    offsetof(soft_actuator_msgs::msg::ControllerStatus, error_mm),  // bytes offset in struct
    nullptr,  // default value
    size_function__ControllerStatus__error_mm,  // size() function pointer
    get_const_function__ControllerStatus__error_mm,  // get_const(index) function pointer
    get_function__ControllerStatus__error_mm,  // get(index) function pointer
    fetch_function__ControllerStatus__error_mm,  // fetch(index, &value) function pointer
    assign_function__ControllerStatus__error_mm,  // assign(index, value) function pointer
    nullptr  // resize(index) function pointer
  },
  {
    "requested_pressure_kpa",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_DOUBLE,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    false,  // is key
    true,  // is array
    3,  // array size
    false,  // is upper bound
    offsetof(soft_actuator_msgs::msg::ControllerStatus, requested_pressure_kpa),  // bytes offset in struct
    nullptr,  // default value
    size_function__ControllerStatus__requested_pressure_kpa,  // size() function pointer
    get_const_function__ControllerStatus__requested_pressure_kpa,  // get_const(index) function pointer
    get_function__ControllerStatus__requested_pressure_kpa,  // get(index) function pointer
    fetch_function__ControllerStatus__requested_pressure_kpa,  // fetch(index, &value) function pointer
    assign_function__ControllerStatus__requested_pressure_kpa,  // assign(index, value) function pointer
    nullptr  // resize(index) function pointer
  },
  {
    "core_pressure_kpa",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_DOUBLE,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    false,  // is key
    true,  // is array
    3,  // array size
    false,  // is upper bound
    offsetof(soft_actuator_msgs::msg::ControllerStatus, core_pressure_kpa),  // bytes offset in struct
    nullptr,  // default value
    size_function__ControllerStatus__core_pressure_kpa,  // size() function pointer
    get_const_function__ControllerStatus__core_pressure_kpa,  // get_const(index) function pointer
    get_function__ControllerStatus__core_pressure_kpa,  // get(index) function pointer
    fetch_function__ControllerStatus__core_pressure_kpa,  // fetch(index, &value) function pointer
    assign_function__ControllerStatus__core_pressure_kpa,  // assign(index, value) function pointer
    nullptr  // resize(index) function pointer
  },
  {
    "output_pressure_kpa",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_DOUBLE,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    false,  // is key
    true,  // is array
    3,  // array size
    false,  // is upper bound
    offsetof(soft_actuator_msgs::msg::ControllerStatus, output_pressure_kpa),  // bytes offset in struct
    nullptr,  // default value
    size_function__ControllerStatus__output_pressure_kpa,  // size() function pointer
    get_const_function__ControllerStatus__output_pressure_kpa,  // get_const(index) function pointer
    get_function__ControllerStatus__output_pressure_kpa,  // get(index) function pointer
    fetch_function__ControllerStatus__output_pressure_kpa,  // fetch(index, &value) function pointer
    assign_function__ControllerStatus__output_pressure_kpa,  // assign(index, value) function pointer
    nullptr  // resize(index) function pointer
  },
  {
    "last_written_pressure_kpa",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_DOUBLE,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    false,  // is key
    true,  // is array
    3,  // array size
    false,  // is upper bound
    offsetof(soft_actuator_msgs::msg::ControllerStatus, last_written_pressure_kpa),  // bytes offset in struct
    nullptr,  // default value
    size_function__ControllerStatus__last_written_pressure_kpa,  // size() function pointer
    get_const_function__ControllerStatus__last_written_pressure_kpa,  // get_const(index) function pointer
    get_function__ControllerStatus__last_written_pressure_kpa,  // get(index) function pointer
    fetch_function__ControllerStatus__last_written_pressure_kpa,  // fetch(index, &value) function pointer
    assign_function__ControllerStatus__last_written_pressure_kpa,  // assign(index, value) function pointer
    nullptr  // resize(index) function pointer
  },
  {
    "writer_fresh",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_BOOLEAN,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    false,  // is key
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(soft_actuator_msgs::msg::ControllerStatus, writer_fresh),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr,  // fetch(index, &value) function pointer
    nullptr,  // assign(index, value) function pointer
    nullptr  // resize(index) function pointer
  },
  {
    "feedback_sequence",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_UINT64,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    false,  // is key
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(soft_actuator_msgs::msg::ControllerStatus, feedback_sequence),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr,  // fetch(index, &value) function pointer
    nullptr,  // assign(index, value) function pointer
    nullptr  // resize(index) function pointer
  }
};

static const ::rosidl_typesupport_introspection_cpp::MessageMembers ControllerStatus_message_members = {
  "soft_actuator_msgs::msg",  // message namespace
  "ControllerStatus",  // message name
  20,  // number of fields
  sizeof(soft_actuator_msgs::msg::ControllerStatus),
  false,  // has_any_key_member_
  ControllerStatus_message_member_array,  // message members
  ControllerStatus_init_function,  // function to initialize message memory (memory has to be allocated)
  ControllerStatus_fini_function  // function to terminate message instance (will not free memory)
};

static const rosidl_message_type_support_t ControllerStatus_message_type_support_handle = {
  ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
  &ControllerStatus_message_members,
  get_message_typesupport_handle_function,
  &soft_actuator_msgs__msg__ControllerStatus__get_type_hash,
  &soft_actuator_msgs__msg__ControllerStatus__get_type_description,
  &soft_actuator_msgs__msg__ControllerStatus__get_type_description_sources,
};

}  // namespace rosidl_typesupport_introspection_cpp

}  // namespace msg

}  // namespace soft_actuator_msgs


namespace rosidl_typesupport_introspection_cpp
{

template<>
ROSIDL_TYPESUPPORT_INTROSPECTION_CPP_PUBLIC
const rosidl_message_type_support_t *
get_message_type_support_handle<soft_actuator_msgs::msg::ControllerStatus>()
{
  return &::soft_actuator_msgs::msg::rosidl_typesupport_introspection_cpp::ControllerStatus_message_type_support_handle;
}

}  // namespace rosidl_typesupport_introspection_cpp

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_INTROSPECTION_CPP_PUBLIC
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, soft_actuator_msgs, msg, ControllerStatus)() {
  return &::soft_actuator_msgs::msg::rosidl_typesupport_introspection_cpp::ControllerStatus_message_type_support_handle;
}

#ifdef __cplusplus
}
#endif
