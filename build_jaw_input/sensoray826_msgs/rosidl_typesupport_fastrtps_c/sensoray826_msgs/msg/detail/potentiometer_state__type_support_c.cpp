// generated from rosidl_typesupport_fastrtps_c/resource/idl__type_support_c.cpp.em
// with input from sensoray826_msgs:msg/PotentiometerState.idl
// generated code does not contain a copyright notice
#include "sensoray826_msgs/msg/detail/potentiometer_state__rosidl_typesupport_fastrtps_c.h"


#include <cassert>
#include <cstddef>
#include <limits>
#include <string>
#include "rosidl_typesupport_fastrtps_c/identifier.h"
#include "rosidl_typesupport_fastrtps_c/serialization_helpers.hpp"
#include "rosidl_typesupport_fastrtps_c/wstring_conversion.hpp"
#include "rosidl_typesupport_fastrtps_cpp/message_type_support.h"
#include "sensoray826_msgs/msg/rosidl_typesupport_fastrtps_c__visibility_control.h"
#include "sensoray826_msgs/msg/detail/potentiometer_state__struct.h"
#include "sensoray826_msgs/msg/detail/potentiometer_state__functions.h"
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

#include "rosidl_runtime_c/string.h"  // session_id
#include "rosidl_runtime_c/string_functions.h"  // session_id
#include "std_msgs/msg/detail/header__functions.h"  // header

// forward declare type support functions

ROSIDL_TYPESUPPORT_FASTRTPS_C_IMPORT_sensoray826_msgs
bool cdr_serialize_std_msgs__msg__Header(
  const std_msgs__msg__Header * ros_message,
  eprosima::fastcdr::Cdr & cdr);

ROSIDL_TYPESUPPORT_FASTRTPS_C_IMPORT_sensoray826_msgs
bool cdr_deserialize_std_msgs__msg__Header(
  eprosima::fastcdr::Cdr & cdr,
  std_msgs__msg__Header * ros_message);

ROSIDL_TYPESUPPORT_FASTRTPS_C_IMPORT_sensoray826_msgs
size_t get_serialized_size_std_msgs__msg__Header(
  const void * untyped_ros_message,
  size_t current_alignment);

ROSIDL_TYPESUPPORT_FASTRTPS_C_IMPORT_sensoray826_msgs
size_t max_serialized_size_std_msgs__msg__Header(
  bool & full_bounded,
  bool & is_plain,
  size_t current_alignment);

ROSIDL_TYPESUPPORT_FASTRTPS_C_IMPORT_sensoray826_msgs
bool cdr_serialize_key_std_msgs__msg__Header(
  const std_msgs__msg__Header * ros_message,
  eprosima::fastcdr::Cdr & cdr);

ROSIDL_TYPESUPPORT_FASTRTPS_C_IMPORT_sensoray826_msgs
size_t get_serialized_size_key_std_msgs__msg__Header(
  const void * untyped_ros_message,
  size_t current_alignment);

ROSIDL_TYPESUPPORT_FASTRTPS_C_IMPORT_sensoray826_msgs
size_t max_serialized_size_key_std_msgs__msg__Header(
  bool & full_bounded,
  bool & is_plain,
  size_t current_alignment);

ROSIDL_TYPESUPPORT_FASTRTPS_C_IMPORT_sensoray826_msgs
const rosidl_message_type_support_t *
  ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, std_msgs, msg, Header)();


using _PotentiometerState__ros_msg_type = sensoray826_msgs__msg__PotentiometerState;


ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_sensoray826_msgs
bool cdr_serialize_sensoray826_msgs__msg__PotentiometerState(
  const sensoray826_msgs__msg__PotentiometerState * ros_message,
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

  // Field name: sequence
  {
    cdr << ros_message->sequence;
  }

  // Field name: board
  {
    cdr << ros_message->board;
  }

  // Field name: settling_us
  {
    cdr << ros_message->settling_us;
  }

  // Field name: adc_channels
  {
    size_t size = 2;
    auto array_ptr = ros_message->adc_channels;
    cdr.serialize_array(array_ptr, size);
  }

  // Field name: adc_timestamps_us
  {
    size_t size = 2;
    auto array_ptr = ros_message->adc_timestamps_us;
    cdr.serialize_array(array_ptr, size);
  }

  // Field name: voltage_v
  {
    size_t size = 2;
    auto array_ptr = ros_message->voltage_v;
    cdr.serialize_array(array_ptr, size);
  }

  // Field name: valid
  {
    size_t size = 2;
    auto array_ptr = ros_message->valid;
    cdr.serialize_array(array_ptr, size);
  }

  // Field name: sdk_status
  {
    cdr << ros_message->sdk_status;
  }

  // Field name: supply_valid
  {
    cdr << (ros_message->supply_valid ? true : false);
  }

  // Field name: supply_voltage_v
  {
    cdr << ros_message->supply_voltage_v;
  }

  // Field name: supply_adc_timestamp_us
  {
    cdr << ros_message->supply_adc_timestamp_us;
  }

  return true;
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_sensoray826_msgs
bool cdr_deserialize_sensoray826_msgs__msg__PotentiometerState(
  eprosima::fastcdr::Cdr & cdr,
  sensoray826_msgs__msg__PotentiometerState * ros_message)
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

  // Field name: sequence
  {
    cdr >> ros_message->sequence;
  }

  // Field name: board
  {
    cdr >> ros_message->board;
  }

  // Field name: settling_us
  {
    cdr >> ros_message->settling_us;
  }

  // Field name: adc_channels
  {
    size_t size = 2;
    auto array_ptr = ros_message->adc_channels;
    cdr.deserialize_array(array_ptr, size);
  }

  // Field name: adc_timestamps_us
  {
    size_t size = 2;
    auto array_ptr = ros_message->adc_timestamps_us;
    cdr.deserialize_array(array_ptr, size);
  }

  // Field name: voltage_v
  {
    size_t size = 2;
    auto array_ptr = ros_message->voltage_v;
    cdr.deserialize_array(array_ptr, size);
  }

  // Field name: valid
  {
    size_t size = 2;
    auto array_ptr = ros_message->valid;
    for (size_t i = 0; i < size; ++i) {
      uint8_t tmp;
      cdr >> tmp;
      array_ptr[i] = tmp ? true : false;
    }
  }

  // Field name: sdk_status
  {
    cdr >> ros_message->sdk_status;
  }

  // Field name: supply_valid
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message->supply_valid = tmp ? true : false;
  }

  // Field name: supply_voltage_v
  {
    cdr >> ros_message->supply_voltage_v;
  }

  // Field name: supply_adc_timestamp_us
  {
    cdr >> ros_message->supply_adc_timestamp_us;
  }

  return true;
}  // NOLINT(readability/fn_size)


ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_sensoray826_msgs
size_t get_serialized_size_sensoray826_msgs__msg__PotentiometerState(
  const void * untyped_ros_message,
  size_t current_alignment)
{
  const _PotentiometerState__ros_msg_type * ros_message = static_cast<const _PotentiometerState__ros_msg_type *>(untyped_ros_message);
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

  // Field name: sequence
  {
    size_t item_size = sizeof(ros_message->sequence);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  // Field name: board
  {
    size_t item_size = sizeof(ros_message->board);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  // Field name: settling_us
  {
    size_t item_size = sizeof(ros_message->settling_us);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  // Field name: adc_channels
  {
    size_t array_size = 2;
    auto array_ptr = ros_message->adc_channels;
    (void)array_ptr;
    size_t item_size = sizeof(array_ptr[0]);
    current_alignment += array_size * item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  // Field name: adc_timestamps_us
  {
    size_t array_size = 2;
    auto array_ptr = ros_message->adc_timestamps_us;
    (void)array_ptr;
    size_t item_size = sizeof(array_ptr[0]);
    current_alignment += array_size * item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  // Field name: voltage_v
  {
    size_t array_size = 2;
    auto array_ptr = ros_message->voltage_v;
    (void)array_ptr;
    size_t item_size = sizeof(array_ptr[0]);
    current_alignment += array_size * item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  // Field name: valid
  {
    size_t array_size = 2;
    auto array_ptr = ros_message->valid;
    (void)array_ptr;
    size_t item_size = sizeof(array_ptr[0]);
    current_alignment += array_size * item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  // Field name: sdk_status
  {
    size_t item_size = sizeof(ros_message->sdk_status);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  // Field name: supply_valid
  {
    size_t item_size = sizeof(ros_message->supply_valid);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  // Field name: supply_voltage_v
  {
    size_t item_size = sizeof(ros_message->supply_voltage_v);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  // Field name: supply_adc_timestamp_us
  {
    size_t item_size = sizeof(ros_message->supply_adc_timestamp_us);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  return current_alignment - initial_alignment;
}


ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_sensoray826_msgs
size_t max_serialized_size_sensoray826_msgs__msg__PotentiometerState(
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

  // Field name: sequence
  {
    size_t array_size = 1;
    last_member_size = array_size * sizeof(uint64_t);
    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }

  // Field name: board
  {
    size_t array_size = 1;
    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }

  // Field name: settling_us
  {
    size_t array_size = 1;
    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  // Field name: adc_channels
  {
    size_t array_size = 2;
    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }

  // Field name: adc_timestamps_us
  {
    size_t array_size = 2;
    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  // Field name: voltage_v
  {
    size_t array_size = 2;
    last_member_size = array_size * sizeof(uint64_t);
    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }

  // Field name: valid
  {
    size_t array_size = 2;
    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }

  // Field name: sdk_status
  {
    size_t array_size = 1;
    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  // Field name: supply_valid
  {
    size_t array_size = 1;
    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }

  // Field name: supply_voltage_v
  {
    size_t array_size = 1;
    last_member_size = array_size * sizeof(uint64_t);
    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }

  // Field name: supply_adc_timestamp_us
  {
    size_t array_size = 1;
    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }


  size_t ret_val = current_alignment - initial_alignment;
  if (is_plain) {
    // All members are plain, and type is not empty.
    // We still need to check that the in-memory alignment
    // is the same as the CDR mandated alignment.
    using DataType = sensoray826_msgs__msg__PotentiometerState;
    is_plain =
      (
      offsetof(DataType, supply_adc_timestamp_us) +
      last_member_size
      ) == ret_val;
  }
  return ret_val;
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_sensoray826_msgs
bool cdr_serialize_key_sensoray826_msgs__msg__PotentiometerState(
  const sensoray826_msgs__msg__PotentiometerState * ros_message,
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

  // Field name: sequence
  {
    cdr << ros_message->sequence;
  }

  // Field name: board
  {
    cdr << ros_message->board;
  }

  // Field name: settling_us
  {
    cdr << ros_message->settling_us;
  }

  // Field name: adc_channels
  {
    size_t size = 2;
    auto array_ptr = ros_message->adc_channels;
    cdr.serialize_array(array_ptr, size);
  }

  // Field name: adc_timestamps_us
  {
    size_t size = 2;
    auto array_ptr = ros_message->adc_timestamps_us;
    cdr.serialize_array(array_ptr, size);
  }

  // Field name: voltage_v
  {
    size_t size = 2;
    auto array_ptr = ros_message->voltage_v;
    cdr.serialize_array(array_ptr, size);
  }

  // Field name: valid
  {
    size_t size = 2;
    auto array_ptr = ros_message->valid;
    cdr.serialize_array(array_ptr, size);
  }

  // Field name: sdk_status
  {
    cdr << ros_message->sdk_status;
  }

  // Field name: supply_valid
  {
    cdr << (ros_message->supply_valid ? true : false);
  }

  // Field name: supply_voltage_v
  {
    cdr << ros_message->supply_voltage_v;
  }

  // Field name: supply_adc_timestamp_us
  {
    cdr << ros_message->supply_adc_timestamp_us;
  }

  return true;
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_sensoray826_msgs
size_t get_serialized_size_key_sensoray826_msgs__msg__PotentiometerState(
  const void * untyped_ros_message,
  size_t current_alignment)
{
  const _PotentiometerState__ros_msg_type * ros_message = static_cast<const _PotentiometerState__ros_msg_type *>(untyped_ros_message);
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

  // Field name: sequence
  {
    size_t item_size = sizeof(ros_message->sequence);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  // Field name: board
  {
    size_t item_size = sizeof(ros_message->board);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  // Field name: settling_us
  {
    size_t item_size = sizeof(ros_message->settling_us);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  // Field name: adc_channels
  {
    size_t array_size = 2;
    auto array_ptr = ros_message->adc_channels;
    (void)array_ptr;
    size_t item_size = sizeof(array_ptr[0]);
    current_alignment += array_size * item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  // Field name: adc_timestamps_us
  {
    size_t array_size = 2;
    auto array_ptr = ros_message->adc_timestamps_us;
    (void)array_ptr;
    size_t item_size = sizeof(array_ptr[0]);
    current_alignment += array_size * item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  // Field name: voltage_v
  {
    size_t array_size = 2;
    auto array_ptr = ros_message->voltage_v;
    (void)array_ptr;
    size_t item_size = sizeof(array_ptr[0]);
    current_alignment += array_size * item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  // Field name: valid
  {
    size_t array_size = 2;
    auto array_ptr = ros_message->valid;
    (void)array_ptr;
    size_t item_size = sizeof(array_ptr[0]);
    current_alignment += array_size * item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  // Field name: sdk_status
  {
    size_t item_size = sizeof(ros_message->sdk_status);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  // Field name: supply_valid
  {
    size_t item_size = sizeof(ros_message->supply_valid);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  // Field name: supply_voltage_v
  {
    size_t item_size = sizeof(ros_message->supply_voltage_v);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  // Field name: supply_adc_timestamp_us
  {
    size_t item_size = sizeof(ros_message->supply_adc_timestamp_us);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  return current_alignment - initial_alignment;
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_sensoray826_msgs
size_t max_serialized_size_key_sensoray826_msgs__msg__PotentiometerState(
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

  // Field name: sequence
  {
    size_t array_size = 1;
    last_member_size = array_size * sizeof(uint64_t);
    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }

  // Field name: board
  {
    size_t array_size = 1;
    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }

  // Field name: settling_us
  {
    size_t array_size = 1;
    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  // Field name: adc_channels
  {
    size_t array_size = 2;
    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }

  // Field name: adc_timestamps_us
  {
    size_t array_size = 2;
    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  // Field name: voltage_v
  {
    size_t array_size = 2;
    last_member_size = array_size * sizeof(uint64_t);
    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }

  // Field name: valid
  {
    size_t array_size = 2;
    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }

  // Field name: sdk_status
  {
    size_t array_size = 1;
    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  // Field name: supply_valid
  {
    size_t array_size = 1;
    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }

  // Field name: supply_voltage_v
  {
    size_t array_size = 1;
    last_member_size = array_size * sizeof(uint64_t);
    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }

  // Field name: supply_adc_timestamp_us
  {
    size_t array_size = 1;
    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  size_t ret_val = current_alignment - initial_alignment;
  if (is_plain) {
    // All members are plain, and type is not empty.
    // We still need to check that the in-memory alignment
    // is the same as the CDR mandated alignment.
    using DataType = sensoray826_msgs__msg__PotentiometerState;
    is_plain =
      (
      offsetof(DataType, supply_adc_timestamp_us) +
      last_member_size
      ) == ret_val;
  }
  return ret_val;
}


static bool _PotentiometerState__cdr_serialize(
  const void * untyped_ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  const sensoray826_msgs__msg__PotentiometerState * ros_message = static_cast<const sensoray826_msgs__msg__PotentiometerState *>(untyped_ros_message);
  (void)ros_message;
  return cdr_serialize_sensoray826_msgs__msg__PotentiometerState(ros_message, cdr);
}

static bool _PotentiometerState__cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  void * untyped_ros_message)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  sensoray826_msgs__msg__PotentiometerState * ros_message = static_cast<sensoray826_msgs__msg__PotentiometerState *>(untyped_ros_message);
  (void)ros_message;
  return cdr_deserialize_sensoray826_msgs__msg__PotentiometerState(cdr, ros_message);
}

static uint32_t _PotentiometerState__get_serialized_size(const void * untyped_ros_message)
{
  return static_cast<uint32_t>(
    get_serialized_size_sensoray826_msgs__msg__PotentiometerState(
      untyped_ros_message, 0));
}

static size_t _PotentiometerState__max_serialized_size(char & bounds_info)
{
  bool full_bounded;
  bool is_plain;
  size_t ret_val;

  ret_val = max_serialized_size_sensoray826_msgs__msg__PotentiometerState(
    full_bounded, is_plain, 0);

  bounds_info =
    is_plain ? ROSIDL_TYPESUPPORT_FASTRTPS_PLAIN_TYPE :
    full_bounded ? ROSIDL_TYPESUPPORT_FASTRTPS_BOUNDED_TYPE : ROSIDL_TYPESUPPORT_FASTRTPS_UNBOUNDED_TYPE;
  return ret_val;
}


static message_type_support_callbacks_t __callbacks_PotentiometerState = {
  "sensoray826_msgs::msg",
  "PotentiometerState",
  _PotentiometerState__cdr_serialize,
  _PotentiometerState__cdr_deserialize,
  _PotentiometerState__get_serialized_size,
  _PotentiometerState__max_serialized_size,
  nullptr
};

static rosidl_message_type_support_t _PotentiometerState__type_support = {
  rosidl_typesupport_fastrtps_c__identifier,
  &__callbacks_PotentiometerState,
  get_message_typesupport_handle_function,
  &sensoray826_msgs__msg__PotentiometerState__get_type_hash,
  &sensoray826_msgs__msg__PotentiometerState__get_type_description,
  &sensoray826_msgs__msg__PotentiometerState__get_type_description_sources,
};

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, sensoray826_msgs, msg, PotentiometerState)() {
  return &_PotentiometerState__type_support;
}

#if defined(__cplusplus)
}
#endif
