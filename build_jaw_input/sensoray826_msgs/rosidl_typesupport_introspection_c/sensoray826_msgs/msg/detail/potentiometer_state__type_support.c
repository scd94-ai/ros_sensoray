// generated from rosidl_typesupport_introspection_c/resource/idl__type_support.c.em
// with input from sensoray826_msgs:msg/PotentiometerState.idl
// generated code does not contain a copyright notice

#include <stddef.h>
#include "sensoray826_msgs/msg/detail/potentiometer_state__rosidl_typesupport_introspection_c.h"
#include "sensoray826_msgs/msg/rosidl_typesupport_introspection_c__visibility_control.h"
#include "rosidl_typesupport_introspection_c/field_types.h"
#include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/message_introspection.h"
#include "sensoray826_msgs/msg/detail/potentiometer_state__functions.h"
#include "sensoray826_msgs/msg/detail/potentiometer_state__struct.h"


// Include directives for member types
// Member `header`
#include "std_msgs/msg/header.h"
// Member `header`
#include "std_msgs/msg/detail/header__rosidl_typesupport_introspection_c.h"
// Member `session_id`
#include "rosidl_runtime_c/string_functions.h"

#ifdef __cplusplus
extern "C"
{
#endif

void sensoray826_msgs__msg__PotentiometerState__rosidl_typesupport_introspection_c__PotentiometerState_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  sensoray826_msgs__msg__PotentiometerState__init(message_memory);
}

void sensoray826_msgs__msg__PotentiometerState__rosidl_typesupport_introspection_c__PotentiometerState_fini_function(void * message_memory)
{
  sensoray826_msgs__msg__PotentiometerState__fini(message_memory);
}

size_t sensoray826_msgs__msg__PotentiometerState__rosidl_typesupport_introspection_c__size_function__PotentiometerState__adc_channels(
  const void * untyped_member)
{
  (void)untyped_member;
  return 2;
}

const void * sensoray826_msgs__msg__PotentiometerState__rosidl_typesupport_introspection_c__get_const_function__PotentiometerState__adc_channels(
  const void * untyped_member, size_t index)
{
  const uint8_t * member =
    (const uint8_t *)(untyped_member);
  return &member[index];
}

void * sensoray826_msgs__msg__PotentiometerState__rosidl_typesupport_introspection_c__get_function__PotentiometerState__adc_channels(
  void * untyped_member, size_t index)
{
  uint8_t * member =
    (uint8_t *)(untyped_member);
  return &member[index];
}

void sensoray826_msgs__msg__PotentiometerState__rosidl_typesupport_introspection_c__fetch_function__PotentiometerState__adc_channels(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const uint8_t * item =
    ((const uint8_t *)
    sensoray826_msgs__msg__PotentiometerState__rosidl_typesupport_introspection_c__get_const_function__PotentiometerState__adc_channels(untyped_member, index));
  uint8_t * value =
    (uint8_t *)(untyped_value);
  *value = *item;
}

void sensoray826_msgs__msg__PotentiometerState__rosidl_typesupport_introspection_c__assign_function__PotentiometerState__adc_channels(
  void * untyped_member, size_t index, const void * untyped_value)
{
  uint8_t * item =
    ((uint8_t *)
    sensoray826_msgs__msg__PotentiometerState__rosidl_typesupport_introspection_c__get_function__PotentiometerState__adc_channels(untyped_member, index));
  const uint8_t * value =
    (const uint8_t *)(untyped_value);
  *item = *value;
}

size_t sensoray826_msgs__msg__PotentiometerState__rosidl_typesupport_introspection_c__size_function__PotentiometerState__adc_timestamps_us(
  const void * untyped_member)
{
  (void)untyped_member;
  return 2;
}

const void * sensoray826_msgs__msg__PotentiometerState__rosidl_typesupport_introspection_c__get_const_function__PotentiometerState__adc_timestamps_us(
  const void * untyped_member, size_t index)
{
  const uint32_t * member =
    (const uint32_t *)(untyped_member);
  return &member[index];
}

void * sensoray826_msgs__msg__PotentiometerState__rosidl_typesupport_introspection_c__get_function__PotentiometerState__adc_timestamps_us(
  void * untyped_member, size_t index)
{
  uint32_t * member =
    (uint32_t *)(untyped_member);
  return &member[index];
}

void sensoray826_msgs__msg__PotentiometerState__rosidl_typesupport_introspection_c__fetch_function__PotentiometerState__adc_timestamps_us(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const uint32_t * item =
    ((const uint32_t *)
    sensoray826_msgs__msg__PotentiometerState__rosidl_typesupport_introspection_c__get_const_function__PotentiometerState__adc_timestamps_us(untyped_member, index));
  uint32_t * value =
    (uint32_t *)(untyped_value);
  *value = *item;
}

void sensoray826_msgs__msg__PotentiometerState__rosidl_typesupport_introspection_c__assign_function__PotentiometerState__adc_timestamps_us(
  void * untyped_member, size_t index, const void * untyped_value)
{
  uint32_t * item =
    ((uint32_t *)
    sensoray826_msgs__msg__PotentiometerState__rosidl_typesupport_introspection_c__get_function__PotentiometerState__adc_timestamps_us(untyped_member, index));
  const uint32_t * value =
    (const uint32_t *)(untyped_value);
  *item = *value;
}

size_t sensoray826_msgs__msg__PotentiometerState__rosidl_typesupport_introspection_c__size_function__PotentiometerState__voltage_v(
  const void * untyped_member)
{
  (void)untyped_member;
  return 2;
}

const void * sensoray826_msgs__msg__PotentiometerState__rosidl_typesupport_introspection_c__get_const_function__PotentiometerState__voltage_v(
  const void * untyped_member, size_t index)
{
  const double * member =
    (const double *)(untyped_member);
  return &member[index];
}

void * sensoray826_msgs__msg__PotentiometerState__rosidl_typesupport_introspection_c__get_function__PotentiometerState__voltage_v(
  void * untyped_member, size_t index)
{
  double * member =
    (double *)(untyped_member);
  return &member[index];
}

void sensoray826_msgs__msg__PotentiometerState__rosidl_typesupport_introspection_c__fetch_function__PotentiometerState__voltage_v(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const double * item =
    ((const double *)
    sensoray826_msgs__msg__PotentiometerState__rosidl_typesupport_introspection_c__get_const_function__PotentiometerState__voltage_v(untyped_member, index));
  double * value =
    (double *)(untyped_value);
  *value = *item;
}

void sensoray826_msgs__msg__PotentiometerState__rosidl_typesupport_introspection_c__assign_function__PotentiometerState__voltage_v(
  void * untyped_member, size_t index, const void * untyped_value)
{
  double * item =
    ((double *)
    sensoray826_msgs__msg__PotentiometerState__rosidl_typesupport_introspection_c__get_function__PotentiometerState__voltage_v(untyped_member, index));
  const double * value =
    (const double *)(untyped_value);
  *item = *value;
}

size_t sensoray826_msgs__msg__PotentiometerState__rosidl_typesupport_introspection_c__size_function__PotentiometerState__valid(
  const void * untyped_member)
{
  (void)untyped_member;
  return 2;
}

const void * sensoray826_msgs__msg__PotentiometerState__rosidl_typesupport_introspection_c__get_const_function__PotentiometerState__valid(
  const void * untyped_member, size_t index)
{
  const bool * member =
    (const bool *)(untyped_member);
  return &member[index];
}

void * sensoray826_msgs__msg__PotentiometerState__rosidl_typesupport_introspection_c__get_function__PotentiometerState__valid(
  void * untyped_member, size_t index)
{
  bool * member =
    (bool *)(untyped_member);
  return &member[index];
}

void sensoray826_msgs__msg__PotentiometerState__rosidl_typesupport_introspection_c__fetch_function__PotentiometerState__valid(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const bool * item =
    ((const bool *)
    sensoray826_msgs__msg__PotentiometerState__rosidl_typesupport_introspection_c__get_const_function__PotentiometerState__valid(untyped_member, index));
  bool * value =
    (bool *)(untyped_value);
  *value = *item;
}

void sensoray826_msgs__msg__PotentiometerState__rosidl_typesupport_introspection_c__assign_function__PotentiometerState__valid(
  void * untyped_member, size_t index, const void * untyped_value)
{
  bool * item =
    ((bool *)
    sensoray826_msgs__msg__PotentiometerState__rosidl_typesupport_introspection_c__get_function__PotentiometerState__valid(untyped_member, index));
  const bool * value =
    (const bool *)(untyped_value);
  *item = *value;
}

static rosidl_typesupport_introspection_c__MessageMember sensoray826_msgs__msg__PotentiometerState__rosidl_typesupport_introspection_c__PotentiometerState_message_member_array[13] = {
  {
    "header",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is key
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(sensoray826_msgs__msg__PotentiometerState, header),  // bytes offset in struct
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
    offsetof(sensoray826_msgs__msg__PotentiometerState, session_id),  // bytes offset in struct
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
    offsetof(sensoray826_msgs__msg__PotentiometerState, sequence),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "board",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_UINT8,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is key
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(sensoray826_msgs__msg__PotentiometerState, board),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "settling_us",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_UINT32,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is key
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(sensoray826_msgs__msg__PotentiometerState, settling_us),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "adc_channels",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_UINT8,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is key
    true,  // is array
    2,  // array size
    false,  // is upper bound
    offsetof(sensoray826_msgs__msg__PotentiometerState, adc_channels),  // bytes offset in struct
    NULL,  // default value
    sensoray826_msgs__msg__PotentiometerState__rosidl_typesupport_introspection_c__size_function__PotentiometerState__adc_channels,  // size() function pointer
    sensoray826_msgs__msg__PotentiometerState__rosidl_typesupport_introspection_c__get_const_function__PotentiometerState__adc_channels,  // get_const(index) function pointer
    sensoray826_msgs__msg__PotentiometerState__rosidl_typesupport_introspection_c__get_function__PotentiometerState__adc_channels,  // get(index) function pointer
    sensoray826_msgs__msg__PotentiometerState__rosidl_typesupport_introspection_c__fetch_function__PotentiometerState__adc_channels,  // fetch(index, &value) function pointer
    sensoray826_msgs__msg__PotentiometerState__rosidl_typesupport_introspection_c__assign_function__PotentiometerState__adc_channels,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "adc_timestamps_us",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_UINT32,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is key
    true,  // is array
    2,  // array size
    false,  // is upper bound
    offsetof(sensoray826_msgs__msg__PotentiometerState, adc_timestamps_us),  // bytes offset in struct
    NULL,  // default value
    sensoray826_msgs__msg__PotentiometerState__rosidl_typesupport_introspection_c__size_function__PotentiometerState__adc_timestamps_us,  // size() function pointer
    sensoray826_msgs__msg__PotentiometerState__rosidl_typesupport_introspection_c__get_const_function__PotentiometerState__adc_timestamps_us,  // get_const(index) function pointer
    sensoray826_msgs__msg__PotentiometerState__rosidl_typesupport_introspection_c__get_function__PotentiometerState__adc_timestamps_us,  // get(index) function pointer
    sensoray826_msgs__msg__PotentiometerState__rosidl_typesupport_introspection_c__fetch_function__PotentiometerState__adc_timestamps_us,  // fetch(index, &value) function pointer
    sensoray826_msgs__msg__PotentiometerState__rosidl_typesupport_introspection_c__assign_function__PotentiometerState__adc_timestamps_us,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "voltage_v",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_DOUBLE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is key
    true,  // is array
    2,  // array size
    false,  // is upper bound
    offsetof(sensoray826_msgs__msg__PotentiometerState, voltage_v),  // bytes offset in struct
    NULL,  // default value
    sensoray826_msgs__msg__PotentiometerState__rosidl_typesupport_introspection_c__size_function__PotentiometerState__voltage_v,  // size() function pointer
    sensoray826_msgs__msg__PotentiometerState__rosidl_typesupport_introspection_c__get_const_function__PotentiometerState__voltage_v,  // get_const(index) function pointer
    sensoray826_msgs__msg__PotentiometerState__rosidl_typesupport_introspection_c__get_function__PotentiometerState__voltage_v,  // get(index) function pointer
    sensoray826_msgs__msg__PotentiometerState__rosidl_typesupport_introspection_c__fetch_function__PotentiometerState__voltage_v,  // fetch(index, &value) function pointer
    sensoray826_msgs__msg__PotentiometerState__rosidl_typesupport_introspection_c__assign_function__PotentiometerState__voltage_v,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "valid",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_BOOLEAN,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is key
    true,  // is array
    2,  // array size
    false,  // is upper bound
    offsetof(sensoray826_msgs__msg__PotentiometerState, valid),  // bytes offset in struct
    NULL,  // default value
    sensoray826_msgs__msg__PotentiometerState__rosidl_typesupport_introspection_c__size_function__PotentiometerState__valid,  // size() function pointer
    sensoray826_msgs__msg__PotentiometerState__rosidl_typesupport_introspection_c__get_const_function__PotentiometerState__valid,  // get_const(index) function pointer
    sensoray826_msgs__msg__PotentiometerState__rosidl_typesupport_introspection_c__get_function__PotentiometerState__valid,  // get(index) function pointer
    sensoray826_msgs__msg__PotentiometerState__rosidl_typesupport_introspection_c__fetch_function__PotentiometerState__valid,  // fetch(index, &value) function pointer
    sensoray826_msgs__msg__PotentiometerState__rosidl_typesupport_introspection_c__assign_function__PotentiometerState__valid,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "sdk_status",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_INT32,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is key
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(sensoray826_msgs__msg__PotentiometerState, sdk_status),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "supply_valid",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_BOOLEAN,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is key
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(sensoray826_msgs__msg__PotentiometerState, supply_valid),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "supply_voltage_v",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_DOUBLE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is key
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(sensoray826_msgs__msg__PotentiometerState, supply_voltage_v),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "supply_adc_timestamp_us",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_UINT32,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is key
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(sensoray826_msgs__msg__PotentiometerState, supply_adc_timestamp_us),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers sensoray826_msgs__msg__PotentiometerState__rosidl_typesupport_introspection_c__PotentiometerState_message_members = {
  "sensoray826_msgs__msg",  // message namespace
  "PotentiometerState",  // message name
  13,  // number of fields
  sizeof(sensoray826_msgs__msg__PotentiometerState),
  false,  // has_any_key_member_
  sensoray826_msgs__msg__PotentiometerState__rosidl_typesupport_introspection_c__PotentiometerState_message_member_array,  // message members
  sensoray826_msgs__msg__PotentiometerState__rosidl_typesupport_introspection_c__PotentiometerState_init_function,  // function to initialize message memory (memory has to be allocated)
  sensoray826_msgs__msg__PotentiometerState__rosidl_typesupport_introspection_c__PotentiometerState_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t sensoray826_msgs__msg__PotentiometerState__rosidl_typesupport_introspection_c__PotentiometerState_message_type_support_handle = {
  0,
  &sensoray826_msgs__msg__PotentiometerState__rosidl_typesupport_introspection_c__PotentiometerState_message_members,
  get_message_typesupport_handle_function,
  &sensoray826_msgs__msg__PotentiometerState__get_type_hash,
  &sensoray826_msgs__msg__PotentiometerState__get_type_description,
  &sensoray826_msgs__msg__PotentiometerState__get_type_description_sources,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_sensoray826_msgs
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, sensoray826_msgs, msg, PotentiometerState)() {
  sensoray826_msgs__msg__PotentiometerState__rosidl_typesupport_introspection_c__PotentiometerState_message_member_array[0].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, std_msgs, msg, Header)();
  if (!sensoray826_msgs__msg__PotentiometerState__rosidl_typesupport_introspection_c__PotentiometerState_message_type_support_handle.typesupport_identifier) {
    sensoray826_msgs__msg__PotentiometerState__rosidl_typesupport_introspection_c__PotentiometerState_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &sensoray826_msgs__msg__PotentiometerState__rosidl_typesupport_introspection_c__PotentiometerState_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif
