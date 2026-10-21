// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from soft_actuator_msgs:msg/PressureState.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "soft_actuator_msgs/msg/pressure_state.hpp"


#ifndef SOFT_ACTUATOR_MSGS__MSG__DETAIL__PRESSURE_STATE__TRAITS_HPP_
#define SOFT_ACTUATOR_MSGS__MSG__DETAIL__PRESSURE_STATE__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "soft_actuator_msgs/msg/detail/pressure_state__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

// Include directives for member types
// Member 'header'
#include "std_msgs/msg/detail/header__traits.hpp"

namespace soft_actuator_msgs
{

namespace msg
{

inline void to_flow_style_yaml(
  const PressureState & msg,
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

  // member: command_sequence
  {
    out << "command_sequence: ";
    rosidl_generator_traits::value_to_yaml(msg.command_sequence, out);
    out << ", ";
  }

  // member: written_pressure_kpa
  {
    if (msg.written_pressure_kpa.size() == 0) {
      out << "written_pressure_kpa: []";
    } else {
      out << "written_pressure_kpa: [";
      size_t pending_items = msg.written_pressure_kpa.size();
      for (auto item : msg.written_pressure_kpa) {
        rosidl_generator_traits::value_to_yaml(item, out);
        if (--pending_items > 0) {
          out << ", ";
        }
      }
      out << "]";
    }
    out << ", ";
  }

  // member: write_success
  {
    out << "write_success: ";
    rosidl_generator_traits::value_to_yaml(msg.write_success, out);
    out << ", ";
  }

  // member: ready
  {
    out << "ready: ";
    rosidl_generator_traits::value_to_yaml(msg.ready, out);
    out << ", ";
  }

  // member: fault
  {
    out << "fault: ";
    rosidl_generator_traits::value_to_yaml(msg.fault, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const PressureState & msg,
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

  // member: command_sequence
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "command_sequence: ";
    rosidl_generator_traits::value_to_yaml(msg.command_sequence, out);
    out << "\n";
  }

  // member: written_pressure_kpa
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.written_pressure_kpa.size() == 0) {
      out << "written_pressure_kpa: []\n";
    } else {
      out << "written_pressure_kpa:\n";
      for (auto item : msg.written_pressure_kpa) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "- ";
        rosidl_generator_traits::value_to_yaml(item, out);
        out << "\n";
      }
    }
  }

  // member: write_success
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "write_success: ";
    rosidl_generator_traits::value_to_yaml(msg.write_success, out);
    out << "\n";
  }

  // member: ready
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "ready: ";
    rosidl_generator_traits::value_to_yaml(msg.ready, out);
    out << "\n";
  }

  // member: fault
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "fault: ";
    rosidl_generator_traits::value_to_yaml(msg.fault, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const PressureState & msg, bool use_flow_style = false)
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
  const soft_actuator_msgs::msg::PressureState & msg,
  std::ostream & out, size_t indentation = 0)
{
  soft_actuator_msgs::msg::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use soft_actuator_msgs::msg::to_yaml() instead")]]
inline std::string to_yaml(const soft_actuator_msgs::msg::PressureState & msg)
{
  return soft_actuator_msgs::msg::to_yaml(msg);
}

template<>
inline const char * data_type<soft_actuator_msgs::msg::PressureState>()
{
  return "soft_actuator_msgs::msg::PressureState";
}

template<>
inline const char * name<soft_actuator_msgs::msg::PressureState>()
{
  return "soft_actuator_msgs/msg/PressureState";
}

template<>
struct has_fixed_size<soft_actuator_msgs::msg::PressureState>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<soft_actuator_msgs::msg::PressureState>
  : std::integral_constant<bool, false> {};

template<>
struct is_message<soft_actuator_msgs::msg::PressureState>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // SOFT_ACTUATOR_MSGS__MSG__DETAIL__PRESSURE_STATE__TRAITS_HPP_
