// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from sensoray826_msgs:msg/PotentiometerState.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "sensoray826_msgs/msg/potentiometer_state.hpp"


#ifndef SENSORAY826_MSGS__MSG__DETAIL__POTENTIOMETER_STATE__BUILDER_HPP_
#define SENSORAY826_MSGS__MSG__DETAIL__POTENTIOMETER_STATE__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "sensoray826_msgs/msg/detail/potentiometer_state__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace sensoray826_msgs
{

namespace msg
{

namespace builder
{

class Init_PotentiometerState_supply_adc_timestamp_us
{
public:
  explicit Init_PotentiometerState_supply_adc_timestamp_us(::sensoray826_msgs::msg::PotentiometerState & msg)
  : msg_(msg)
  {}
  ::sensoray826_msgs::msg::PotentiometerState supply_adc_timestamp_us(::sensoray826_msgs::msg::PotentiometerState::_supply_adc_timestamp_us_type arg)
  {
    msg_.supply_adc_timestamp_us = std::move(arg);
    return std::move(msg_);
  }

private:
  ::sensoray826_msgs::msg::PotentiometerState msg_;
};

class Init_PotentiometerState_supply_voltage_v
{
public:
  explicit Init_PotentiometerState_supply_voltage_v(::sensoray826_msgs::msg::PotentiometerState & msg)
  : msg_(msg)
  {}
  Init_PotentiometerState_supply_adc_timestamp_us supply_voltage_v(::sensoray826_msgs::msg::PotentiometerState::_supply_voltage_v_type arg)
  {
    msg_.supply_voltage_v = std::move(arg);
    return Init_PotentiometerState_supply_adc_timestamp_us(msg_);
  }

private:
  ::sensoray826_msgs::msg::PotentiometerState msg_;
};

class Init_PotentiometerState_supply_valid
{
public:
  explicit Init_PotentiometerState_supply_valid(::sensoray826_msgs::msg::PotentiometerState & msg)
  : msg_(msg)
  {}
  Init_PotentiometerState_supply_voltage_v supply_valid(::sensoray826_msgs::msg::PotentiometerState::_supply_valid_type arg)
  {
    msg_.supply_valid = std::move(arg);
    return Init_PotentiometerState_supply_voltage_v(msg_);
  }

private:
  ::sensoray826_msgs::msg::PotentiometerState msg_;
};

class Init_PotentiometerState_sdk_status
{
public:
  explicit Init_PotentiometerState_sdk_status(::sensoray826_msgs::msg::PotentiometerState & msg)
  : msg_(msg)
  {}
  Init_PotentiometerState_supply_valid sdk_status(::sensoray826_msgs::msg::PotentiometerState::_sdk_status_type arg)
  {
    msg_.sdk_status = std::move(arg);
    return Init_PotentiometerState_supply_valid(msg_);
  }

private:
  ::sensoray826_msgs::msg::PotentiometerState msg_;
};

class Init_PotentiometerState_valid
{
public:
  explicit Init_PotentiometerState_valid(::sensoray826_msgs::msg::PotentiometerState & msg)
  : msg_(msg)
  {}
  Init_PotentiometerState_sdk_status valid(::sensoray826_msgs::msg::PotentiometerState::_valid_type arg)
  {
    msg_.valid = std::move(arg);
    return Init_PotentiometerState_sdk_status(msg_);
  }

private:
  ::sensoray826_msgs::msg::PotentiometerState msg_;
};

class Init_PotentiometerState_voltage_v
{
public:
  explicit Init_PotentiometerState_voltage_v(::sensoray826_msgs::msg::PotentiometerState & msg)
  : msg_(msg)
  {}
  Init_PotentiometerState_valid voltage_v(::sensoray826_msgs::msg::PotentiometerState::_voltage_v_type arg)
  {
    msg_.voltage_v = std::move(arg);
    return Init_PotentiometerState_valid(msg_);
  }

private:
  ::sensoray826_msgs::msg::PotentiometerState msg_;
};

class Init_PotentiometerState_adc_timestamps_us
{
public:
  explicit Init_PotentiometerState_adc_timestamps_us(::sensoray826_msgs::msg::PotentiometerState & msg)
  : msg_(msg)
  {}
  Init_PotentiometerState_voltage_v adc_timestamps_us(::sensoray826_msgs::msg::PotentiometerState::_adc_timestamps_us_type arg)
  {
    msg_.adc_timestamps_us = std::move(arg);
    return Init_PotentiometerState_voltage_v(msg_);
  }

private:
  ::sensoray826_msgs::msg::PotentiometerState msg_;
};

class Init_PotentiometerState_adc_channels
{
public:
  explicit Init_PotentiometerState_adc_channels(::sensoray826_msgs::msg::PotentiometerState & msg)
  : msg_(msg)
  {}
  Init_PotentiometerState_adc_timestamps_us adc_channels(::sensoray826_msgs::msg::PotentiometerState::_adc_channels_type arg)
  {
    msg_.adc_channels = std::move(arg);
    return Init_PotentiometerState_adc_timestamps_us(msg_);
  }

private:
  ::sensoray826_msgs::msg::PotentiometerState msg_;
};

class Init_PotentiometerState_settling_us
{
public:
  explicit Init_PotentiometerState_settling_us(::sensoray826_msgs::msg::PotentiometerState & msg)
  : msg_(msg)
  {}
  Init_PotentiometerState_adc_channels settling_us(::sensoray826_msgs::msg::PotentiometerState::_settling_us_type arg)
  {
    msg_.settling_us = std::move(arg);
    return Init_PotentiometerState_adc_channels(msg_);
  }

private:
  ::sensoray826_msgs::msg::PotentiometerState msg_;
};

class Init_PotentiometerState_board
{
public:
  explicit Init_PotentiometerState_board(::sensoray826_msgs::msg::PotentiometerState & msg)
  : msg_(msg)
  {}
  Init_PotentiometerState_settling_us board(::sensoray826_msgs::msg::PotentiometerState::_board_type arg)
  {
    msg_.board = std::move(arg);
    return Init_PotentiometerState_settling_us(msg_);
  }

private:
  ::sensoray826_msgs::msg::PotentiometerState msg_;
};

class Init_PotentiometerState_sequence
{
public:
  explicit Init_PotentiometerState_sequence(::sensoray826_msgs::msg::PotentiometerState & msg)
  : msg_(msg)
  {}
  Init_PotentiometerState_board sequence(::sensoray826_msgs::msg::PotentiometerState::_sequence_type arg)
  {
    msg_.sequence = std::move(arg);
    return Init_PotentiometerState_board(msg_);
  }

private:
  ::sensoray826_msgs::msg::PotentiometerState msg_;
};

class Init_PotentiometerState_session_id
{
public:
  explicit Init_PotentiometerState_session_id(::sensoray826_msgs::msg::PotentiometerState & msg)
  : msg_(msg)
  {}
  Init_PotentiometerState_sequence session_id(::sensoray826_msgs::msg::PotentiometerState::_session_id_type arg)
  {
    msg_.session_id = std::move(arg);
    return Init_PotentiometerState_sequence(msg_);
  }

private:
  ::sensoray826_msgs::msg::PotentiometerState msg_;
};

class Init_PotentiometerState_header
{
public:
  Init_PotentiometerState_header()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_PotentiometerState_session_id header(::sensoray826_msgs::msg::PotentiometerState::_header_type arg)
  {
    msg_.header = std::move(arg);
    return Init_PotentiometerState_session_id(msg_);
  }

private:
  ::sensoray826_msgs::msg::PotentiometerState msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::sensoray826_msgs::msg::PotentiometerState>()
{
  return sensoray826_msgs::msg::builder::Init_PotentiometerState_header();
}

}  // namespace sensoray826_msgs

#endif  // SENSORAY826_MSGS__MSG__DETAIL__POTENTIOMETER_STATE__BUILDER_HPP_
