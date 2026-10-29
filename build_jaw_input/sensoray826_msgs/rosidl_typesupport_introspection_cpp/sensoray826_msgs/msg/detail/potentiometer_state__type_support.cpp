// generated from rosidl_typesupport_introspection_cpp/resource/idl__type_support.cpp.em
// with input from sensoray826_msgs:msg/PotentiometerState.idl
// generated code does not contain a copyright notice

#include "array"
#include "cstddef"
#include "string"
#include "vector"
#include "rosidl_runtime_c/message_type_support_struct.h"
#include "rosidl_typesupport_cpp/message_type_support.hpp"
#include "rosidl_typesupport_interface/macros.h"
#include "sensoray826_msgs/msg/detail/potentiometer_state__functions.h"
#include "sensoray826_msgs/msg/detail/potentiometer_state__struct.hpp"
#include "rosidl_typesupport_introspection_cpp/field_types.hpp"
#include "rosidl_typesupport_introspection_cpp/identifier.hpp"
#include "rosidl_typesupport_introspection_cpp/message_introspection.hpp"
#include "rosidl_typesupport_introspection_cpp/message_type_support_decl.hpp"
#include "rosidl_typesupport_introspection_cpp/visibility_control.h"

namespace sensoray826_msgs
{

namespace msg
{

namespace rosidl_typesupport_introspection_cpp
{

void PotentiometerState_init_function(
  void * message_memory, rosidl_runtime_cpp::MessageInitialization _init)
{
  new (message_memory) sensoray826_msgs::msg::PotentiometerState(_init);
}

void PotentiometerState_fini_function(void * message_memory)
{
  auto typed_message = static_cast<sensoray826_msgs::msg::PotentiometerState *>(message_memory);
  typed_message->~PotentiometerState();
}

size_t size_function__PotentiometerState__adc_channels(const void * untyped_member)
{
  (void)untyped_member;
  return 2;
}

const void * get_const_function__PotentiometerState__adc_channels(const void * untyped_member, size_t index)
{
  const auto & member =
    *reinterpret_cast<const std::array<uint8_t, 2> *>(untyped_member);
  return &member[index];
}

void * get_function__PotentiometerState__adc_channels(void * untyped_member, size_t index)
{
  auto & member =
    *reinterpret_cast<std::array<uint8_t, 2> *>(untyped_member);
  return &member[index];
}

void fetch_function__PotentiometerState__adc_channels(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const auto & item = *reinterpret_cast<const uint8_t *>(
    get_const_function__PotentiometerState__adc_channels(untyped_member, index));
  auto & value = *reinterpret_cast<uint8_t *>(untyped_value);
  value = item;
}

void assign_function__PotentiometerState__adc_channels(
  void * untyped_member, size_t index, const void * untyped_value)
{
  auto & item = *reinterpret_cast<uint8_t *>(
    get_function__PotentiometerState__adc_channels(untyped_member, index));
  const auto & value = *reinterpret_cast<const uint8_t *>(untyped_value);
  item = value;
}

size_t size_function__PotentiometerState__adc_timestamps_us(const void * untyped_member)
{
  (void)untyped_member;
  return 2;
}

const void * get_const_function__PotentiometerState__adc_timestamps_us(const void * untyped_member, size_t index)
{
  const auto & member =
    *reinterpret_cast<const std::array<uint32_t, 2> *>(untyped_member);
  return &member[index];
}

void * get_function__PotentiometerState__adc_timestamps_us(void * untyped_member, size_t index)
{
  auto & member =
    *reinterpret_cast<std::array<uint32_t, 2> *>(untyped_member);
  return &member[index];
}

void fetch_function__PotentiometerState__adc_timestamps_us(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const auto & item = *reinterpret_cast<const uint32_t *>(
    get_const_function__PotentiometerState__adc_timestamps_us(untyped_member, index));
  auto & value = *reinterpret_cast<uint32_t *>(untyped_value);
  value = item;
}

void assign_function__PotentiometerState__adc_timestamps_us(
  void * untyped_member, size_t index, const void * untyped_value)
{
  auto & item = *reinterpret_cast<uint32_t *>(
    get_function__PotentiometerState__adc_timestamps_us(untyped_member, index));
  const auto & value = *reinterpret_cast<const uint32_t *>(untyped_value);
  item = value;
}

size_t size_function__PotentiometerState__voltage_v(const void * untyped_member)
{
  (void)untyped_member;
  return 2;
}

const void * get_const_function__PotentiometerState__voltage_v(const void * untyped_member, size_t index)
{
  const auto & member =
    *reinterpret_cast<const std::array<double, 2> *>(untyped_member);
  return &member[index];
}

void * get_function__PotentiometerState__voltage_v(void * untyped_member, size_t index)
{
  auto & member =
    *reinterpret_cast<std::array<double, 2> *>(untyped_member);
  return &member[index];
}

void fetch_function__PotentiometerState__voltage_v(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const auto & item = *reinterpret_cast<const double *>(
    get_const_function__PotentiometerState__voltage_v(untyped_member, index));
  auto & value = *reinterpret_cast<double *>(untyped_value);
  value = item;
}

void assign_function__PotentiometerState__voltage_v(
  void * untyped_member, size_t index, const void * untyped_value)
{
  auto & item = *reinterpret_cast<double *>(
    get_function__PotentiometerState__voltage_v(untyped_member, index));
  const auto & value = *reinterpret_cast<const double *>(untyped_value);
  item = value;
}

size_t size_function__PotentiometerState__valid(const void * untyped_member)
{
  (void)untyped_member;
  return 2;
}

const void * get_const_function__PotentiometerState__valid(const void * untyped_member, size_t index)
{
  const auto & member =
    *reinterpret_cast<const std::array<bool, 2> *>(untyped_member);
  return &member[index];
}

void * get_function__PotentiometerState__valid(void * untyped_member, size_t index)
{
  auto & member =
    *reinterpret_cast<std::array<bool, 2> *>(untyped_member);
  return &member[index];
}

void fetch_function__PotentiometerState__valid(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const auto & item = *reinterpret_cast<const bool *>(
    get_const_function__PotentiometerState__valid(untyped_member, index));
  auto & value = *reinterpret_cast<bool *>(untyped_value);
  value = item;
}

void assign_function__PotentiometerState__valid(
  void * untyped_member, size_t index, const void * untyped_value)
{
  auto & item = *reinterpret_cast<bool *>(
    get_function__PotentiometerState__valid(untyped_member, index));
  const auto & value = *reinterpret_cast<const bool *>(untyped_value);
  item = value;
}

static const ::rosidl_typesupport_introspection_cpp::MessageMember PotentiometerState_message_member_array[13] = {
  {
    "header",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    ::rosidl_typesupport_introspection_cpp::get_message_type_support_handle<std_msgs::msg::Header>(),  // members of sub message
    false,  // is key
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(sensoray826_msgs::msg::PotentiometerState, header),  // bytes offset in struct
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
    offsetof(sensoray826_msgs::msg::PotentiometerState, session_id),  // bytes offset in struct
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
    offsetof(sensoray826_msgs::msg::PotentiometerState, sequence),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr,  // fetch(index, &value) function pointer
    nullptr,  // assign(index, value) function pointer
    nullptr  // resize(index) function pointer
  },
  {
    "board",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_UINT8,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    false,  // is key
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(sensoray826_msgs::msg::PotentiometerState, board),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr,  // fetch(index, &value) function pointer
    nullptr,  // assign(index, value) function pointer
    nullptr  // resize(index) function pointer
  },
  {
    "settling_us",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_UINT32,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    false,  // is key
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(sensoray826_msgs::msg::PotentiometerState, settling_us),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr,  // fetch(index, &value) function pointer
    nullptr,  // assign(index, value) function pointer
    nullptr  // resize(index) function pointer
  },
  {
    "adc_channels",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_UINT8,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    false,  // is key
    true,  // is array
    2,  // array size
    false,  // is upper bound
    offsetof(sensoray826_msgs::msg::PotentiometerState, adc_channels),  // bytes offset in struct
    nullptr,  // default value
    size_function__PotentiometerState__adc_channels,  // size() function pointer
    get_const_function__PotentiometerState__adc_channels,  // get_const(index) function pointer
    get_function__PotentiometerState__adc_channels,  // get(index) function pointer
    fetch_function__PotentiometerState__adc_channels,  // fetch(index, &value) function pointer
    assign_function__PotentiometerState__adc_channels,  // assign(index, value) function pointer
    nullptr  // resize(index) function pointer
  },
  {
    "adc_timestamps_us",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_UINT32,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    false,  // is key
    true,  // is array
    2,  // array size
    false,  // is upper bound
    offsetof(sensoray826_msgs::msg::PotentiometerState, adc_timestamps_us),  // bytes offset in struct
    nullptr,  // default value
    size_function__PotentiometerState__adc_timestamps_us,  // size() function pointer
    get_const_function__PotentiometerState__adc_timestamps_us,  // get_const(index) function pointer
    get_function__PotentiometerState__adc_timestamps_us,  // get(index) function pointer
    fetch_function__PotentiometerState__adc_timestamps_us,  // fetch(index, &value) function pointer
    assign_function__PotentiometerState__adc_timestamps_us,  // assign(index, value) function pointer
    nullptr  // resize(index) function pointer
  },
  {
    "voltage_v",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_DOUBLE,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    false,  // is key
    true,  // is array
    2,  // array size
    false,  // is upper bound
    offsetof(sensoray826_msgs::msg::PotentiometerState, voltage_v),  // bytes offset in struct
    nullptr,  // default value
    size_function__PotentiometerState__voltage_v,  // size() function pointer
    get_const_function__PotentiometerState__voltage_v,  // get_const(index) function pointer
    get_function__PotentiometerState__voltage_v,  // get(index) function pointer
    fetch_function__PotentiometerState__voltage_v,  // fetch(index, &value) function pointer
    assign_function__PotentiometerState__voltage_v,  // assign(index, value) function pointer
    nullptr  // resize(index) function pointer
  },
  {
    "valid",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_BOOLEAN,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    false,  // is key
    true,  // is array
    2,  // array size
    false,  // is upper bound
    offsetof(sensoray826_msgs::msg::PotentiometerState, valid),  // bytes offset in struct
    nullptr,  // default value
    size_function__PotentiometerState__valid,  // size() function pointer
    get_const_function__PotentiometerState__valid,  // get_const(index) function pointer
    get_function__PotentiometerState__valid,  // get(index) function pointer
    fetch_function__PotentiometerState__valid,  // fetch(index, &value) function pointer
    assign_function__PotentiometerState__valid,  // assign(index, value) function pointer
    nullptr  // resize(index) function pointer
  },
  {
    "sdk_status",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_INT32,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    false,  // is key
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(sensoray826_msgs::msg::PotentiometerState, sdk_status),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr,  // fetch(index, &value) function pointer
    nullptr,  // assign(index, value) function pointer
    nullptr  // resize(index) function pointer
  },
  {
    "supply_valid",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_BOOLEAN,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    false,  // is key
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(sensoray826_msgs::msg::PotentiometerState, supply_valid),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr,  // fetch(index, &value) function pointer
    nullptr,  // assign(index, value) function pointer
    nullptr  // resize(index) function pointer
  },
  {
    "supply_voltage_v",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_DOUBLE,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    false,  // is key
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(sensoray826_msgs::msg::PotentiometerState, supply_voltage_v),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr,  // fetch(index, &value) function pointer
    nullptr,  // assign(index, value) function pointer
    nullptr  // resize(index) function pointer
  },
  {
    "supply_adc_timestamp_us",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_UINT32,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    false,  // is key
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(sensoray826_msgs::msg::PotentiometerState, supply_adc_timestamp_us),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr,  // fetch(index, &value) function pointer
    nullptr,  // assign(index, value) function pointer
    nullptr  // resize(index) function pointer
  }
};

static const ::rosidl_typesupport_introspection_cpp::MessageMembers PotentiometerState_message_members = {
  "sensoray826_msgs::msg",  // message namespace
  "PotentiometerState",  // message name
  13,  // number of fields
  sizeof(sensoray826_msgs::msg::PotentiometerState),
  false,  // has_any_key_member_
  PotentiometerState_message_member_array,  // message members
  PotentiometerState_init_function,  // function to initialize message memory (memory has to be allocated)
  PotentiometerState_fini_function  // function to terminate message instance (will not free memory)
};

static const rosidl_message_type_support_t PotentiometerState_message_type_support_handle = {
  ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
  &PotentiometerState_message_members,
  get_message_typesupport_handle_function,
  &sensoray826_msgs__msg__PotentiometerState__get_type_hash,
  &sensoray826_msgs__msg__PotentiometerState__get_type_description,
  &sensoray826_msgs__msg__PotentiometerState__get_type_description_sources,
};

}  // namespace rosidl_typesupport_introspection_cpp

}  // namespace msg

}  // namespace sensoray826_msgs


namespace rosidl_typesupport_introspection_cpp
{

template<>
ROSIDL_TYPESUPPORT_INTROSPECTION_CPP_PUBLIC
const rosidl_message_type_support_t *
get_message_type_support_handle<sensoray826_msgs::msg::PotentiometerState>()
{
  return &::sensoray826_msgs::msg::rosidl_typesupport_introspection_cpp::PotentiometerState_message_type_support_handle;
}

}  // namespace rosidl_typesupport_introspection_cpp

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_INTROSPECTION_CPP_PUBLIC
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, sensoray826_msgs, msg, PotentiometerState)() {
  return &::sensoray826_msgs::msg::rosidl_typesupport_introspection_cpp::PotentiometerState_message_type_support_handle;
}

#ifdef __cplusplus
}
#endif
