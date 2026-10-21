// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from soft_actuator_msgs:msg/PressureCommand.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "soft_actuator_msgs/msg/pressure_command.hpp"


#ifndef SOFT_ACTUATOR_MSGS__MSG__DETAIL__PRESSURE_COMMAND__TRAITS_HPP_
#define SOFT_ACTUATOR_MSGS__MSG__DETAIL__PRESSURE_COMMAND__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "soft_actuator_msgs/msg/detail/pressure_command__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

// Include directives for member types
// Member 'header'
#include "std_msgs/msg/detail/header__traits.hpp"
// Member 'valid_for'
#include "builtin_interfaces/msg/detail/duration__traits.hpp"

namespace soft_actuator_msgs
{

namespace msg
{

inline void to_flow_style_yaml(
  const PressureCommand & msg,
  std::ostream & out)
{
  out << "{";
  // member: header
  {
    out << "header: ";
    to_flow_style_yaml(msg.header, out);
    out << ", ";
  }

  // member: session_id
  {
    out << "session_id: ";
    rosidl_generator_traits::value_to_yaml(msg.session_id, out);
    out << ", ";
  }

  // member: sequence
  {
    out << "sequence: ";
    rosidl_generator_traits::value_to_yaml(msg.sequence, out);
    out << ", ";
  }

  // member: pressure_kpa
  {
    if (msg.pressure_kpa.size() == 0) {
      out << "pressure_kpa: []";
    } else {
      out << "pressure_kpa: [";
      size_t pending_items = msg.pressure_kpa.size();
      for (auto item : msg.pressure_kpa) {
        rosidl_generator_traits::value_to_yaml(item, out);
        if (--pending_items > 0) {
          out << ", ";
        }
      }
      out << "]";
    }
    out << ", ";
  }

  // member: force_zero
  {
    out << "force_zero: ";
    rosidl_generator_traits::value_to_yaml(msg.force_zero, out);
    out << ", ";
  }

  // member: valid_for
  {
    out << "valid_for: ";
    to_flow_style_yaml(msg.valid_for, out);
    out << ", ";
  }

  // member: reason
  {
    out << "reason: ";
    rosidl_generator_traits::value_to_yaml(msg.reason, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const PressureCommand & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: header
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "header:\n";
    to_block_style_yaml(msg.header, out, indentation + 2);
  }

  // member: session_id
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "session_id: ";
    rosidl_generator_traits::value_to_yaml(msg.session_id, out);
    out << "\n";
  }

  // member: sequence
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "sequence: ";
    rosidl_generator_traits::value_to_yaml(msg.sequence, out);
    out << "\n";
  }

  // member: pressure_kpa
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.pressure_kpa.size() == 0) {
      out << "pressure_kpa: []\n";
    } else {
      out << "pressure_kpa:\n";
      for (auto item : msg.pressure_kpa) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "- ";
        rosidl_generator_traits::value_to_yaml(item, out);
        out << "\n";
      }
    }
  }

  // member: force_zero
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "force_zero: ";
    rosidl_generator_traits::value_to_yaml(msg.force_zero, out);
    out << "\n";
  }

  // member: valid_for
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "valid_for:\n";
    to_block_style_yaml(msg.valid_for, out, indentation + 2);
  }

  // member: reason
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "reason: ";
    rosidl_generator_traits::value_to_yaml(msg.reason, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const PressureCommand & msg, bool use_flow_style = false)
{
  std::ostringstream out;
  if (use_flow_style) {
    to_flow_style_yaml(msg, out);
  } else {
    to_block_style_yaml(msg, out);
  }
  return out.str();
}

}  // namespace msg

}  // namespace soft_actuator_msgs

namespace rosidl_generator_traits
{

[[deprecated("use soft_actuator_msgs::msg::to_block_style_yaml() instead")]]
inline void to_yaml(
  const soft_actuator_msgs::msg::PressureCommand & msg,
  std::ostream & out, size_t indentation = 0)
{
  soft_actuator_msgs::msg::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use soft_actuator_msgs::msg::to_yaml() instead")]]
inline std::string to_yaml(const soft_actuator_msgs::msg::PressureCommand & msg)
{
  return soft_actuator_msgs::msg::to_yaml(msg);
}

template<>
inline const char * data_type<soft_actuator_msgs::msg::PressureCommand>()
{
  return "soft_actuator_msgs::msg::PressureCommand";
}

template<>
inline const char * name<soft_actuator_msgs::msg::PressureCommand>()
{
  return "soft_actuator_msgs/msg/PressureCommand";
}

template<>
struct has_fixed_size<soft_actuator_msgs::msg::PressureCommand>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<soft_actuator_msgs::msg::PressureCommand>
  : std::integral_constant<bool, false> {};

template<>
struct is_message<soft_actuator_msgs::msg::PressureCommand>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // SOFT_ACTUATOR_MSGS__MSG__DETAIL__PRESSURE_COMMAND__TRAITS_HPP_
