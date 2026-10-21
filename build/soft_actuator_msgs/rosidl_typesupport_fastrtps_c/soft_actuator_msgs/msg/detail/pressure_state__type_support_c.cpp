// generated from rosidl_typesupport_fastrtps_c/resource/idl__type_support_c.cpp.em
// with input from soft_actuator_msgs:msg/PressureState.idl
// generated code does not contain a copyright notice
#include "soft_actuator_msgs/msg/detail/pressure_state__rosidl_typesupport_fastrtps_c.h"


#include <cassert>
#include <cstddef>
#include <limits>
#include <string>
#include "rosidl_typesupport_fastrtps_c/identifier.h"
#include "rosidl_typesupport_fastrtps_c/serialization_helpers.hpp"
#include "rosidl_typesupport_fastrtps_c/wstring_conversion.hpp"
#include "rosidl_typesupport_fastrtps_cpp/message_type_support.h"
#include "soft_actuator_msgs/msg/rosidl_typesupport_fastrtps_c__visibility_control.h"
#include "soft_actuator_msgs/msg/detail/pressure_state__struct.h"
#include "soft_actuator_msgs/msg/detail/pressure_state__functions.h"
#include "fastcdr/Cdr.h"

#ifndef _WIN32
# pragma GCC diagnostic push
# pragma GCC diagnostic ignored "-Wunused-parameter"
# ifdef __clang__
#  pragma clang diagnostic ignored "-Wdeprecated-register"
#  pragma clang diagnostic ignored "-Wreturn-type-c-linkage"
# endif
#endif
#ifndef _WIN32
# pragma GCC diagnostic pop
#endif

// includes and forward declarations of message dependencies and their conversion functions

#if defined(__cplusplus)
extern "C"
{
#endif

#include "rosidl_runtime_c/string.h"  // fault, session_id
#include "rosidl_runtime_c/string_functions.h"  // fault, session_id
#include "std_msgs/msg/detail/header__functions.h"  // header

// forward declare type support functions

ROSIDL_TYPESUPPORT_FASTRTPS_C_IMPORT_soft_actuator_msgs
bool cdr_serialize_std_msgs__msg__Header(
  const std_msgs__msg__Header * ros_message,
  eprosima::fastcdr::Cdr & cdr);

ROSIDL_TYPESUPPORT_FASTRTPS_C_IMPORT_soft_actuator_msgs
bool cdr_deserialize_std_msgs__msg__Header(
  eprosima::fastcdr::Cdr & cdr,
  std_msgs__msg__Header * ros_message);

ROSIDL_TYPESUPPORT_FASTRTPS_C_IMPORT_soft_actuator_msgs
size_t get_serialized_size_std_msgs__msg__Header(
  const void * untyped_ros_message,
  size_t current_alignment);

ROSIDL_TYPESUPPORT_FASTRTPS_C_IMPORT_soft_actuator_msgs
size_t max_serialized_size_std_msgs__msg__Header(
  bool & full_bounded,
  bool & is_plain,
  size_t current_alignment);

ROSIDL_TYPESUPPORT_FASTRTPS_C_IMPORT_soft_actuator_msgs
bool cdr_serialize_key_std_msgs__msg__Header(
  const std_msgs__msg__Header * ros_message,
  eprosima::fastcdr::Cdr & cdr);

ROSIDL_TYPESUPPORT_FASTRTPS_C_IMPORT_soft_actuator_msgs
size_t get_serialized_size_key_std_msgs__msg__Header(
  const void * untyped_ros_message,
  size_t current_alignment);

ROSIDL_TYPESUPPORT_FASTRTPS_C_IMPORT_soft_actuator_msgs
size_t max_serialized_size_key_std_msgs__msg__Header(
  bool & full_bounded,
  bool & is_plain,
  size_t current_alignment);

ROSIDL_TYPESUPPORT_FASTRTPS_C_IMPORT_soft_actuator_msgs
const rosidl_message_type_support_t *
  ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, std_msgs, msg, Header)();


using _PressureState__ros_msg_type = soft_actuator_msgs__msg__PressureState;


ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_soft_actuator_msgs
bool cdr_serialize_soft_actuator_msgs__msg__PressureState(
  const soft_actuator_msgs__msg__PressureState * ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  // Field name: header
  {
    cdr_serialize_std_msgs__msg__Header(
      &ros_message->header, cdr);
  }

  // Field name: session_id
  {
    const rosidl_runtime_c__String * str = &ros_message->session_id;
    if (str->capacity == 0 || str->capacity <= str->size) {
      fprintf(stderr, "string capacity not greater than size\n");
      return false;
    }
    if (str->data[str->size] != '\0') {
      fprintf(stderr, "string not null-terminated\n");
      return false;
    }
    cdr << str->data;
  }

  // Field name: command_sequence
  {
    cdr << ros_message->command_sequence;
  }

  // Field name: written_pressure_kpa
  {
    size_t size = 3;
    auto array_ptr = ros_message->written_pressure_kpa;
    cdr.serialize_array(array_ptr, size);
  }

  // Field name: write_success
  {
    cdr << (ros_message->write_success ? true : false);
  }

  // Field name: ready
  {
    cdr << (ros_message->ready ? true : false);
  }

  // Field name: fault
  {
    const rosidl_runtime_c__String * str = &ros_message->fault;
    if (str->capacity == 0 || str->capacity <= str->size) {
      fprintf(stderr, "string capacity not greater than size\n");
      return false;
    }
    if (str->data[str->size] != '\0') {
      fprintf(stderr, "string not null-terminated\n");
      return false;
    }
    cdr << str->data;
  }

  return true;
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_soft_actuator_msgs
bool cdr_deserialize_soft_actuator_msgs__msg__PressureState(
  eprosima::fastcdr::Cdr & cdr,
  soft_actuator_msgs__msg__PressureState * ros_message)
{
  // Field name: header
  {
    cdr_deserialize_std_msgs__msg__Header(cdr, &ros_message->header);
  }

  // Field name: session_id
  {
    std::string tmp;
    cdr >> tmp;
    if (!ros_message->session_id.data) {
      rosidl_runtime_c__String__init(&ros_message->session_id);
    }
    bool succeeded = rosidl_runtime_c__String__assign(
      &ros_message->session_id,
      tmp.c_str());
    if (!succeeded) {
      fprintf(stderr, "failed to assign string into field 'session_id'\n");
      return false;
    }
  }

  // Field name: command_sequence
  {
    cdr >> ros_message->command_sequence;
  }

  // Field name: written_pressure_kpa
  {
    size_t size = 3;
    auto array_ptr = ros_message->written_pressure_kpa;
    cdr.deserialize_array(array_ptr, size);
  }

  // Field name: write_success
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message->write_success = tmp ? true : false;
  }

  // Field name: ready
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message->ready = tmp ? true : false;
  }

  // Field name: fault
  {
    std::string tmp;
    cdr >> tmp;
    if (!ros_message->fault.data) {
      rosidl_runtime_c__String__init(&ros_message->fault);
    }
    bool succeeded = rosidl_runtime_c__String__assign(
      &ros_message->fault,
      tmp.c_str());
    if (!succeeded) {
      fprintf(stderr, "failed to assign string into field 'fault'\n");
      return false;
    }
  }

  return true;
}  // NOLINT(readability/fn_size)


ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_soft_actuator_msgs
size_t get_serialized_size_soft_actuator_msgs__msg__PressureState(
  const void * untyped_ros_message,
  size_t current_alignment)
{
  const _PressureState__ros_msg_type * ros_message = static_cast<const _PressureState__ros_msg_type *>(untyped_ros_message);
  (void)ros_message;
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // Field name: header
  current_alignment += get_serialized_size_std_msgs__msg__Header(
    &(ros_message->header), current_alignment);

  // Field name: session_id
  current_alignment += padding +
    eprosima::fastcdr::Cdr::alignment(current_alignment, padding) +
    (ros_message->session_id.size + 1);

  // Field name: command_sequence
  {
    size_t item_size = sizeof(ros_message->command_sequence);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  // Field name: written_pressure_kpa
  {
    size_t array_size = 3;
    auto array_ptr = ros_message->written_pressure_kpa;
    (void)array_ptr;
    size_t item_size = sizeof(array_ptr[0]);
    current_alignment += array_size * item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  // Field name: write_success
  {
    size_t item_size = sizeof(ros_message->write_success);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  // Field name: ready
  {
    size_t item_size = sizeof(ros_message->ready);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  // Field name: fault
  current_alignment += padding +
    eprosima::fastcdr::Cdr::alignment(current_alignment, padding) +
    (ros_message->fault.size + 1);

  return current_alignment - initial_alignment;
}


ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_soft_actuator_msgs
size_t max_serialized_size_soft_actuator_msgs__msg__PressureState(
  bool & full_bounded,
  bool & is_plain,
  size_t current_alignment)
{
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  size_t last_member_size = 0;
  (void)last_member_size;
  (void)padding;
  (void)wchar_size;

  full_bounded = true;
  is_plain = true;

  // Field name: header
  {
    size_t array_size = 1;
    last_member_size = 0;
    for (size_t index = 0; index < array_size; ++index) {
      bool inner_full_bounded;
      bool inner_is_plain;
      size_t inner_size;
      inner_size =
        max_serialized_size_std_msgs__msg__Header(
        inner_full_bounded, inner_is_plain, current_alignment);
      last_member_size += inner_size;
      current_alignment += inner_size;
      full_bounded &= inner_full_bounded;
      is_plain &= inner_is_plain;
    }
  }

  // Field name: session_id
  {
    size_t array_size = 1;
    full_bounded = false;
    is_plain = false;
    for (size_t index = 0; index < array_size; ++index) {
      current_alignment += padding +
        eprosima::fastcdr::Cdr::alignment(current_alignment, padding) +
        1;
    }
  }

  // Field name: command_sequence
  {
    size_t array_size = 1;
    last_member_size = array_size * sizeof(uint64_t);
    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }

  // Field name: written_pressure_kpa
  {
    size_t array_size = 3;
    last_member_size = array_size * sizeof(uint64_t);
    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }

  // Field name: write_success
  {
    size_t array_size = 1;
    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }

  // Field name: ready
  {
    size_t array_size = 1;
    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }

  // Field name: fault
  {
    size_t array_size = 1;
    full_bounded = false;
    is_plain = false;
    for (size_t index = 0; index < array_size; ++index) {
      current_alignment += padding +
        eprosima::fastcdr::Cdr::alignment(current_alignment, padding) +
        1;
    }
  }


  size_t ret_val = current_alignment - initial_alignment;
  if (is_plain) {
    // All members are plain, and type is not empty.
    // We still need to check that the in-memory alignment
    // is the same as the CDR mandated alignment.
    using DataType = soft_actuator_msgs__msg__PressureState;
    is_plain =
      (
      offsetof(DataType, fault) +
      last_member_size
      ) == ret_val;
  }
  return ret_val;
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_soft_actuator_msgs
bool cdr_serialize_key_soft_actuator_msgs__msg__PressureState(
  const soft_actuator_msgs__msg__PressureState * ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  // Field name: header
  {
    cdr_serialize_key_std_msgs__msg__Header(
      &ros_message->header, cdr);
  }

  // Field name: session_id
  {
    const rosidl_runtime_c__String * str = &ros_message->session_id;
    if (str->capacity == 0 || str->capacity <= str->size) {
      fprintf(stderr, "string capacity not greater than size\n");
      return false;
    }
    if (str->data[str->size] != '\0') {
      fprintf(stderr, "string not null-terminated\n");
      return false;
    }
    cdr << str->data;
  }

  // Field name: command_sequence
  {
    cdr << ros_message->command_sequence;
  }

  // Field name: written_pressure_kpa
  {
    size_t size = 3;
    auto array_ptr = ros_message->written_pressure_kpa;
    cdr.serialize_array(array_ptr, size);
  }

  // Field name: write_success
  {
    cdr << (ros_message->write_success ? true : false);
  }

  // Field name: ready
  {
    cdr << (ros_message->ready ? true : false);
  }

  // Field name: fault
  {
    const rosidl_runtime_c__String * str = &ros_message->fault;
    if (str->capacity == 0 || str->capacity <= str->size) {
      fprintf(stderr, "string capacity not greater than size\n");
      return false;
    }
    if (str->data[str->size] != '\0') {
      fprintf(stderr, "string not null-terminated\n");
      return false;
    }
    cdr << str->data;
  }

  return true;
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_soft_actuator_msgs
size_t get_serialized_size_key_soft_actuator_msgs__msg__PressureState(
  const void * untyped_ros_message,
  size_t current_alignment)
{
  const _PressureState__ros_msg_type * ros_message = static_cast<const _PressureState__ros_msg_type *>(untyped_ros_message);
  (void)ros_message;

  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // Field name: header
  current_alignment += get_serialized_size_key_std_msgs__msg__Header(
    &(ros_message->header), current_alignment);

  // Field name: session_id
  current_alignment += padding +
    eprosima::fastcdr::Cdr::alignment(current_alignment, padding) +
    (ros_message->session_id.size + 1);

  // Field name: command_sequence
  {
    size_t item_size = sizeof(ros_message->command_sequence);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  // Field name: written_pressure_kpa
  {
    size_t array_size = 3;
    auto array_ptr = ros_message->written_pressure_kpa;
    (void)array_ptr;
    size_t item_size = sizeof(array_ptr[0]);
    current_alignment += array_size * item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  // Field name: write_success
  {
    size_t item_size = sizeof(ros_message->write_success);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  // Field name: ready
  {
    size_t item_size = sizeof(ros_message->ready);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  // Field name: fault
  current_alignment += padding +
    eprosima::fastcdr::Cdr::alignment(current_alignment, padding) +
    (ros_message->fault.size + 1);

  return current_alignment - initial_alignment;
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_soft_actuator_msgs
size_t max_serialized_size_key_soft_actuator_msgs__msg__PressureState(
  bool & full_bounded,
  bool & is_plain,
  size_t current_alignment)
{
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  size_t last_member_size = 0;
  (void)last_member_size;
  (void)padding;
  (void)wchar_size;

  full_bounded = true;
  is_plain = true;
  // Field name: header
  {
    size_t array_size = 1;
    last_member_size = 0;
    for (size_t index = 0; index < array_size; ++index) {
      bool inner_full_bounded;
      bool inner_is_plain;
      size_t inner_size;
      inner_size =
        max_serialized_size_key_std_msgs__msg__Header(
        inner_full_bounded, inner_is_plain, current_alignment);
      last_member_size += inner_size;
      current_alignment += inner_size;
      full_bounded &= inner_full_bounded;
      is_plain &= inner_is_plain;
    }
  }

  // Field name: session_id
  {
    size_t array_size = 1;
    full_bounded = false;
    is_plain = false;
    for (size_t index = 0; index < array_size; ++index) {
      current_alignment += padding +
        eprosima::fastcdr::Cdr::alignment(current_alignment, padding) +
        1;
    }
  }

  // Field name: command_sequence
  {
    size_t array_size = 1;
    last_member_size = array_size * sizeof(uint64_t);
    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }

  // Field name: written_pressure_kpa
  {
    size_t array_size = 3;
    last_member_size = array_size * sizeof(uint64_t);
    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }

  // Field name: write_success
  {
    size_t array_size = 1;
    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }

  // Field name: ready
  {
    size_t array_size = 1;
    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }

  // Field name: fault
  {
    size_t array_size = 1;
    full_bounded = false;
    is_plain = false;
    for (size_t index = 0; index < array_size; ++index) {
      current_alignment += padding +
        eprosima::fastcdr::Cdr::alignment(current_alignment, padding) +
        1;
    }
  }

  size_t ret_val = current_alignment - initial_alignment;
  if (is_plain) {
    // All members are plain, and type is not empty.
    // We still need to check that the in-memory alignment
    // is the same as the CDR mandated alignment.
    using DataType = soft_actuator_msgs__msg__PressureState;
    is_plain =
      (
      offsetof(DataType, fault) +
      last_member_size
      ) == ret_val;
  }
  return ret_val;
}


static bool _PressureState__cdr_serialize(
  const void * untyped_ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  const soft_actuator_msgs__msg__PressureState * ros_message = static_cast<const soft_actuator_msgs__msg__PressureState *>(untyped_ros_message);
  (void)ros_message;
  return cdr_serialize_soft_actuator_msgs__msg__PressureState(ros_message, cdr);
}

static bool _PressureState__cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  void * untyped_ros_message)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  soft_actuator_msgs__msg__PressureState * ros_message = static_cast<soft_actuator_msgs__msg__PressureState *>(untyped_ros_message);
  (void)ros_message;
  return cdr_deserialize_soft_actuator_msgs__msg__PressureState(cdr, ros_message);
}

static uint32_t _PressureState__get_serialized_size(const void * untyped_ros_message)
{
  return static_cast<uint32_t>(
    get_serialized_size_soft_actuator_msgs__msg__PressureState(
      untyped_ros_message, 0));
}

static size_t _PressureState__max_serialized_size(char & bounds_info)
{
  bool full_bounded;
  bool is_plain;
  size_t ret_val;

  ret_val = max_serialized_size_soft_actuator_msgs__msg__PressureState(
    full_bounded, is_plain, 0);

  bounds_info =
    is_plain ? ROSIDL_TYPESUPPORT_FASTRTPS_PLAIN_TYPE :
    full_bounded ? ROSIDL_TYPESUPPORT_FASTRTPS_BOUNDED_TYPE : ROSIDL_TYPESUPPORT_FASTRTPS_UNBOUNDED_TYPE;
  return ret_val;
}


static message_type_support_callbacks_t __callbacks_PressureState = {
  "soft_actuator_msgs::msg",
  "PressureState",
  _PressureState__cdr_serialize,
  _PressureState__cdr_deserialize,
  _PressureState__get_serialized_size,
  _PressureState__max_serialized_size,
  nullptr
};

static rosidl_message_type_support_t _PressureState__type_support = {
  rosidl_typesupport_fastrtps_c__identifier,
  &__callbacks_PressureState,
  get_message_typesupport_handle_function,
  &soft_actuator_msgs__msg__PressureState__get_type_hash,
  &soft_actuator_msgs__msg__PressureState__get_type_description,
  &soft_actuator_msgs__msg__PressureState__get_type_description_sources,
};

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, soft_actuator_msgs, msg, PressureState)() {
  return &_PressureState__type_support;
}

#if defined(__cplusplus)
}
#endif
