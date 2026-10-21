// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from soft_actuator_msgs:msg/PressureCommand.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "soft_actuator_msgs/msg/pressure_command.hpp"


#ifndef SOFT_ACTUATOR_MSGS__MSG__DETAIL__PRESSURE_COMMAND__BUILDER_HPP_
#define SOFT_ACTUATOR_MSGS__MSG__DETAIL__PRESSURE_COMMAND__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "soft_actuator_msgs/msg/detail/pressure_command__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace soft_actuator_msgs
{

namespace msg
{

namespace builder
{

class Init_PressureCommand_reason
{
public:
  explicit Init_PressureCommand_reason(::soft_actuator_msgs::msg::PressureCommand & msg)
  : msg_(msg)
  {}
  ::soft_actuator_msgs::msg::PressureCommand reason(::soft_actuator_msgs::msg::PressureCommand::_reason_type arg)
  {
    msg_.reason = std::move(arg);
    return std::move(msg_);
  }

private:
  ::soft_actuator_msgs::msg::PressureCommand msg_;
};

class Init_PressureCommand_valid_for
{
public:
  explicit Init_PressureCommand_valid_for(::soft_actuator_msgs::msg::PressureCommand & msg)
  : msg_(msg)
  {}
  Init_PressureCommand_reason valid_for(::soft_actuator_msgs::msg::PressureCommand::_valid_for_type arg)
  {
    msg_.valid_for = std::move(arg);
    return Init_PressureCommand_reason(msg_);
  }

private:
  ::soft_actuator_msgs::msg::PressureCommand msg_;
};

class Init_PressureCommand_force_zero
{
public:
  explicit Init_PressureCommand_force_zero(::soft_actuator_msgs::msg::PressureCommand & msg)
  : msg_(msg)
  {}
  Init_PressureCommand_valid_for force_zero(::soft_actuator_msgs::msg::PressureCommand::_force_zero_type arg)
  {
    msg_.force_zero = std::move(arg);
    return Init_PressureCommand_valid_for(msg_);
  }

private:
  ::soft_actuator_msgs::msg::PressureCommand msg_;
};

class Init_PressureCommand_pressure_kpa
{
public:
  explicit Init_PressureCommand_pressure_kpa(::soft_actuator_msgs::msg::PressureCommand & msg)
  : msg_(msg)
  {}
  Init_PressureCommand_force_zero pressure_kpa(::soft_actuator_msgs::msg::PressureCommand::_pressure_kpa_type arg)
  {
    msg_.pressure_kpa = std::move(arg);
    return Init_PressureCommand_force_zero(msg_);
  }

private:
  ::soft_actuator_msgs::msg::PressureCommand msg_;
};

class Init_PressureCommand_sequence
{
public:
  explicit Init_PressureCommand_sequence(::soft_actuator_msgs::msg::PressureCommand & msg)
  : msg_(msg)
  {}
  Init_PressureCommand_pressure_kpa sequence(::soft_actuator_msgs::msg::PressureCommand::_sequence_type arg)
  {
    msg_.sequence = std::move(arg);
    return Init_PressureCommand_pressure_kpa(msg_);
  }

private:
  ::soft_actuator_msgs::msg::PressureCommand msg_;
};

class Init_PressureCommand_session_id
{
public:
  explicit Init_PressureCommand_session_id(::soft_actuator_msgs::msg::PressureCommand & msg)
  : msg_(msg)
  {}
  Init_PressureCommand_sequence session_id(::soft_actuator_msgs::msg::PressureCommand::_session_id_type arg)
  {
    msg_.session_id = std::move(arg);
    return Init_PressureCommand_sequence(msg_);
  }

private:
  ::soft_actuator_msgs::msg::PressureCommand msg_;
};

class Init_PressureCommand_header
{
public:
  Init_PressureCommand_header()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_PressureCommand_session_id header(::soft_actuator_msgs::msg::PressureCommand::_header_type arg)
  {
    msg_.header = std::move(arg);
    return Init_PressureCommand_session_id(msg_);
  }

private:
  ::soft_actuator_msgs::msg::PressureCommand msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::soft_actuator_msgs::msg::PressureCommand>()
{
  return soft_actuator_msgs::msg::builder::Init_PressureCommand_header();
}

}  // namespace soft_actuator_msgs

#endif  // SOFT_ACTUATOR_MSGS__MSG__DETAIL__PRESSURE_COMMAND__BUILDER_HPP_
