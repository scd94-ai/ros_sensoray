// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from soft_actuator_msgs:msg/ControllerStatus.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "soft_actuator_msgs/msg/controller_status.hpp"


#ifndef SOFT_ACTUATOR_MSGS__MSG__DETAIL__CONTROLLER_STATUS__BUILDER_HPP_
#define SOFT_ACTUATOR_MSGS__MSG__DETAIL__CONTROLLER_STATUS__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "soft_actuator_msgs/msg/detail/controller_status__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace soft_actuator_msgs
{

namespace msg
{

namespace builder
{

class Init_ControllerStatus_feedback_sequence
{
public:
  explicit Init_ControllerStatus_feedback_sequence(::soft_actuator_msgs::msg::ControllerStatus & msg)
  : msg_(msg)
  {}
  ::soft_actuator_msgs::msg::ControllerStatus feedback_sequence(::soft_actuator_msgs::msg::ControllerStatus::_feedback_sequence_type arg)
  {
    msg_.feedback_sequence = std::move(arg);
    return std::move(msg_);
  }

private:
  ::soft_actuator_msgs::msg::ControllerStatus msg_;
};

class Init_ControllerStatus_writer_fresh
{
public:
  explicit Init_ControllerStatus_writer_fresh(::soft_actuator_msgs::msg::ControllerStatus & msg)
  : msg_(msg)
  {}
  Init_ControllerStatus_feedback_sequence writer_fresh(::soft_actuator_msgs::msg::ControllerStatus::_writer_fresh_type arg)
  {
    msg_.writer_fresh = std::move(arg);
    return Init_ControllerStatus_feedback_sequence(msg_);
  }

private:
  ::soft_actuator_msgs::msg::ControllerStatus msg_;
};

class Init_ControllerStatus_last_written_pressure_kpa
{
public:
  explicit Init_ControllerStatus_last_written_pressure_kpa(::soft_actuator_msgs::msg::ControllerStatus & msg)
  : msg_(msg)
  {}
  Init_ControllerStatus_writer_fresh last_written_pressure_kpa(::soft_actuator_msgs::msg::ControllerStatus::_last_written_pressure_kpa_type arg)
  {
    msg_.last_written_pressure_kpa = std::move(arg);
    return Init_ControllerStatus_writer_fresh(msg_);
  }

private:
  ::soft_actuator_msgs::msg::ControllerStatus msg_;
};

class Init_ControllerStatus_output_pressure_kpa
{
public:
  explicit Init_ControllerStatus_output_pressure_kpa(::soft_actuator_msgs::msg::ControllerStatus & msg)
  : msg_(msg)
  {}
  Init_ControllerStatus_last_written_pressure_kpa output_pressure_kpa(::soft_actuator_msgs::msg::ControllerStatus::_output_pressure_kpa_type arg)
  {
    msg_.output_pressure_kpa = std::move(arg);
    return Init_ControllerStatus_last_written_pressure_kpa(msg_);
  }

private:
  ::soft_actuator_msgs::msg::ControllerStatus msg_;
};

class Init_ControllerStatus_core_pressure_kpa
{
public:
  explicit Init_ControllerStatus_core_pressure_kpa(::soft_actuator_msgs::msg::ControllerStatus & msg)
  : msg_(msg)
  {}
  Init_ControllerStatus_output_pressure_kpa core_pressure_kpa(::soft_actuator_msgs::msg::ControllerStatus::_core_pressure_kpa_type arg)
  {
    msg_.core_pressure_kpa = std::move(arg);
    return Init_ControllerStatus_output_pressure_kpa(msg_);
  }

private:
  ::soft_actuator_msgs::msg::ControllerStatus msg_;
};

class Init_ControllerStatus_requested_pressure_kpa
{
public:
  explicit Init_ControllerStatus_requested_pressure_kpa(::soft_actuator_msgs::msg::ControllerStatus & msg)
  : msg_(msg)
  {}
  Init_ControllerStatus_core_pressure_kpa requested_pressure_kpa(::soft_actuator_msgs::msg::ControllerStatus::_requested_pressure_kpa_type arg)
  {
    msg_.requested_pressure_kpa = std::move(arg);
    return Init_ControllerStatus_core_pressure_kpa(msg_);
  }

private:
  ::soft_actuator_msgs::msg::ControllerStatus msg_;
};

class Init_ControllerStatus_error_mm
{
public:
  explicit Init_ControllerStatus_error_mm(::soft_actuator_msgs::msg::ControllerStatus & msg)
  : msg_(msg)
  {}
  Init_ControllerStatus_requested_pressure_kpa error_mm(::soft_actuator_msgs::msg::ControllerStatus::_error_mm_type arg)
  {
    msg_.error_mm = std::move(arg);
    return Init_ControllerStatus_requested_pressure_kpa(msg_);
  }

private:
  ::soft_actuator_msgs::msg::ControllerStatus msg_;
};

class Init_ControllerStatus_predicted_mm
{
public:
  explicit Init_ControllerStatus_predicted_mm(::soft_actuator_msgs::msg::ControllerStatus & msg)
  : msg_(msg)
  {}
  Init_ControllerStatus_error_mm predicted_mm(::soft_actuator_msgs::msg::ControllerStatus::_predicted_mm_type arg)
  {
    msg_.predicted_mm = std::move(arg);
    return Init_ControllerStatus_error_mm(msg_);
  }

private:
  ::soft_actuator_msgs::msg::ControllerStatus msg_;
};

class Init_ControllerStatus_target_mm
{
public:
  explicit Init_ControllerStatus_target_mm(::soft_actuator_msgs::msg::ControllerStatus & msg)
  : msg_(msg)
  {}
  Init_ControllerStatus_predicted_mm target_mm(::soft_actuator_msgs::msg::ControllerStatus::_target_mm_type arg)
  {
    msg_.target_mm = std::move(arg);
    return Init_ControllerStatus_predicted_mm(msg_);
  }

private:
  ::soft_actuator_msgs::msg::ControllerStatus msg_;
};

class Init_ControllerStatus_contact_state
{
public:
  explicit Init_ControllerStatus_contact_state(::soft_actuator_msgs::msg::ControllerStatus & msg)
  : msg_(msg)
  {}
  Init_ControllerStatus_target_mm contact_state(::soft_actuator_msgs::msg::ControllerStatus::_contact_state_type arg)
  {
    msg_.contact_state = std::move(arg);
    return Init_ControllerStatus_target_mm(msg_);
  }

private:
  ::soft_actuator_msgs::msg::ControllerStatus msg_;
};

class Init_ControllerStatus_measured_error_valid
{
public:
  explicit Init_ControllerStatus_measured_error_valid(::soft_actuator_msgs::msg::ControllerStatus & msg)
  : msg_(msg)
  {}
  Init_ControllerStatus_contact_state measured_error_valid(::soft_actuator_msgs::msg::ControllerStatus::_measured_error_valid_type arg)
  {
    msg_.measured_error_valid = std::move(arg);
    return Init_ControllerStatus_contact_state(msg_);
  }

private:
  ::soft_actuator_msgs::msg::ControllerStatus msg_;
};

class Init_ControllerStatus_pressure_limited
{
public:
  explicit Init_ControllerStatus_pressure_limited(::soft_actuator_msgs::msg::ControllerStatus & msg)
  : msg_(msg)
  {}
  Init_ControllerStatus_measured_error_valid pressure_limited(::soft_actuator_msgs::msg::ControllerStatus::_pressure_limited_type arg)
  {
    msg_.pressure_limited = std::move(arg);
    return Init_ControllerStatus_measured_error_valid(msg_);
  }

private:
  ::soft_actuator_msgs::msg::ControllerStatus msg_;
};

class Init_ControllerStatus_numeric_valid
{
public:
  explicit Init_ControllerStatus_numeric_valid(::soft_actuator_msgs::msg::ControllerStatus & msg)
  : msg_(msg)
  {}
  Init_ControllerStatus_pressure_limited numeric_valid(::soft_actuator_msgs::msg::ControllerStatus::_numeric_valid_type arg)
  {
    msg_.numeric_valid = std::move(arg);
    return Init_ControllerStatus_pressure_limited(msg_);
  }

private:
  ::soft_actuator_msgs::msg::ControllerStatus msg_;
};

class Init_ControllerStatus_feedback_reason
{
public:
  explicit Init_ControllerStatus_feedback_reason(::soft_actuator_msgs::msg::ControllerStatus & msg)
  : msg_(msg)
  {}
  Init_ControllerStatus_numeric_valid feedback_reason(::soft_actuator_msgs::msg::ControllerStatus::_feedback_reason_type arg)
  {
    msg_.feedback_reason = std::move(arg);
    return Init_ControllerStatus_numeric_valid(msg_);
  }

private:
  ::soft_actuator_msgs::msg::ControllerStatus msg_;
};

class Init_ControllerStatus_effective_mode
{
public:
  explicit Init_ControllerStatus_effective_mode(::soft_actuator_msgs::msg::ControllerStatus & msg)
  : msg_(msg)
  {}
  Init_ControllerStatus_feedback_reason effective_mode(::soft_actuator_msgs::msg::ControllerStatus::_effective_mode_type arg)
  {
    msg_.effective_mode = std::move(arg);
    return Init_ControllerStatus_feedback_reason(msg_);
  }

private:
  ::soft_actuator_msgs::msg::ControllerStatus msg_;
};

class Init_ControllerStatus_requested_mode
{
public:
  explicit Init_ControllerStatus_requested_mode(::soft_actuator_msgs::msg::ControllerStatus & msg)
  : msg_(msg)
  {}
  Init_ControllerStatus_effective_mode requested_mode(::soft_actuator_msgs::msg::ControllerStatus::_requested_mode_type arg)
  {
    msg_.requested_mode = std::move(arg);
    return Init_ControllerStatus_effective_mode(msg_);
  }

private:
  ::soft_actuator_msgs::msg::ControllerStatus msg_;
};

class Init_ControllerStatus_enabled
{
public:
  explicit Init_ControllerStatus_enabled(::soft_actuator_msgs::msg::ControllerStatus & msg)
  : msg_(msg)
  {}
  Init_ControllerStatus_requested_mode enabled(::soft_actuator_msgs::msg::ControllerStatus::_enabled_type arg)
  {
    msg_.enabled = std::move(arg);
    return Init_ControllerStatus_requested_mode(msg_);
  }

private:
  ::soft_actuator_msgs::msg::ControllerStatus msg_;
};

class Init_ControllerStatus_state
{
public:
  explicit Init_ControllerStatus_state(::soft_actuator_msgs::msg::ControllerStatus & msg)
  : msg_(msg)
  {}
  Init_ControllerStatus_enabled state(::soft_actuator_msgs::msg::ControllerStatus::_state_type arg)
  {
    msg_.state = std::move(arg);
    return Init_ControllerStatus_enabled(msg_);
  }

private:
  ::soft_actuator_msgs::msg::ControllerStatus msg_;
};

class Init_ControllerStatus_session_id
{
public:
  explicit Init_ControllerStatus_session_id(::soft_actuator_msgs::msg::ControllerStatus & msg)
  : msg_(msg)
  {}
  Init_ControllerStatus_state session_id(::soft_actuator_msgs::msg::ControllerStatus::_session_id_type arg)
  {
    msg_.session_id = std::move(arg);
    return Init_ControllerStatus_state(msg_);
  }

private:
  ::soft_actuator_msgs::msg::ControllerStatus msg_;
};

class Init_ControllerStatus_header
{
public:
  Init_ControllerStatus_header()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_ControllerStatus_session_id header(::soft_actuator_msgs::msg::ControllerStatus::_header_type arg)
  {
    msg_.header = std::move(arg);
    return Init_ControllerStatus_session_id(msg_);
  }

private:
  ::soft_actuator_msgs::msg::ControllerStatus msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::soft_actuator_msgs::msg::ControllerStatus>()
{
  return soft_actuator_msgs::msg::builder::Init_ControllerStatus_header();
}

}  // namespace soft_actuator_msgs

#endif  // SOFT_ACTUATOR_MSGS__MSG__DETAIL__CONTROLLER_STATUS__BUILDER_HPP_
