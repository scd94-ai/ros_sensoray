// generated from rosidl_typesupport_fastrtps_c/resource/idl__type_support_c.cpp.em
// with input from soft_actuator_msgs:msg/ControllerStatus.idl
// generated code does not contain a copyright notice
#include "soft_actuator_msgs/msg/detail/controller_status__rosidl_typesupport_fastrtps_c.h"


#include <cassert>
#include <cstddef>
#include <limits>
#include <string>
#include "rosidl_typesupport_fastrtps_c/identifier.h"
#include "rosidl_typesupport_fastrtps_c/serialization_helpers.hpp"
#include "rosidl_typesupport_fastrtps_c/wstring_conversion.hpp"
#include "rosidl_typesupport_fastrtps_cpp/message_type_support.h"
#include "soft_actuator_msgs/msg/rosidl_typesupport_fastrtps_c__visibility_control.h"
#include "soft_actuator_msgs/msg/detail/controller_status__struct.h"
#include "soft_actuator_msgs/msg/detail/controller_status__functions.h"
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

#include "rosidl_runtime_c/string.h"  // contact_state, effective_mode, feedback_reason, requested_mode, session_id, state
#include "rosidl_runtime_c/string_functions.h"  // contact_state, effective_mode, feedback_reason, requested_mode, session_id, state
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


using _ControllerStatus__ros_msg_type = soft_actuator_msgs__msg__ControllerStatus;


ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_soft_actuator_msgs
bool cdr_serialize_soft_actuator_msgs__msg__ControllerStatus(
  const soft_actuator_msgs__msg__ControllerStatus * ros_message,
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

  // Field name: state
  {
    const rosidl_runtime_c__String * str = &ros_message->state;
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

  // Field name: enabled
  {
    cdr << (ros_message->enabled ? true : false);
  }

  // Field name: requested_mode
  {
    const rosidl_runtime_c__String * str = &ros_message->requested_mode;
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

  // Field name: effective_mode
  {
    const rosidl_runtime_c__String * str = &ros_message->effective_mode;
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

  // Field name: feedback_reason
  {
    const rosidl_runtime_c__String * str = &ros_message->feedback_reason;
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

  // Field name: numeric_valid
  {
    cdr << (ros_message->numeric_valid ? true : false);
  }

  // Field name: pressure_limited
  {
    cdr << (ros_message->pressure_limited ? true : false);
  }

  // Field name: measured_error_valid
  {
    cdr << (ros_message->measured_error_valid ? true : false);
  }

  // Field name: contact_state
  {
    const rosidl_runtime_c__String * str = &ros_message->contact_state;
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

  // Field name: target_mm
  {
    size_t size = 3;
    auto array_ptr = ros_message->target_mm;
    cdr.serialize_array(array_ptr, size);
  }

  // Field name: predicted_mm
  {
    size_t size = 3;
    auto array_ptr = ros_message->predicted_mm;
    cdr.serialize_array(array_ptr, size);
  }

  // Field name: error_mm
  {
    size_t size = 3;
    auto array_ptr = ros_message->error_mm;
    cdr.serialize_array(array_ptr, size);
  }

  // Field name: requested_pressure_kpa
  {
    size_t size = 3;
    auto array_ptr = ros_message->requested_pressure_kpa;
    cdr.serialize_array(array_ptr, size);
  }

  // Field name: core_pressure_kpa
  {
    size_t size = 3;
    auto array_ptr = ros_message->core_pressure_kpa;
    cdr.serialize_array(array_ptr, size);
  }

  // Field name: output_pressure_kpa
  {
    size_t size = 3;
    auto array_ptr = ros_message->output_pressure_kpa;
    cdr.serialize_array(array_ptr, size);
  }

  // Field name: last_written_pressure_kpa
  {
    size_t size = 3;
    auto array_ptr = ros_message->last_written_pressure_kpa;
    cdr.serialize_array(array_ptr, size);
  }

  // Field name: writer_fresh
  {
    cdr << (ros_message->writer_fresh ? true : false);
  }

  // Field name: feedback_sequence
  {
    cdr << ros_message->feedback_sequence;
  }

  return true;
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_soft_actuator_msgs
bool cdr_deserialize_soft_actuator_msgs__msg__ControllerStatus(
  eprosima::fastcdr::Cdr & cdr,
  soft_actuator_msgs__msg__ControllerStatus * ros_message)
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

  // Field name: state
  {
    std::string tmp;
    cdr >> tmp;
    if (!ros_message->state.data) {
      rosidl_runtime_c__String__init(&ros_message->state);
    }
    bool succeeded = rosidl_runtime_c__String__assign(
      &ros_message->state,
      tmp.c_str());
    if (!succeeded) {
      fprintf(stderr, "failed to assign string into field 'state'\n");
      return false;
    }
  }

  // Field name: enabled
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message->enabled = tmp ? true : false;
  }

  // Field name: requested_mode
  {
    std::string tmp;
    cdr >> tmp;
    if (!ros_message->requested_mode.data) {
      rosidl_runtime_c__String__init(&ros_message->requested_mode);
    }
    bool succeeded = rosidl_runtime_c__String__assign(
      &ros_message->requested_mode,
      tmp.c_str());
    if (!succeeded) {
      fprintf(stderr, "failed to assign string into field 'requested_mode'\n");
      return false;
    }
  }

  // Field name: effective_mode
  {
    std::string tmp;
    cdr >> tmp;
    if (!ros_message->effective_mode.data) {
      rosidl_runtime_c__String__init(&ros_message->effective_mode);
    }
    bool succeeded = rosidl_runtime_c__String__assign(
      &ros_message->effective_mode,
      tmp.c_str());
    if (!succeeded) {
      fprintf(stderr, "failed to assign string into field 'effective_mode'\n");
      return false;
    }
  }

  // Field name: feedback_reason
  {
    std::string tmp;
    cdr >> tmp;
    if (!ros_message->feedback_reason.data) {
      rosidl_runtime_c__String__init(&ros_message->feedback_reason);
    }
    bool succeeded = rosidl_runtime_c__String__assign(
      &ros_message->feedback_reason,
      tmp.c_str());
    if (!succeeded) {
      fprintf(stderr, "failed to assign string into field 'feedback_reason'\n");
      return false;
    }
  }

  // Field name: numeric_valid
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message->numeric_valid = tmp ? true : false;
  }

  // Field name: pressure_limited
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message->pressure_limited = tmp ? true : false;
  }

  // Field name: measured_error_valid
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message->measured_error_valid = tmp ? true : false;
  }

  // Field name: contact_state
  {
    std::string tmp;
    cdr >> tmp;
    if (!ros_message->contact_state.data) {
      rosidl_runtime_c__String__init(&ros_message->contact_state);
    }
    bool succeeded = rosidl_runtime_c__String__assign(
      &ros_message->contact_state,
      tmp.c_str());
    if (!succeeded) {
      fprintf(stderr, "failed to assign string into field 'contact_state'\n");
      return false;
    }
  }

  // Field name: target_mm
  {
    size_t size = 3;
    auto array_ptr = ros_message->target_mm;
    cdr.deserialize_array(array_ptr, size);
  }

  // Field name: predicted_mm
  {
    size_t size = 3;
    auto array_ptr = ros_message->predicted_mm;
    cdr.deserialize_array(array_ptr, size);
  }

  // Field name: error_mm
  {
    size_t size = 3;
    auto array_ptr = ros_message->error_mm;
    cdr.deserialize_array(array_ptr, size);
  }

  // Field name: requested_pressure_kpa
  {
    size_t size = 3;
    auto array_ptr = ros_message->requested_pressure_kpa;
    cdr.deserialize_array(array_ptr, size);
  }

  // Field name: core_pressure_kpa
  {
    size_t size = 3;
    auto array_ptr = ros_message->core_pressure_kpa;
    cdr.deserialize_array(array_ptr, size);
  }

  // Field name: output_pressure_kpa
  {
    size_t size = 3;
    auto array_ptr = ros_message->output_pressure_kpa;
    cdr.deserialize_array(array_ptr, size);
  }

  // Field name: last_written_pressure_kpa
  {
    size_t size = 3;
    auto array_ptr = ros_message->last_written_pressure_kpa;
    cdr.deserialize_array(array_ptr, size);
  }

  // Field name: writer_fresh
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message->writer_fresh = tmp ? true : false;
  }

  // Field name: feedback_sequence
  {
    cdr >> ros_message->feedback_sequence;
  }

  return true;
}  // NOLINT(readability/fn_size)


ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_soft_actuator_msgs
size_t get_serialized_size_soft_actuator_msgs__msg__ControllerStatus(
  const void * untyped_ros_message,
  size_t current_alignment)
{
  const _ControllerStatus__ros_msg_type * ros_message = static_cast<const _ControllerStatus__ros_msg_type *>(untyped_ros_message);
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

  // Field name: state
  current_alignment += padding +
    eprosima::fastcdr::Cdr::alignment(current_alignment, padding) +
    (ros_message->state.size + 1);

  // Field name: enabled
  {
    size_t item_size = sizeof(ros_message->enabled);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  // Field name: requested_mode
  current_alignment += padding +
    eprosima::fastcdr::Cdr::alignment(current_alignment, padding) +
    (ros_message->requested_mode.size + 1);

  // Field name: effective_mode
  current_alignment += padding +
    eprosima::fastcdr::Cdr::alignment(current_alignment, padding) +
    (ros_message->effective_mode.size + 1);

  // Field name: feedback_reason
  current_alignment += padding +
    eprosima::fastcdr::Cdr::alignment(current_alignment, padding) +
    (ros_message->feedback_reason.size + 1);

  // Field name: numeric_valid
  {
    size_t item_size = sizeof(ros_message->numeric_valid);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  // Field name: pressure_limited
  {
    size_t item_size = sizeof(ros_message->pressure_limited);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  // Field name: measured_error_valid
  {
    size_t item_size = sizeof(ros_message->measured_error_valid);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  // Field name: contact_state
  current_alignment += padding +
    eprosima::fastcdr::Cdr::alignment(current_alignment, padding) +
    (ros_message->contact_state.size + 1);

  // Field name: target_mm
  {
    size_t array_size = 3;
    auto array_ptr = ros_message->target_mm;
    (void)array_ptr;
    size_t item_size = sizeof(array_ptr[0]);
    current_alignment += array_size * item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  // Field name: predicted_mm
  {
    size_t array_size = 3;
    auto array_ptr = ros_message->predicted_mm;
    (void)array_ptr;
    size_t item_size = sizeof(array_ptr[0]);
    current_alignment += array_size * item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  // Field name: error_mm
  {
    size_t array_size = 3;
    auto array_ptr = ros_message->error_mm;
    (void)array_ptr;
    size_t item_size = sizeof(array_ptr[0]);
    current_alignment += array_size * item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  // Field name: requested_pressure_kpa
  {
    size_t array_size = 3;
    auto array_ptr = ros_message->requested_pressure_kpa;
    (void)array_ptr;
    size_t item_size = sizeof(array_ptr[0]);
    current_alignment += array_size * item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  // Field name: core_pressure_kpa
  {
    size_t array_size = 3;
    auto array_ptr = ros_message->core_pressure_kpa;
    (void)array_ptr;
    size_t item_size = sizeof(array_ptr[0]);
    current_alignment += array_size * item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  // Field name: output_pressure_kpa
  {
    size_t array_size = 3;
    auto array_ptr = ros_message->output_pressure_kpa;
    (void)array_ptr;
    size_t item_size = sizeof(array_ptr[0]);
    current_alignment += array_size * item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  // Field name: last_written_pressure_kpa
  {
    size_t array_size = 3;
    auto array_ptr = ros_message->last_written_pressure_kpa;
    (void)array_ptr;
    size_t item_size = sizeof(array_ptr[0]);
    current_alignment += array_size * item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  // Field name: writer_fresh
  {
    size_t item_size = sizeof(ros_message->writer_fresh);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  // Field name: feedback_sequence
  {
    size_t item_size = sizeof(ros_message->feedback_sequence);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  return current_alignment - initial_alignment;
}


ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_soft_actuator_msgs
size_t max_serialized_size_soft_actuator_msgs__msg__ControllerStatus(
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

  // Field name: state
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

  // Field name: enabled
  {
    size_t array_size = 1;
    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }

  // Field name: requested_mode
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

  // Field name: effective_mode
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

  // Field name: feedback_reason
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

  // Field name: numeric_valid
  {
    size_t array_size = 1;
    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }

  // Field name: pressure_limited
  {
    size_t array_size = 1;
    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }

  // Field name: measured_error_valid
  {
    size_t array_size = 1;
    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }

  // Field name: contact_state
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

  // Field name: target_mm
  {
    size_t array_size = 3;
    last_member_size = array_size * sizeof(uint64_t);
    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }

  // Field name: predicted_mm
  {
    size_t array_size = 3;
    last_member_size = array_size * sizeof(uint64_t);
    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }

  // Field name: error_mm
  {
    size_t array_size = 3;
    last_member_size = array_size * sizeof(uint64_t);
    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }

  // Field name: requested_pressure_kpa
  {
    size_t array_size = 3;
    last_member_size = array_size * sizeof(uint64_t);
    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }

  // Field name: core_pressure_kpa
  {
    size_t array_size = 3;
    last_member_size = array_size * sizeof(uint64_t);
    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }

  // Field name: output_pressure_kpa
  {
    size_t array_size = 3;
    last_member_size = array_size * sizeof(uint64_t);
    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }

  // Field name: last_written_pressure_kpa
  {
    size_t array_size = 3;
    last_member_size = array_size * sizeof(uint64_t);
    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }

  // Field name: writer_fresh
  {
    size_t array_size = 1;
    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }

  // Field name: feedback_sequence
  {
    size_t array_size = 1;
    last_member_size = array_size * sizeof(uint64_t);
    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }


  size_t ret_val = current_alignment - initial_alignment;
  if (is_plain) {
    // All members are plain, and type is not empty.
    // We still need to check that the in-memory alignment
    // is the same as the CDR mandated alignment.
    using DataType = soft_actuator_msgs__msg__ControllerStatus;
    is_plain =
      (
      offsetof(DataType, feedback_sequence) +
      last_member_size
      ) == ret_val;
  }
  return ret_val;
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_soft_actuator_msgs
bool cdr_serialize_key_soft_actuator_msgs__msg__ControllerStatus(
  const soft_actuator_msgs__msg__ControllerStatus * ros_message,
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

  // Field name: state
  {
    const rosidl_runtime_c__String * str = &ros_message->state;
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

  // Field name: enabled
  {
    cdr << (ros_message->enabled ? true : false);
  }

  // Field name: requested_mode
  {
    const rosidl_runtime_c__String * str = &ros_message->requested_mode;
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

  // Field name: effective_mode
  {
    const rosidl_runtime_c__String * str = &ros_message->effective_mode;
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

  // Field name: feedback_reason
  {
    const rosidl_runtime_c__String * str = &ros_message->feedback_reason;
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

  // Field name: numeric_valid
  {
    cdr << (ros_message->numeric_valid ? true : false);
  }

  // Field name: pressure_limited
  {
    cdr << (ros_message->pressure_limited ? true : false);
  }

  // Field name: measured_error_valid
  {
    cdr << (ros_message->measured_error_valid ? true : false);
  }

  // Field name: contact_state
  {
    const rosidl_runtime_c__String * str = &ros_message->contact_state;
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

  // Field name: target_mm
  {
    size_t size = 3;
    auto array_ptr = ros_message->target_mm;
    cdr.serialize_array(array_ptr, size);
  }

  // Field name: predicted_mm
  {
    size_t size = 3;
    auto array_ptr = ros_message->predicted_mm;
    cdr.serialize_array(array_ptr, size);
  }

  // Field name: error_mm
  {
    size_t size = 3;
    auto array_ptr = ros_message->error_mm;
    cdr.serialize_array(array_ptr, size);
  }

  // Field name: requested_pressure_kpa
  {
    size_t size = 3;
    auto array_ptr = ros_message->requested_pressure_kpa;
    cdr.serialize_array(array_ptr, size);
  }

  // Field name: core_pressure_kpa
  {
    size_t size = 3;
    auto array_ptr = ros_message->core_pressure_kpa;
    cdr.serialize_array(array_ptr, size);
  }

  // Field name: output_pressure_kpa
  {
    size_t size = 3;
    auto array_ptr = ros_message->output_pressure_kpa;
    cdr.serialize_array(array_ptr, size);
  }

  // Field name: last_written_pressure_kpa
  {
    size_t size = 3;
    auto array_ptr = ros_message->last_written_pressure_kpa;
    cdr.serialize_array(array_ptr, size);
  }

  // Field name: writer_fresh
  {
    cdr << (ros_message->writer_fresh ? true : false);
  }

  // Field name: feedback_sequence
  {
    cdr << ros_message->feedback_sequence;
  }

  return true;
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_soft_actuator_msgs
size_t get_serialized_size_key_soft_actuator_msgs__msg__ControllerStatus(
  const void * untyped_ros_message,
  size_t current_alignment)
{
  const _ControllerStatus__ros_msg_type * ros_message = static_cast<const _ControllerStatus__ros_msg_type *>(untyped_ros_message);
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

  // Field name: state
  current_alignment += padding +
    eprosima::fastcdr::Cdr::alignment(current_alignment, padding) +
    (ros_message->state.size + 1);

  // Field name: enabled
  {
    size_t item_size = sizeof(ros_message->enabled);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  // Field name: requested_mode
  current_alignment += padding +
    eprosima::fastcdr::Cdr::alignment(current_alignment, padding) +
    (ros_message->requested_mode.size + 1);

  // Field name: effective_mode
  current_alignment += padding +
    eprosima::fastcdr::Cdr::alignment(current_alignment, padding) +
    (ros_message->effective_mode.size + 1);

  // Field name: feedback_reason
  current_alignment += padding +
    eprosima::fastcdr::Cdr::alignment(current_alignment, padding) +
    (ros_message->feedback_reason.size + 1);

  // Field name: numeric_valid
  {
    size_t item_size = sizeof(ros_message->numeric_valid);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  // Field name: pressure_limited
  {
    size_t item_size = sizeof(ros_message->pressure_limited);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  // Field name: measured_error_valid
  {
    size_t item_size = sizeof(ros_message->measured_error_valid);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  // Field name: contact_state
  current_alignment += padding +
    eprosima::fastcdr::Cdr::alignment(current_alignment, padding) +
    (ros_message->contact_state.size + 1);

  // Field name: target_mm
  {
    size_t array_size = 3;
    auto array_ptr = ros_message->target_mm;
    (void)array_ptr;
    size_t item_size = sizeof(array_ptr[0]);
    current_alignment += array_size * item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  // Field name: predicted_mm
  {
    size_t array_size = 3;
    auto array_ptr = ros_message->predicted_mm;
    (void)array_ptr;
    size_t item_size = sizeof(array_ptr[0]);
    current_alignment += array_size * item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  // Field name: error_mm
  {
    size_t array_size = 3;
    auto array_ptr = ros_message->error_mm;
    (void)array_ptr;
    size_t item_size = sizeof(array_ptr[0]);
    current_alignment += array_size * item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  // Field name: requested_pressure_kpa
  {
    size_t array_size = 3;
    auto array_ptr = ros_message->requested_pressure_kpa;
    (void)array_ptr;
    size_t item_size = sizeof(array_ptr[0]);
    current_alignment += array_size * item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  // Field name: core_pressure_kpa
  {
    size_t array_size = 3;
    auto array_ptr = ros_message->core_pressure_kpa;
    (void)array_ptr;
    size_t item_size = sizeof(array_ptr[0]);
    current_alignment += array_size * item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  // Field name: output_pressure_kpa
  {
    size_t array_size = 3;
    auto array_ptr = ros_message->output_pressure_kpa;
    (void)array_ptr;
    size_t item_size = sizeof(array_ptr[0]);
    current_alignment += array_size * item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  // Field name: last_written_pressure_kpa
  {
    size_t array_size = 3;
    auto array_ptr = ros_message->last_written_pressure_kpa;
    (void)array_ptr;
    size_t item_size = sizeof(array_ptr[0]);
    current_alignment += array_size * item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  // Field name: writer_fresh
  {
    size_t item_size = sizeof(ros_message->writer_fresh);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  // Field name: feedback_sequence
  {
    size_t item_size = sizeof(ros_message->feedback_sequence);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  return current_alignment - initial_alignment;
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_soft_actuator_msgs
size_t max_serialized_size_key_soft_actuator_msgs__msg__ControllerStatus(
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

  // Field name: state
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

  // Field name: enabled
  {
    size_t array_size = 1;
    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }

  // Field name: requested_mode
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

  // Field name: effective_mode
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

  // Field name: feedback_reason
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

  // Field name: numeric_valid
  {
    size_t array_size = 1;
    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }

  // Field name: pressure_limited
  {
    size_t array_size = 1;
    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }

  // Field name: measured_error_valid
  {
    size_t array_size = 1;
    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }

  // Field name: contact_state
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

  // Field name: target_mm
  {
    size_t array_size = 3;
    last_member_size = array_size * sizeof(uint64_t);
    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }

  // Field name: predicted_mm
  {
    size_t array_size = 3;
    last_member_size = array_size * sizeof(uint64_t);
    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }

  // Field name: error_mm
  {
    size_t array_size = 3;
    last_member_size = array_size * sizeof(uint64_t);
    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }

  // Field name: requested_pressure_kpa
  {
    size_t array_size = 3;
    last_member_size = array_size * sizeof(uint64_t);
    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }

  // Field name: core_pressure_kpa
  {
    size_t array_size = 3;
    last_member_size = array_size * sizeof(uint64_t);
    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }

  // Field name: output_pressure_kpa
  {
    size_t array_size = 3;
    last_member_size = array_size * sizeof(uint64_t);
    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }

  // Field name: last_written_pressure_kpa
  {
    size_t array_size = 3;
    last_member_size = array_size * sizeof(uint64_t);
    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }

  // Field name: writer_fresh
  {
    size_t array_size = 1;
    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }

  // Field name: feedback_sequence
  {
    size_t array_size = 1;
    last_member_size = array_size * sizeof(uint64_t);
    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }

  size_t ret_val = current_alignment - initial_alignment;
  if (is_plain) {
    // All members are plain, and type is not empty.
    // We still need to check that the in-memory alignment
    // is the same as the CDR mandated alignment.
    using DataType = soft_actuator_msgs__msg__ControllerStatus;
    is_plain =
      (
      offsetof(DataType, feedback_sequence) +
      last_member_size
      ) == ret_val;
  }
  return ret_val;
}


static bool _ControllerStatus__cdr_serialize(
  const void * untyped_ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  const soft_actuator_msgs__msg__ControllerStatus * ros_message = static_cast<const soft_actuator_msgs__msg__ControllerStatus *>(untyped_ros_message);
  (void)ros_message;
  return cdr_serialize_soft_actuator_msgs__msg__ControllerStatus(ros_message, cdr);
}

static bool _ControllerStatus__cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  void * untyped_ros_message)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  soft_actuator_msgs__msg__ControllerStatus * ros_message = static_cast<soft_actuator_msgs__msg__ControllerStatus *>(untyped_ros_message);
  (void)ros_message;
  return cdr_deserialize_soft_actuator_msgs__msg__ControllerStatus(cdr, ros_message);
}

static uint32_t _ControllerStatus__get_serialized_size(const void * untyped_ros_message)
{
  return static_cast<uint32_t>(
    get_serialized_size_soft_actuator_msgs__msg__ControllerStatus(
      untyped_ros_message, 0));
}

static size_t _ControllerStatus__max_serialized_size(char & bounds_info)
{
  bool full_bounded;
  bool is_plain;
  size_t ret_val;

  ret_val = max_serialized_size_soft_actuator_msgs__msg__ControllerStatus(
    full_bounded, is_plain, 0);

  bounds_info =
    is_plain ? ROSIDL_TYPESUPPORT_FASTRTPS_PLAIN_TYPE :
    full_bounded ? ROSIDL_TYPESUPPORT_FASTRTPS_BOUNDED_TYPE : ROSIDL_TYPESUPPORT_FASTRTPS_UNBOUNDED_TYPE;
  return ret_val;
}


static message_type_support_callbacks_t __callbacks_ControllerStatus = {
  "soft_actuator_msgs::msg",
  "ControllerStatus",
  _ControllerStatus__cdr_serialize,
  _ControllerStatus__cdr_deserialize,
  _ControllerStatus__get_serialized_size,
  _ControllerStatus__max_serialized_size,
  nullptr
};

static rosidl_message_type_support_t _ControllerStatus__type_support = {
  rosidl_typesupport_fastrtps_c__identifier,
  &__callbacks_ControllerStatus,
  get_message_typesupport_handle_function,
  &soft_actuator_msgs__msg__ControllerStatus__get_type_hash,
  &soft_actuator_msgs__msg__ControllerStatus__get_type_description,
  &soft_actuator_msgs__msg__ControllerStatus__get_type_description_sources,
};

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, soft_actuator_msgs, msg, ControllerStatus)() {
  return &_ControllerStatus__type_support;
}

#if defined(__cplusplus)
}
#endif
