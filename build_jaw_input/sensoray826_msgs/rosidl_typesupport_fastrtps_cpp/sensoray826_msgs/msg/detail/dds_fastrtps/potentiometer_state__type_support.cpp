// generated from rosidl_typesupport_fastrtps_cpp/resource/idl__type_support.cpp.em
// with input from sensoray826_msgs:msg/PotentiometerState.idl
// generated code does not contain a copyright notice
#include "sensoray826_msgs/msg/detail/potentiometer_state__rosidl_typesupport_fastrtps_cpp.hpp"
#include "sensoray826_msgs/msg/detail/potentiometer_state__functions.h"
#include "sensoray826_msgs/msg/detail/potentiometer_state__struct.hpp"

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


namespace sensoray826_msgs
{

namespace msg
{

namespace typesupport_fastrtps_cpp
{


bool
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_sensoray826_msgs
cdr_serialize(
  const sensoray826_msgs::msg::PotentiometerState & ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  // Member: header
  std_msgs::msg::typesupport_fastrtps_cpp::cdr_serialize(
    ros_message.header,
    cdr);

  // Member: session_id
  cdr << ros_message.session_id;

  // Member: sequence
  cdr << ros_message.sequence;

  // Member: board
  cdr << ros_message.board;

  // Member: settling_us
  cdr << ros_message.settling_us;

  // Member: adc_channels
  {
    cdr << ros_message.adc_channels;
  }

  // Member: adc_timestamps_us
  {
    cdr << ros_message.adc_timestamps_us;
  }

  // Member: voltage_v
  {
    cdr << ros_message.voltage_v;
  }

  // Member: valid
  {
    cdr << ros_message.valid;
  }

  // Member: sdk_status
  cdr << ros_message.sdk_status;

  // Member: supply_valid
  cdr << (ros_message.supply_valid ? true : false);

  // Member: supply_voltage_v
  cdr << ros_message.supply_voltage_v;

  // Member: supply_adc_timestamp_us
  cdr << ros_message.supply_adc_timestamp_us;

  return true;
}

bool
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_sensoray826_msgs
cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  sensoray826_msgs::msg::PotentiometerState & ros_message)
{
  // Member: header
  std_msgs::msg::typesupport_fastrtps_cpp::cdr_deserialize(
    cdr, ros_message.header);

  // Member: session_id
  cdr >> ros_message.session_id;

  // Member: sequence
  cdr >> ros_message.sequence;

  // Member: board
  cdr >> ros_message.board;

  // Member: settling_us
  cdr >> ros_message.settling_us;

  // Member: adc_channels
  {
    cdr >> ros_message.adc_channels;
  }

  // Member: adc_timestamps_us
  {
    cdr >> ros_message.adc_timestamps_us;
  }

  // Member: voltage_v
  {
    cdr >> ros_message.voltage_v;
  }

  // Member: valid
  {
    cdr >> ros_message.valid;
  }

  // Member: sdk_status
  cdr >> ros_message.sdk_status;

  // Member: supply_valid
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message.supply_valid = tmp ? true : false;
  }

  // Member: supply_voltage_v
  cdr >> ros_message.supply_voltage_v;

  // Member: supply_adc_timestamp_us
  cdr >> ros_message.supply_adc_timestamp_us;

  return true;
}  // NOLINT(readability/fn_size)


size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_sensoray826_msgs
get_serialized_size(
  const sensoray826_msgs::msg::PotentiometerState & ros_message,
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

  // Member: sequence
  {
    size_t item_size = sizeof(ros_message.sequence);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  // Member: board
  {
    size_t item_size = sizeof(ros_message.board);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  // Member: settling_us
  {
    size_t item_size = sizeof(ros_message.settling_us);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  // Member: adc_channels
  {
    size_t array_size = 2;
    size_t item_size = sizeof(ros_message.adc_channels[0]);
    current_alignment += array_size * item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  // Member: adc_timestamps_us
  {
    size_t array_size = 2;
    size_t item_size = sizeof(ros_message.adc_timestamps_us[0]);
    current_alignment += array_size * item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  // Member: voltage_v
  {
    size_t array_size = 2;
    size_t item_size = sizeof(ros_message.voltage_v[0]);
    current_alignment += array_size * item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  // Member: valid
  {
    size_t array_size = 2;
    size_t item_size = sizeof(ros_message.valid[0]);
    current_alignment += array_size * item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  // Member: sdk_status
  {
    size_t item_size = sizeof(ros_message.sdk_status);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  // Member: supply_valid
  {
    size_t item_size = sizeof(ros_message.supply_valid);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  // Member: supply_voltage_v
  {
    size_t item_size = sizeof(ros_message.supply_voltage_v);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  // Member: supply_adc_timestamp_us
  {
    size_t item_size = sizeof(ros_message.supply_adc_timestamp_us);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  return current_alignment - initial_alignment;
}


size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_sensoray826_msgs
max_serialized_size_PotentiometerState(
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
  // Member: sequence
  {
    size_t array_size = 1;
    last_member_size = array_size * sizeof(uint64_t);
    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }
  // Member: board
  {
    size_t array_size = 1;
    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }
  // Member: settling_us
  {
    size_t array_size = 1;
    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }
  // Member: adc_channels
  {
    size_t array_size = 2;
    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }
  // Member: adc_timestamps_us
  {
    size_t array_size = 2;
    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }
  // Member: voltage_v
  {
    size_t array_size = 2;
    last_member_size = array_size * sizeof(uint64_t);
    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }
  // Member: valid
  {
    size_t array_size = 2;
    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }
  // Member: sdk_status
  {
    size_t array_size = 1;
    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }
  // Member: supply_valid
  {
    size_t array_size = 1;
    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }
  // Member: supply_voltage_v
  {
    size_t array_size = 1;
    last_member_size = array_size * sizeof(uint64_t);
    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }
  // Member: supply_adc_timestamp_us
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
    using DataType = sensoray826_msgs::msg::PotentiometerState;
    is_plain =
      (
      offsetof(DataType, supply_adc_timestamp_us) +
      last_member_size
      ) == ret_val;
  }

  return ret_val;
}

bool
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_sensoray826_msgs
cdr_serialize_key(
  const sensoray826_msgs::msg::PotentiometerState & ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  // Member: header
  std_msgs::msg::typesupport_fastrtps_cpp::cdr_serialize_key(
    ros_message.header,
    cdr);

  // Member: session_id
  cdr << ros_message.session_id;

  // Member: sequence
  cdr << ros_message.sequence;

  // Member: board
  cdr << ros_message.board;

  // Member: settling_us
  cdr << ros_message.settling_us;

  // Member: adc_channels
  {
    cdr << ros_message.adc_channels;
  }

  // Member: adc_timestamps_us
  {
    cdr << ros_message.adc_timestamps_us;
  }

  // Member: voltage_v
  {
    cdr << ros_message.voltage_v;
  }

  // Member: valid
  {
    cdr << ros_message.valid;
  }

  // Member: sdk_status
  cdr << ros_message.sdk_status;

  // Member: supply_valid
  cdr << (ros_message.supply_valid ? true : false);

  // Member: supply_voltage_v
  cdr << ros_message.supply_voltage_v;

  // Member: supply_adc_timestamp_us
  cdr << ros_message.supply_adc_timestamp_us;

  return true;
}

size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_sensoray826_msgs
get_serialized_size_key(
  const sensoray826_msgs::msg::PotentiometerState & ros_message,
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

  // Member: sequence
  {
    size_t item_size = sizeof(ros_message.sequence);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  // Member: board
  {
    size_t item_size = sizeof(ros_message.board);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  // Member: settling_us
  {
    size_t item_size = sizeof(ros_message.settling_us);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  // Member: adc_channels
  {
    size_t array_size = 2;
    size_t item_size = sizeof(ros_message.adc_channels[0]);
    current_alignment += array_size * item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  // Member: adc_timestamps_us
  {
    size_t array_size = 2;
    size_t item_size = sizeof(ros_message.adc_timestamps_us[0]);
    current_alignment += array_size * item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  // Member: voltage_v
  {
    size_t array_size = 2;
    size_t item_size = sizeof(ros_message.voltage_v[0]);
    current_alignment += array_size * item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  // Member: valid
  {
    size_t array_size = 2;
    size_t item_size = sizeof(ros_message.valid[0]);
    current_alignment += array_size * item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  // Member: sdk_status
  {
    size_t item_size = sizeof(ros_message.sdk_status);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  // Member: supply_valid
  {
    size_t item_size = sizeof(ros_message.supply_valid);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  // Member: supply_voltage_v
  {
    size_t item_size = sizeof(ros_message.supply_voltage_v);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  // Member: supply_adc_timestamp_us
  {
    size_t item_size = sizeof(ros_message.supply_adc_timestamp_us);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  return current_alignment - initial_alignment;
}

size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_sensoray826_msgs
max_serialized_size_key_PotentiometerState(
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

  // Member: sequence
  {
    size_t array_size = 1;
    last_member_size = array_size * sizeof(uint64_t);
    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }

  // Member: board
  {
    size_t array_size = 1;
    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }

  // Member: settling_us
  {
    size_t array_size = 1;
    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  // Member: adc_channels
  {
    size_t array_size = 2;
    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }

  // Member: adc_timestamps_us
  {
    size_t array_size = 2;
    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  // Member: voltage_v
  {
    size_t array_size = 2;
    last_member_size = array_size * sizeof(uint64_t);
    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }

  // Member: valid
  {
    size_t array_size = 2;
    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }

  // Member: sdk_status
  {
    size_t array_size = 1;
    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  // Member: supply_valid
  {
    size_t array_size = 1;
    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }

  // Member: supply_voltage_v
  {
    size_t array_size = 1;
    last_member_size = array_size * sizeof(uint64_t);
    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }

  // Member: supply_adc_timestamp_us
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
    using DataType = sensoray826_msgs::msg::PotentiometerState;
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
  auto typed_message =
    static_cast<const sensoray826_msgs::msg::PotentiometerState *>(
    untyped_ros_message);
  return cdr_serialize(*typed_message, cdr);
}

static bool _PotentiometerState__cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  void * untyped_ros_message)
{
  auto typed_message =
    static_cast<sensoray826_msgs::msg::PotentiometerState *>(
    untyped_ros_message);
  return cdr_deserialize(cdr, *typed_message);
}

static uint32_t _PotentiometerState__get_serialized_size(
  const void * untyped_ros_message)
{
  auto typed_message =
    static_cast<const sensoray826_msgs::msg::PotentiometerState *>(
    untyped_ros_message);
  return static_cast<uint32_t>(get_serialized_size(*typed_message, 0));
}

static size_t _PotentiometerState__max_serialized_size(char & bounds_info)
{
  bool full_bounded;
  bool is_plain;
  size_t ret_val;

  ret_val = max_serialized_size_PotentiometerState(full_bounded, is_plain, 0);

  bounds_info =
    is_plain ? ROSIDL_TYPESUPPORT_FASTRTPS_PLAIN_TYPE :
    full_bounded ? ROSIDL_TYPESUPPORT_FASTRTPS_BOUNDED_TYPE : ROSIDL_TYPESUPPORT_FASTRTPS_UNBOUNDED_TYPE;
  return ret_val;
}

static message_type_support_callbacks_t _PotentiometerState__callbacks = {
  "sensoray826_msgs::msg",
  "PotentiometerState",
  _PotentiometerState__cdr_serialize,
  _PotentiometerState__cdr_deserialize,
  _PotentiometerState__get_serialized_size,
  _PotentiometerState__max_serialized_size,
  nullptr
};

static rosidl_message_type_support_t _PotentiometerState__handle = {
  rosidl_typesupport_fastrtps_cpp::typesupport_identifier,
  &_PotentiometerState__callbacks,
  get_message_typesupport_handle_function,
  &sensoray826_msgs__msg__PotentiometerState__get_type_hash,
  &sensoray826_msgs__msg__PotentiometerState__get_type_description,
  &sensoray826_msgs__msg__PotentiometerState__get_type_description_sources,
};

}  // namespace typesupport_fastrtps_cpp

}  // namespace msg

}  // namespace sensoray826_msgs

namespace rosidl_typesupport_fastrtps_cpp
{

template<>
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_EXPORT_sensoray826_msgs
const rosidl_message_type_support_t *
get_message_type_support_handle<sensoray826_msgs::msg::PotentiometerState>()
{
  return &sensoray826_msgs::msg::typesupport_fastrtps_cpp::_PotentiometerState__handle;
}

}  // namespace rosidl_typesupport_fastrtps_cpp

#ifdef __cplusplus
extern "C"
{
#endif

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, sensoray826_msgs, msg, PotentiometerState)() {
  return &sensoray826_msgs::msg::typesupport_fastrtps_cpp::_PotentiometerState__handle;
}

#ifdef __cplusplus
}
#endif
