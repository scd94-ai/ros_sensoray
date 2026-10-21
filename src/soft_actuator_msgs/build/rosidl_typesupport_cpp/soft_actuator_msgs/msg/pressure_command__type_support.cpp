// generated from rosidl_typesupport_cpp/resource/idl__type_support.cpp.em
// with input from soft_actuator_msgs:msg/PressureCommand.idl
// generated code does not contain a copyright notice

#include "cstddef"
#include "rosidl_runtime_c/message_type_support_struct.h"
#include "soft_actuator_msgs/msg/detail/pressure_command__functions.h"
#include "soft_actuator_msgs/msg/detail/pressure_command__struct.hpp"
#include "rosidl_typesupport_cpp/identifier.hpp"
#include "rosidl_typesupport_cpp/message_type_support.hpp"
#include "rosidl_typesupport_c/type_support_map.h"
#include "rosidl_typesupport_cpp/message_type_support_dispatch.hpp"
#include "rosidl_typesupport_cpp/visibility_control.h"
#include "rosidl_typesupport_interface/macros.h"

namespace soft_actuator_msgs
{

namespace msg
{

namespace rosidl_typesupport_cpp
{

typedef struct _PressureCommand_type_support_ids_t
{
  const char * typesupport_identifier[2];
} _PressureCommand_type_support_ids_t;

static const _PressureCommand_type_support_ids_t _PressureCommand_message_typesupport_ids = {
  {
    "rosidl_typesupport_fastrtps_cpp",  // ::rosidl_typesupport_fastrtps_cpp::typesupport_identifier,
    "rosidl_typesupport_introspection_cpp",  // ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
  }
};

typedef struct _PressureCommand_type_support_symbol_names_t
{
  const char * symbol_name[2];
} _PressureCommand_type_support_symbol_names_t;

#define STRINGIFY_(s) #s
#define STRINGIFY(s) STRINGIFY_(s)

static const _PressureCommand_type_support_symbol_names_t _PressureCommand_message_typesupport_symbol_names = {
  {
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, soft_actuator_msgs, msg, PressureCommand)),
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, soft_actuator_msgs, msg, PressureCommand)),
  }
};

typedef struct _PressureCommand_type_support_data_t
{
  void * data[2];
} _PressureCommand_type_support_data_t;

static _PressureCommand_type_support_data_t _PressureCommand_message_typesupport_data = {
  {
    0,  // will store the shared library later
    0,  // will store the shared library later
  }
};

static const type_support_map_t _PressureCommand_message_typesupport_map = {
  2,
  "soft_actuator_msgs",
  &_PressureCommand_message_typesupport_ids.typesupport_identifier[0],
  &_PressureCommand_message_typesupport_symbol_names.symbol_name[0],
  &_PressureCommand_message_typesupport_data.data[0],
};

static const rosidl_message_type_support_t PressureCommand_message_type_support_handle = {
  ::rosidl_typesupport_cpp::typesupport_identifier,
  reinterpret_cast<const type_support_map_t *>(&_PressureCommand_message_typesupport_map),
  ::rosidl_typesupport_cpp::get_message_typesupport_handle_function,
  &soft_actuator_msgs__msg__PressureCommand__get_type_hash,
  &soft_actuator_msgs__msg__PressureCommand__get_type_description,
  &soft_actuator_msgs__msg__PressureCommand__get_type_description_sources,
};

}  // namespace rosidl_typesupport_cpp

}  // namespace msg

}  // namespace soft_actuator_msgs

namespace rosidl_typesupport_cpp
{

template<>
ROSIDL_TYPESUPPORT_CPP_PUBLIC
const rosidl_message_type_support_t *
get_message_type_support_handle<soft_actuator_msgs::msg::PressureCommand>()
{
  return &::soft_actuator_msgs::msg::rosidl_typesupport_cpp::PressureCommand_message_type_support_handle;
}

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_CPP_PUBLIC
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_cpp, soft_actuator_msgs, msg, PressureCommand)() {
  return get_message_type_support_handle<soft_actuator_msgs::msg::PressureCommand>();
}

#ifdef __cplusplus
}
#endif
}  // namespace rosidl_typesupport_cpp
