// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from soft_actuator_msgs:msg/PressureState.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "soft_actuator_msgs/msg/pressure_state.hpp"


#ifndef SOFT_ACTUATOR_MSGS__MSG__DETAIL__PRESSURE_STATE__BUILDER_HPP_
#define SOFT_ACTUATOR_MSGS__MSG__DETAIL__PRESSURE_STATE__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "soft_actuator_msgs/msg/detail/pressure_state__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace soft_actuator_msgs
{

namespace msg
{

namespace builder
{

class Init_PressureState_fault
{
public:
  explicit Init_PressureState_fault(::soft_actuator_msgs::msg::PressureState & msg)
  : msg_(msg)
  {}
  ::soft_actuator_msgs::msg::PressureState fault(::soft_actuator_msgs::msg::PressureState::_fault_type arg)
  {
    msg_.fault = std::move(arg);
    return std::move(msg_);
  }

private:
  ::soft_actuator_msgs::msg::PressureState msg_;
};

class Init_PressureState_ready
{
public:
  explicit Init_PressureState_ready(::soft_actuator_msgs::msg::PressureState & msg)
  : msg_(msg)
  {}
  Init_PressureState_fault ready(::soft_actuator_msgs::msg::PressureState::_ready_type arg)
  {
    msg_.ready = std::move(arg);
    return Init_PressureState_fault(msg_);
  }

private:
  ::soft_actuator_msgs::msg::PressureState msg_;
};

class Init_PressureState_write_success
{
public:
  explicit Init_PressureState_write_success(::soft_actuator_msgs::msg::PressureState & msg)
  : msg_(msg)
  {}
  Init_PressureState_ready write_success(::soft_actuator_msgs::msg::PressureState::_write_success_type arg)
  {
    msg_.write_success = std::move(arg);
    return Init_PressureState_ready(msg_);
  }

private:
  ::soft_actuator_msgs::msg::PressureState msg_;
};

class Init_PressureState_written_pressure_kpa
{
public:
  explicit Init_PressureState_written_pressure_kpa(::soft_actuator_msgs::msg::PressureState & msg)
  : msg_(msg)
  {}
  Init_PressureState_write_success written_pressure_kpa(::soft_actuator_msgs::msg::PressureState::_written_pressure_kpa_type arg)
  {
    msg_.written_pressure_kpa = std::move(arg);
    return Init_PressureState_write_success(msg_);
  }

private:
  ::soft_actuator_msgs::msg::PressureState msg_;
};

class Init_PressureState_command_sequence
{
public:
  explicit Init_PressureState_command_sequence(::soft_actuator_msgs::msg::PressureState & msg)
  : msg_(msg)
  {}
  Init_PressureState_written_pressure_kpa command_sequence(::soft_actuator_msgs::msg::PressureState::_command_sequence_type arg)
  {
    msg_.command_sequence = std::move(arg);
    return Init_PressureState_written_pressure_kpa(msg_);
  }

private:
  ::soft_actuator_msgs::msg::PressureState msg_;
};

class Init_PressureState_session_id
{
public:
  explicit Init_PressureState_session_id(::soft_actuator_msgs::msg::PressureState & msg)
  : msg_(msg)
  {}
  Init_PressureState_command_sequence session_id(::soft_actuator_msgs::msg::PressureState::_session_id_type arg)
  {
    msg_.session_id = std::move(arg);
    return Init_PressureState_command_sequence(msg_);
  }

private:
  ::soft_actuator_msgs::msg::PressureState msg_;
};

class Init_PressureState_header
{
public:
  Init_PressureState_header()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_PressureState_session_id header(::soft_actuator_msgs::msg::PressureState::_header_type arg)
  {
    msg_.header = std::move(arg);
    return Init_PressureState_session_id(msg_);
  }

private:
  ::soft_actuator_msgs::msg::PressureState msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::soft_actuator_msgs::msg::PressureState>()
{
  return soft_actuator_msgs::msg::builder::Init_PressureState_header();
}

}  // namespace soft_actuator_msgs

#endif  // SOFT_ACTUATOR_MSGS__MSG__DETAIL__PRESSURE_STATE__BUILDER_HPP_
