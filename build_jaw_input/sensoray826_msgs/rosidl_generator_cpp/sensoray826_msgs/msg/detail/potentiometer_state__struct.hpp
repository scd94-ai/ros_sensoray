// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from sensoray826_msgs:msg/PotentiometerState.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "sensoray826_msgs/msg/potentiometer_state.hpp"


#ifndef SENSORAY826_MSGS__MSG__DETAIL__POTENTIOMETER_STATE__STRUCT_HPP_
#define SENSORAY826_MSGS__MSG__DETAIL__POTENTIOMETER_STATE__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <cstdint>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


// Include directives for member types
// Member 'header'
#include "std_msgs/msg/detail/header__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__sensoray826_msgs__msg__PotentiometerState __attribute__((deprecated))
#else
# define DEPRECATED__sensoray826_msgs__msg__PotentiometerState __declspec(deprecated)
#endif

namespace sensoray826_msgs
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct PotentiometerState_
{
  using Type = PotentiometerState_<ContainerAllocator>;

  explicit PotentiometerState_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : header(_init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->session_id = "";
      this->sequence = 0ull;
      this->board = 0;
      this->settling_us = 0ul;
      std::fill<typename std::array<uint8_t, 2>::iterator, uint8_t>(this->adc_channels.begin(), this->adc_channels.end(), 0);
      std::fill<typename std::array<uint32_t, 2>::iterator, uint32_t>(this->adc_timestamps_us.begin(), this->adc_timestamps_us.end(), 0ul);
      std::fill<typename std::array<double, 2>::iterator, double>(this->voltage_v.begin(), this->voltage_v.end(), 0.0);
      std::fill<typename std::array<bool, 2>::iterator, bool>(this->valid.begin(), this->valid.end(), false);
      this->sdk_status = 0l;
      this->supply_valid = false;
      this->supply_voltage_v = 0.0;
      this->supply_adc_timestamp_us = 0ul;
    }
  }

  explicit PotentiometerState_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : header(_alloc, _init),
    session_id(_alloc),
    adc_channels(_alloc),
    adc_timestamps_us(_alloc),
    voltage_v(_alloc),
    valid(_alloc)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->session_id = "";
      this->sequence = 0ull;
      this->board = 0;
      this->settling_us = 0ul;
      std::fill<typename std::array<uint8_t, 2>::iterator, uint8_t>(this->adc_channels.begin(), this->adc_channels.end(), 0);
      std::fill<typename std::array<uint32_t, 2>::iterator, uint32_t>(this->adc_timestamps_us.begin(), this->adc_timestamps_us.end(), 0ul);
      std::fill<typename std::array<double, 2>::iterator, double>(this->voltage_v.begin(), this->voltage_v.end(), 0.0);
      std::fill<typename std::array<bool, 2>::iterator, bool>(this->valid.begin(), this->valid.end(), false);
      this->sdk_status = 0l;
      this->supply_valid = false;
      this->supply_voltage_v = 0.0;
      this->supply_adc_timestamp_us = 0ul;
    }
  }

  // field types and members
  using _header_type =
    std_msgs::msg::Header_<ContainerAllocator>;
  _header_type header;
  using _session_id_type =
    std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>;
  _session_id_type session_id;
  using _sequence_type =
    uint64_t;
  _sequence_type sequence;
  using _board_type =
    uint8_t;
  _board_type board;
  using _settling_us_type =
    uint32_t;
  _settling_us_type settling_us;
  using _adc_channels_type =
    std::array<uint8_t, 2>;
  _adc_channels_type adc_channels;
  using _adc_timestamps_us_type =
    std::array<uint32_t, 2>;
  _adc_timestamps_us_type adc_timestamps_us;
  using _voltage_v_type =
    std::array<double, 2>;
  _voltage_v_type voltage_v;
  using _valid_type =
    std::array<bool, 2>;
  _valid_type valid;
  using _sdk_status_type =
    int32_t;
  _sdk_status_type sdk_status;
  using _supply_valid_type =
    bool;
  _supply_valid_type supply_valid;
  using _supply_voltage_v_type =
    double;
  _supply_voltage_v_type supply_voltage_v;
  using _supply_adc_timestamp_us_type =
    uint32_t;
  _supply_adc_timestamp_us_type supply_adc_timestamp_us;

  // setters for named parameter idiom
  Type & set__header(
    const std_msgs::msg::Header_<ContainerAllocator> & _arg)
  {
    this->header = _arg;
    return *this;
  }
  Type & set__session_id(
    const std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>> & _arg)
  {
    this->session_id = _arg;
    return *this;
  }
  Type & set__sequence(
    const uint64_t & _arg)
  {
    this->sequence = _arg;
    return *this;
  }
  Type & set__board(
    const uint8_t & _arg)
  {
    this->board = _arg;
    return *this;
  }
  Type & set__settling_us(
    const uint32_t & _arg)
  {
    this->settling_us = _arg;
    return *this;
  }
  Type & set__adc_channels(
    const std::array<uint8_t, 2> & _arg)
  {
    this->adc_channels = _arg;
    return *this;
  }
  Type & set__adc_timestamps_us(
    const std::array<uint32_t, 2> & _arg)
  {
    this->adc_timestamps_us = _arg;
    return *this;
  }
  Type & set__voltage_v(
    const std::array<double, 2> & _arg)
  {
    this->voltage_v = _arg;
    return *this;
  }
  Type & set__valid(
    const std::array<bool, 2> & _arg)
  {
    this->valid = _arg;
    return *this;
  }
  Type & set__sdk_status(
    const int32_t & _arg)
  {
    this->sdk_status = _arg;
    return *this;
  }
  Type & set__supply_valid(
    const bool & _arg)
  {
    this->supply_valid = _arg;
    return *this;
  }
  Type & set__supply_voltage_v(
    const double & _arg)
  {
    this->supply_voltage_v = _arg;
    return *this;
  }
  Type & set__supply_adc_timestamp_us(
    const uint32_t & _arg)
  {
    this->supply_adc_timestamp_us = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    sensoray826_msgs::msg::PotentiometerState_<ContainerAllocator> *;
  using ConstRawPtr =
    const sensoray826_msgs::msg::PotentiometerState_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<sensoray826_msgs::msg::PotentiometerState_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<sensoray826_msgs::msg::PotentiometerState_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      sensoray826_msgs::msg::PotentiometerState_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<sensoray826_msgs::msg::PotentiometerState_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      sensoray826_msgs::msg::PotentiometerState_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<sensoray826_msgs::msg::PotentiometerState_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<sensoray826_msgs::msg::PotentiometerState_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<sensoray826_msgs::msg::PotentiometerState_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__sensoray826_msgs__msg__PotentiometerState
    std::shared_ptr<sensoray826_msgs::msg::PotentiometerState_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__sensoray826_msgs__msg__PotentiometerState
    std::shared_ptr<sensoray826_msgs::msg::PotentiometerState_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const PotentiometerState_ & other) const
  {
    if (this->header != other.header) {
      return false;
    }
    if (this->session_id != other.session_id) {
      return false;
    }
    if (this->sequence != other.sequence) {
      return false;
    }
    if (this->board != other.board) {
      return false;
    }
    if (this->settling_us != other.settling_us) {
      return false;
    }
    if (this->adc_channels != other.adc_channels) {
      return false;
    }
    if (this->adc_timestamps_us != other.adc_timestamps_us) {
      return false;
    }
    if (this->voltage_v != other.voltage_v) {
      return false;
    }
    if (this->valid != other.valid) {
      return false;
    }
    if (this->sdk_status != other.sdk_status) {
      return false;
    }
    if (this->supply_valid != other.supply_valid) {
      return false;
    }
    if (this->supply_voltage_v != other.supply_voltage_v) {
      return false;
    }
    if (this->supply_adc_timestamp_us != other.supply_adc_timestamp_us) {
      return false;
    }
    return true;
  }
  bool operator!=(const PotentiometerState_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct PotentiometerState_

// alias to use template instance with default allocator
using PotentiometerState =
  sensoray826_msgs::msg::PotentiometerState_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace sensoray826_msgs

#endif  // SENSORAY826_MSGS__MSG__DETAIL__POTENTIOMETER_STATE__STRUCT_HPP_
