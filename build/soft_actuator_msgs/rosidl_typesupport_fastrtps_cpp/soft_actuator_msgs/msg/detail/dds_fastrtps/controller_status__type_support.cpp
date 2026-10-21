// generated from rosidl_typesupport_fastrtps_cpp/resource/idl__type_support.cpp.em
// with input from soft_actuator_msgs:msg/ControllerStatus.idl
// generated code does not contain a copyright notice
#include "soft_actuator_msgs/msg/detail/controller_status__rosidl_typesupport_fastrtps_cpp.hpp"
#include "soft_actuator_msgs/msg/detail/controller_status__functions.h"
#include "soft_actuator_msgs/msg/detail/controller_status__struct.hpp"

#include <cstddef>
#include <limits>
#include <stdexcept>
#include <string>
#include "rosidl_typesupport_cpp/message_type_support.hpp"
#include "rosidl_typesupport_fastrtps_cpp/identifier.hpp"
#include "rosidl_typesupport_fastrtps_cpp/message_type_support.h"
#include "rosidl_typesupport_fastrtps_cpp/message_type_support_decl.hpp"
#include "rosidl_typesupport_fastrtps_cpp/serialization_helpers.hpp"
#include "rosidl_typesupport_fastrtps_cpp/wstring_conversion.hpp"
#include "fastcdr/Cdr.h"


// forward declaration of message dependencies and their conversion functions
namespace std_msgs
{
namespace msg
{
namespace typesupport_fastrtps_cpp
{
bool cdr_serialize(
  const std_msgs::msg::Header &,
  eprosima::fastcdr::Cdr &);
bool cdr_deserialize(
  eprosima::fastcdr::Cdr &,
  std_msgs::msg::Header &);
size_t get_serialized_size(
  const std_msgs::msg::Header &,
  size_t current_alignment);
size_t
max_serialized_size_Header(
  bool & full_bounded,
  bool & is_plain,
  size_t current_alignment);
bool cdr_serialize_key(
  const std_msgs::msg::Header &,
  eprosima::fastcdr::Cdr &);
size_t get_serialized_size_key(
  const std_msgs::msg::Header &,
  size_t current_alignment);
size_t
max_serialized_size_key_Header(
  bool & full_bounded,
  bool & is_plain,
  size_t current_alignment);
}  // namespace typesupport_fastrtps_cpp
}  // namespace msg
}  // namespace std_msgs


namespace soft_actuator_msgs
{

namespace msg
{

namespace typesupport_fastrtps_cpp
{


bool
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_soft_actuator_msgs
cdr_serialize(
  const soft_actuator_msgs::msg::ControllerStatus & ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  // Member: header
  std_msgs::msg::typesupport_fastrtps_cpp::cdr_serialize(
    ros_message.header,
    cdr);

  // Member: session_id
  cdr << ros_message.session_id;

  // Member: state
  cdr << ros_message.state;

  // Member: enabled
  cdr << (ros_message.enabled ? true : false);

  // Member: requested_mode
  cdr << ros_message.requested_mode;

  // Member: effective_mode
  cdr << ros_message.effective_mode;

  // Member: feedback_reason
  cdr << ros_message.feedback_reason;

  // Member: numeric_valid
  cdr << (ros_message.numeric_valid ? true : false);

  // Member: pressure_limited
  cdr << (ros_message.pressure_limited ? true : false);

  // Member: measured_error_valid
  cdr << (ros_message.measured_error_valid ? true : false);

  // Member: contact_state
  cdr << ros_message.contact_state;

  // Member: target_mm
  {
    cdr << ros_message.target_mm;
  }

  // Member: predicted_mm
  {
    cdr << ros_message.predicted_mm;
  }

  // Member: error_mm
  {
    cdr << ros_message.error_mm;
  }

  // Member: requested_pressure_kpa
  {
    cdr << ros_message.requested_pressure_kpa;
  }

  // Member: core_pressure_kpa
  {
    cdr << ros_message.core_pressure_kpa;
  }

  // Member: output_pressure_kpa
  {
    cdr << ros_message.output_pressure_kpa;
  }

  // Member: last_written_pressure_kpa
  {
    cdr << ros_message.last_written_pressure_kpa;
  }

  // Member: writer_fresh
  cdr << (ros_message.writer_fresh ? true : false);

  // Member: feedback_sequence
  cdr << ros_message.feedback_sequence;

  return true;
}

bool
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_soft_actuator_msgs
cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  soft_actuator_msgs::msg::ControllerStatus & ros_message)
{
  // Member: header
  std_msgs::msg::typesupport_fastrtps_cpp::cdr_deserialize(
    cdr, ros_message.header);

  // Member: session_id
  cdr >> ros_message.session_id;

  // Member: state
  cdr >> ros_message.state;

  // Member: enabled
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message.enabled = tmp ? true : false;
  }

  // Member: requested_mode
  cdr >> ros_message.requested_mode;

  // Member: effective_mode
  cdr >> ros_message.effective_mode;

  // Member: feedback_reason
  cdr >> ros_message.feedback_reason;

  // Member: numeric_valid
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message.numeric_valid = tmp ? true : false;
  }

  // Member: pressure_limited
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message.pressure_limited = tmp ? true : false;
  }

  // Member: measured_error_valid
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message.measured_error_valid = tmp ? true : false;
  }

  // Member: contact_state
  cdr >> ros_message.contact_state;

  // Member: target_mm
  {
    cdr >> ros_message.target_mm;
  }

  // Member: predicted_mm
  {
    cdr >> ros_message.predicted_mm;
  }

  // Member: error_mm
  {
    cdr >> ros_message.error_mm;
  }

  // Member: requested_pressure_kpa
  {
    cdr >> ros_message.requested_pressure_kpa;
  }

  // Member: core_pressure_kpa
  {
    cdr >> ros_message.core_pressure_kpa;
  }

  // Member: output_pressure_kpa
  {
    cdr >> ros_message.output_pressure_kpa;
  }

  // Member: last_written_pressure_kpa
  {
    cdr >> ros_message.last_written_pressure_kpa;
  }

  // Member: writer_fresh
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message.writer_fresh = tmp ? true : false;
  }

  // Member: feedback_sequence
  cdr >> ros_message.feedback_sequence;

  return true;
}  // NOLINT(readability/fn_size)


size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_soft_actuator_msgs
get_serialized_size(
  const soft_actuator_msgs::msg::ControllerStatus & ros_message,
  size_t current_alignment)
{
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // Member: header
  current_alignment +=
    std_msgs::msg::typesupport_fastrtps_cpp::get_serialized_size(
    ros_message.header, current_alignment);

  // Member: session_id
  current_alignment += padding +
    eprosima::fastcdr::Cdr::alignment(current_alignment, padding) +
    (ros_message.session_id.size() + 1);

  // Member: state
  current_alignment += padding +
    eprosima::fastcdr::Cdr::alignment(current_alignment, padding) +
    (ros_message.state.size() + 1);

  // Member: enabled
  {
    size_t item_size = sizeof(ros_message.enabled);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  // Member: requested_mode
  current_alignment += padding +
    eprosima::fastcdr::Cdr::alignment(current_alignment, padding) +
    (ros_message.requested_mode.size() + 1);

  // Member: effective_mode
  current_alignment += padding +
    eprosima::fastcdr::Cdr::alignment(current_alignment, padding) +
    (ros_message.effective_mode.size() + 1);

  // Member: feedback_reason
  current_alignment += padding +
    eprosima::fastcdr::Cdr::alignment(current_alignment, padding) +
    (ros_message.feedback_reason.size() + 1);

  // Member: numeric_valid
  {
    size_t item_size = sizeof(ros_message.numeric_valid);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  // Member: pressure_limited
  {
    size_t item_size = sizeof(ros_message.pressure_limited);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  // Member: measured_error_valid
  {
    size_t item_size = sizeof(ros_message.measured_error_valid);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  // Member: contact_state
  current_alignment += padding +
    eprosima::fastcdr::Cdr::alignment(current_alignment, padding) +
    (ros_message.contact_state.size() + 1);

  // Member: target_mm
  {
    size_t array_size = 3;
    size_t item_size = sizeof(ros_message.target_mm[0]);
    current_alignment += array_size * item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  // Member: predicted_mm
  {
    size_t array_size = 3;
    size_t item_size = sizeof(ros_message.predicted_mm[0]);
    current_alignment += array_size * item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  // Member: error_mm
  {
    size_t array_size = 3;
    size_t item_size = sizeof(ros_message.error_mm[0]);
    current_alignment += array_size * item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  // Member: requested_pressure_kpa
  {
    size_t array_size = 3;
    size_t item_size = sizeof(ros_message.requested_pressure_kpa[0]);
    current_alignment += array_size * item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  // Member: core_pressure_kpa
  {
    size_t array_size = 3;
    size_t item_size = sizeof(ros_message.core_pressure_kpa[0]);
    current_alignment += array_size * item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  // Member: output_pressure_kpa
  {
    size_t array_size = 3;
    size_t item_size = sizeof(ros_message.output_pressure_kpa[0]);
    current_alignment += array_size * item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  // Member: last_written_pressure_kpa
  {
    size_t array_size = 3;
    size_t item_size = sizeof(ros_message.last_written_pressure_kpa[0]);
    current_alignment += array_size * item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  // Member: writer_fresh
  {
    size_t item_size = sizeof(ros_message.writer_fresh);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  // Member: feedback_sequence
  {
    size_t item_size = sizeof(ros_message.feedback_sequence);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  return current_alignment - initial_alignment;
}


size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_soft_actuator_msgs
max_serialized_size_ControllerStatus(
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

  // Member: header
  {
    size_t array_size = 1;
    last_member_size = 0;
    for (size_t index = 0; index < array_size; ++index) {
      bool inner_full_bounded;
      bool inner_is_plain;
      size_t inner_size =
        std_msgs::msg::typesupport_fastrtps_cpp::max_serialized_size_Header(
        inner_full_bounded, inner_is_plain, current_alignment);
      last_member_size += inner_size;
      current_alignment += inner_size;
      full_bounded &= inner_full_bounded;
      is_plain &= inner_is_plain;
    }
  }
  // Member: session_id
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
  // Member: state
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
  // Member: enabled
  {
    size_t array_size = 1;
    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }
  // Member: requested_mode
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
  // Member: effective_mode
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
  // Member: feedback_reason
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
  // Member: numeric_valid
  {
    size_t array_size = 1;
    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }
  // Member: pressure_limited
  {
    size_t array_size = 1;
    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }
  // Member: measured_error_valid
  {
    size_t array_size = 1;
    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }
  // Member: contact_state
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
  // Member: target_mm
  {
    size_t array_size = 3;
    last_member_size = array_size * sizeof(uint64_t);
    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }
  // Member: predicted_mm
  {
    size_t array_size = 3;
    last_member_size = array_size * sizeof(uint64_t);
    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }
  // Member: error_mm
  {
    size_t array_size = 3;
    last_member_size = array_size * sizeof(uint64_t);
    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }
  // Member: requested_pressure_kpa
  {
    size_t array_size = 3;
    last_member_size = array_size * sizeof(uint64_t);
    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }
  // Member: core_pressure_kpa
  {
    size_t array_size = 3;
    last_member_size = array_size * sizeof(uint64_t);
    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }
  // Member: output_pressure_kpa
  {
    size_t array_size = 3;
    last_member_size = array_size * sizeof(uint64_t);
    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }
  // Member: last_written_pressure_kpa
  {
    size_t array_size = 3;
    last_member_size = array_size * sizeof(uint64_t);
    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }
  // Member: writer_fresh
  {
    size_t array_size = 1;
    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }
  // Member: feedback_sequence
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
    using DataType = soft_actuator_msgs::msg::ControllerStatus;
    is_plain =
      (
      offsetof(DataType, feedback_sequence) +
      last_member_size
      ) == ret_val;
  }

  return ret_val;
}

bool
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_soft_actuator_msgs
cdr_serialize_key(
  const soft_actuator_msgs::msg::ControllerStatus & ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  // Member: header
  std_msgs::msg::typesupport_fastrtps_cpp::cdr_serialize_key(
    ros_message.header,
    cdr);

  // Member: session_id
  cdr << ros_message.session_id;

  // Member: state
  cdr << ros_message.state;

  // Member: enabled
  cdr << (ros_message.enabled ? true : false);

  // Member: requested_mode
  cdr << ros_message.requested_mode;

  // Member: effective_mode
  cdr << ros_message.effective_mode;

  // Member: feedback_reason
  cdr << ros_message.feedback_reason;

  // Member: numeric_valid
  cdr << (ros_message.numeric_valid ? true : false);

  // Member: pressure_limited
  cdr << (ros_message.pressure_limited ? true : false);

  // Member: measured_error_valid
  cdr << (ros_message.measured_error_valid ? true : false);

  // Member: contact_state
  cdr << ros_message.contact_state;

  // Member: target_mm
  {
    cdr << ros_message.target_mm;
  }

  // Member: predicted_mm
  {
    cdr << ros_message.predicted_mm;
  }

  // Member: error_mm
  {
    cdr << ros_message.error_mm;
  }

  // Member: requested_pressure_kpa
  {
    cdr << ros_message.requested_pressure_kpa;
  }

  // Member: core_pressure_kpa
  {
    cdr << ros_message.core_pressure_kpa;
  }

  // Member: output_pressure_kpa
  {
    cdr << ros_message.output_pressure_kpa;
  }

  // Member: last_written_pressure_kpa
  {
    cdr << ros_message.last_written_pressure_kpa;
  }

  // Member: writer_fresh
  cdr << (ros_message.writer_fresh ? true : false);

  // Member: feedback_sequence
  cdr << ros_message.feedback_sequence;

  return true;
}

size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_soft_actuator_msgs
get_serialized_size_key(
  const soft_actuator_msgs::msg::ControllerStatus & ros_message,
  size_t current_alignment)
{
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // Member: header
  current_alignment +=
    std_msgs::msg::typesupport_fastrtps_cpp::get_serialized_size_key(
    ros_message.header, current_alignment);

  // Member: session_id
  current_alignment += padding +
    eprosima::fastcdr::Cdr::alignment(current_alignment, padding) +
    (ros_message.session_id.size() + 1);

  // Member: state
  current_alignment += padding +
    eprosima::fastcdr::Cdr::alignment(current_alignment, padding) +
    (ros_message.state.size() + 1);

  // Member: enabled
  {
    size_t item_size = sizeof(ros_message.enabled);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  // Member: requested_mode
  current_alignment += padding +
    eprosima::fastcdr::Cdr::alignment(current_alignment, padding) +
    (ros_message.requested_mode.size() + 1);

  // Member: effective_mode
  current_alignment += padding +
    eprosima::fastcdr::Cdr::alignment(current_alignment, padding) +
    (ros_message.effective_mode.size() + 1);

  // Member: feedback_reason
  current_alignment += padding +
    eprosima::fastcdr::Cdr::alignment(current_alignment, padding) +
    (ros_message.feedback_reason.size() + 1);

  // Member: numeric_valid
  {
    size_t item_size = sizeof(ros_message.numeric_valid);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  // Member: pressure_limited
  {
    size_t item_size = sizeof(ros_message.pressure_limited);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  // Member: measured_error_valid
  {
    size_t item_size = sizeof(ros_message.measured_error_valid);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  // Member: contact_state
  current_alignment += padding +
    eprosima::fastcdr::Cdr::alignment(current_alignment, padding) +
    (ros_message.contact_state.size() + 1);

  // Member: target_mm
  {
    size_t array_size = 3;
    size_t item_size = sizeof(ros_message.target_mm[0]);
    current_alignment += array_size * item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  // Member: predicted_mm
  {
    size_t array_size = 3;
    size_t item_size = sizeof(ros_message.predicted_mm[0]);
    current_alignment += array_size * item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  // Member: error_mm
  {
    size_t array_size = 3;
    size_t item_size = sizeof(ros_message.error_mm[0]);
    current_alignment += array_size * item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  // Member: requested_pressure_kpa
  {
    size_t array_size = 3;
    size_t item_size = sizeof(ros_message.requested_pressure_kpa[0]);
    current_alignment += array_size * item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  // Member: core_pressure_kpa
  {
    size_t array_size = 3;
    size_t item_size = sizeof(ros_message.core_pressure_kpa[0]);
    current_alignment += array_size * item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  // Member: output_pressure_kpa
  {
    size_t array_size = 3;
    size_t item_size = sizeof(ros_message.output_pressure_kpa[0]);
    current_alignment += array_size * item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  // Member: last_written_pressure_kpa
  {
    size_t array_size = 3;
    size_t item_size = sizeof(ros_message.last_written_pressure_kpa[0]);
    current_alignment += array_size * item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  // Member: writer_fresh
  {
    size_t item_size = sizeof(ros_message.writer_fresh);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  // Member: feedback_sequence
  {
    size_t item_size = sizeof(ros_message.feedback_sequence);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  return current_alignment - initial_alignment;
}

size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_soft_actuator_msgs
max_serialized_size_key_ControllerStatus(
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

  // Member: header
  {
    size_t array_size = 1;
    last_member_size = 0;
    for (size_t index = 0; index < array_size; ++index) {
      bool inner_full_bounded;
      bool inner_is_plain;
      size_t inner_size =
        std_msgs::msg::typesupport_fastrtps_cpp::max_serialized_size_key_Header(
        inner_full_bounded, inner_is_plain, current_alignment);
      last_member_size += inner_size;
      current_alignment += inner_size;
      full_bounded &= inner_full_bounded;
      is_plain &= inner_is_plain;
    }
  }

  // Member: session_id
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

  // Member: state
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

  // Member: enabled
  {
    size_t array_size = 1;
    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }

  // Member: requested_mode
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

  // Member: effective_mode
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

  // Member: feedback_reason
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

  // Member: numeric_valid
  {
    size_t array_size = 1;
    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }

  // Member: pressure_limited
  {
    size_t array_size = 1;
    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }

  // Member: measured_error_valid
  {
    size_t array_size = 1;
    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }

  // Member: contact_state
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

  // Member: target_mm
  {
    size_t array_size = 3;
    last_member_size = array_size * sizeof(uint64_t);
    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }

  // Member: predicted_mm
  {
    size_t array_size = 3;
    last_member_size = array_size * sizeof(uint64_t);
    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }

  // Member: error_mm
  {
    size_t array_size = 3;
    last_member_size = array_size * sizeof(uint64_t);
    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }

  // Member: requested_pressure_kpa
  {
    size_t array_size = 3;
    last_member_size = array_size * sizeof(uint64_t);
    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }

  // Member: core_pressure_kpa
  {
    size_t array_size = 3;
    last_member_size = array_size * sizeof(uint64_t);
    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }

  // Member: output_pressure_kpa
  {
    size_t array_size = 3;
    last_member_size = array_size * sizeof(uint64_t);
    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }

  // Member: last_written_pressure_kpa
  {
    size_t array_size = 3;
    last_member_size = array_size * sizeof(uint64_t);
    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }

  // Member: writer_fresh
  {
    size_t array_size = 1;
    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }

  // Member: feedback_sequence
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
    using DataType = soft_actuator_msgs::msg::ControllerStatus;
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
  auto typed_message =
    static_cast<const soft_actuator_msgs::msg::ControllerStatus *>(
    untyped_ros_message);
  return cdr_serialize(*typed_message, cdr);
}

static bool _ControllerStatus__cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  void * untyped_ros_message)
{
  auto typed_message =
    static_cast<soft_actuator_msgs::msg::ControllerStatus *>(
    untyped_ros_message);
  return cdr_deserialize(cdr, *typed_message);
}

static uint32_t _ControllerStatus__get_serialized_size(
  const void * untyped_ros_message)
{
  auto typed_message =
    static_cast<const soft_actuator_msgs::msg::ControllerStatus *>(
    untyped_ros_message);
  return static_cast<uint32_t>(get_serialized_size(*typed_message, 0));
}

static size_t _ControllerStatus__max_serialized_size(char & bounds_info)
{
  bool full_bounded;
  bool is_plain;
  size_t ret_val;

  ret_val = max_serialized_size_ControllerStatus(full_bounded, is_plain, 0);

  bounds_info =
    is_plain ? ROSIDL_TYPESUPPORT_FASTRTPS_PLAIN_TYPE :
    full_bounded ? ROSIDL_TYPESUPPORT_FASTRTPS_BOUNDED_TYPE : ROSIDL_TYPESUPPORT_FASTRTPS_UNBOUNDED_TYPE;
  return ret_val;
}

static message_type_support_callbacks_t _ControllerStatus__callbacks = {
  "soft_actuator_msgs::msg",
  "ControllerStatus",
  _ControllerStatus__cdr_serialize,
  _ControllerStatus__cdr_deserialize,
  _ControllerStatus__get_serialized_size,
  _ControllerStatus__max_serialized_size,
  nullptr
};

static rosidl_message_type_support_t _ControllerStatus__handle = {
  rosidl_typesupport_fastrtps_cpp::typesupport_identifier,
  &_ControllerStatus__callbacks,
  get_message_typesupport_handle_function,
  &soft_actuator_msgs__msg__ControllerStatus__get_type_hash,
  &soft_actuator_msgs__msg__ControllerStatus__get_type_description,
  &soft_actuator_msgs__msg__ControllerStatus__get_type_description_sources,
};

}  // namespace typesupport_fastrtps_cpp

}  // namespace msg

}  // namespace soft_actuator_msgs

namespace rosidl_typesupport_fastrtps_cpp
{

template<>
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_EXPORT_soft_actuator_msgs
const rosidl_message_type_support_t *
get_message_type_support_handle<soft_actuator_msgs::msg::ControllerStatus>()
{
  return &soft_actuator_msgs::msg::typesupport_fastrtps_cpp::_ControllerStatus__handle;
}

}  // namespace rosidl_typesupport_fastrtps_cpp

#ifdef __cplusplus
extern "C"
{
#endif

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, soft_actuator_msgs, msg, ControllerStatus)() {
  return &soft_actuator_msgs::msg::typesupport_fastrtps_cpp::_ControllerStatus__handle;
}

#ifdef __cplusplus
}
#endif
