// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from soft_actuator_msgs:msg/ControllerStatus.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "soft_actuator_msgs/msg/controller_status.hpp"


#ifndef SOFT_ACTUATOR_MSGS__MSG__DETAIL__CONTROLLER_STATUS__TRAITS_HPP_
#define SOFT_ACTUATOR_MSGS__MSG__DETAIL__CONTROLLER_STATUS__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "soft_actuator_msgs/msg/detail/controller_status__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

// Include directives for member types
// Member 'header'
#include "std_msgs/msg/detail/header__traits.hpp"

namespace soft_actuator_msgs
{

namespace msg
{

inline void to_flow_style_yaml(
  const ControllerStatus & msg,
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

  // member: state
  {
    out << "state: ";
    rosidl_generator_traits::value_to_yaml(msg.state, out);
    out << ", ";
  }

  // member: enabled
  {
    out << "enabled: ";
    rosidl_generator_traits::value_to_yaml(msg.enabled, out);
    out << ", ";
  }

  // member: requested_mode
  {
    out << "requested_mode: ";
    rosidl_generator_traits::value_to_yaml(msg.requested_mode, out);
    out << ", ";
  }

  // member: effective_mode
  {
    out << "effective_mode: ";
    rosidl_generator_traits::value_to_yaml(msg.effective_mode, out);
    out << ", ";
  }

  // member: feedback_reason
  {
    out << "feedback_reason: ";
    rosidl_generator_traits::value_to_yaml(msg.feedback_reason, out);
    out << ", ";
  }

  // member: numeric_valid
  {
    out << "numeric_valid: ";
    rosidl_generator_traits::value_to_yaml(msg.numeric_valid, out);
    out << ", ";
  }

  // member: pressure_limited
  {
    out << "pressure_limited: ";
    rosidl_generator_traits::value_to_yaml(msg.pressure_limited, out);
    out << ", ";
  }

  // member: measured_error_valid
  {
    out << "measured_error_valid: ";
    rosidl_generator_traits::value_to_yaml(msg.measured_error_valid, out);
    out << ", ";
  }

  // member: contact_state
  {
    out << "contact_state: ";
    rosidl_generator_traits::value_to_yaml(msg.contact_state, out);
    out << ", ";
  }

  // member: target_mm
  {
    if (msg.target_mm.size() == 0) {
      out << "target_mm: []";
    } else {
      out << "target_mm: [";
      size_t pending_items = msg.target_mm.size();
      for (auto item : msg.target_mm) {
        rosidl_generator_traits::value_to_yaml(item, out);
        if (--pending_items > 0) {
          out << ", ";
        }
      }
      out << "]";
    }
    out << ", ";
  }

  // member: predicted_mm
  {
    if (msg.predicted_mm.size() == 0) {
      out << "predicted_mm: []";
    } else {
      out << "predicted_mm: [";
      size_t pending_items = msg.predicted_mm.size();
      for (auto item : msg.predicted_mm) {
        rosidl_generator_traits::value_to_yaml(item, out);
        if (--pending_items > 0) {
          out << ", ";
        }
      }
      out << "]";
    }
    out << ", ";
  }

  // member: error_mm
  {
    if (msg.error_mm.size() == 0) {
      out << "error_mm: []";
    } else {
      out << "error_mm: [";
      size_t pending_items = msg.error_mm.size();
      for (auto item : msg.error_mm) {
        rosidl_generator_traits::value_to_yaml(item, out);
        if (--pending_items > 0) {
          out << ", ";
        }
      }
      out << "]";
    }
    out << ", ";
  }

  // member: requested_pressure_kpa
  {
    if (msg.requested_pressure_kpa.size() == 0) {
      out << "requested_pressure_kpa: []";
    } else {
      out << "requested_pressure_kpa: [";
      size_t pending_items = msg.requested_pressure_kpa.size();
      for (auto item : msg.requested_pressure_kpa) {
        rosidl_generator_traits::value_to_yaml(item, out);
        if (--pending_items > 0) {
          out << ", ";
        }
      }
      out << "]";
    }
    out << ", ";
  }

  // member: core_pressure_kpa
  {
    if (msg.core_pressure_kpa.size() == 0) {
      out << "core_pressure_kpa: []";
    } else {
      out << "core_pressure_kpa: [";
      size_t pending_items = msg.core_pressure_kpa.size();
      for (auto item : msg.core_pressure_kpa) {
        rosidl_generator_traits::value_to_yaml(item, out);
        if (--pending_items > 0) {
          out << ", ";
        }
      }
      out << "]";
    }
    out << ", ";
  }

  // member: output_pressure_kpa
  {
    if (msg.output_pressure_kpa.size() == 0) {
      out << "output_pressure_kpa: []";
    } else {
      out << "output_pressure_kpa: [";
      size_t pending_items = msg.output_pressure_kpa.size();
      for (auto item : msg.output_pressure_kpa) {
        rosidl_generator_traits::value_to_yaml(item, out);
        if (--pending_items > 0) {
          out << ", ";
        }
      }
      out << "]";
    }
    out << ", ";
  }

  // member: last_written_pressure_kpa
  {
    if (msg.last_written_pressure_kpa.size() == 0) {
      out << "last_written_pressure_kpa: []";
    } else {
      out << "last_written_pressure_kpa: [";
      size_t pending_items = msg.last_written_pressure_kpa.size();
      for (auto item : msg.last_written_pressure_kpa) {
        rosidl_generator_traits::value_to_yaml(item, out);
        if (--pending_items > 0) {
          out << ", ";
        }
      }
      out << "]";
    }
    out << ", ";
  }

  // member: writer_fresh
  {
    out << "writer_fresh: ";
    rosidl_generator_traits::value_to_yaml(msg.writer_fresh, out);
    out << ", ";
  }

  // member: feedback_sequence
  {
    out << "feedback_sequence: ";
    rosidl_generator_traits::value_to_yaml(msg.feedback_sequence, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const ControllerStatus & msg,
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

  // member: state
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "state: ";
    rosidl_generator_traits::value_to_yaml(msg.state, out);
    out << "\n";
  }

  // member: enabled
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "enabled: ";
    rosidl_generator_traits::value_to_yaml(msg.enabled, out);
    out << "\n";
  }

  // member: requested_mode
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "requested_mode: ";
    rosidl_generator_traits::value_to_yaml(msg.requested_mode, out);
    out << "\n";
  }

  // member: effective_mode
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "effective_mode: ";
    rosidl_generator_traits::value_to_yaml(msg.effective_mode, out);
    out << "\n";
  }

  // member: feedback_reason
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "feedback_reason: ";
    rosidl_generator_traits::value_to_yaml(msg.feedback_reason, out);
    out << "\n";
  }

  // member: numeric_valid
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "numeric_valid: ";
    rosidl_generator_traits::value_to_yaml(msg.numeric_valid, out);
    out << "\n";
  }

  // member: pressure_limited
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "pressure_limited: ";
    rosidl_generator_traits::value_to_yaml(msg.pressure_limited, out);
    out << "\n";
  }

  // member: measured_error_valid
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "measured_error_valid: ";
    rosidl_generator_traits::value_to_yaml(msg.measured_error_valid, out);
    out << "\n";
  }

  // member: contact_state
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "contact_state: ";
    rosidl_generator_traits::value_to_yaml(msg.contact_state, out);
    out << "\n";
  }

  // member: target_mm
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.target_mm.size() == 0) {
      out << "target_mm: []\n";
    } else {
      out << "target_mm:\n";
      for (auto item : msg.target_mm) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "- ";
        rosidl_generator_traits::value_to_yaml(item, out);
        out << "\n";
      }
    }
  }

  // member: predicted_mm
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.predicted_mm.size() == 0) {
      out << "predicted_mm: []\n";
    } else {
      out << "predicted_mm:\n";
      for (auto item : msg.predicted_mm) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "- ";
        rosidl_generator_traits::value_to_yaml(item, out);
        out << "\n";
      }
    }
  }

  // member: error_mm
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.error_mm.size() == 0) {
      out << "error_mm: []\n";
    } else {
      out << "error_mm:\n";
      for (auto item : msg.error_mm) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "- ";
        rosidl_generator_traits::value_to_yaml(item, out);
        out << "\n";
      }
    }
  }

  // member: requested_pressure_kpa
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.requested_pressure_kpa.size() == 0) {
      out << "requested_pressure_kpa: []\n";
    } else {
      out << "requested_pressure_kpa:\n";
      for (auto item : msg.requested_pressure_kpa) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "- ";
        rosidl_generator_traits::value_to_yaml(item, out);
        out << "\n";
      }
    }
  }

  // member: core_pressure_kpa
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.core_pressure_kpa.size() == 0) {
      out << "core_pressure_kpa: []\n";
    } else {
      out << "core_pressure_kpa:\n";
      for (auto item : msg.core_pressure_kpa) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "- ";
        rosidl_generator_traits::value_to_yaml(item, out);
        out << "\n";
      }
    }
  }

  // member: output_pressure_kpa
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.output_pressure_kpa.size() == 0) {
      out << "output_pressure_kpa: []\n";
    } else {
      out << "output_pressure_kpa:\n";
      for (auto item : msg.output_pressure_kpa) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "- ";
        rosidl_generator_traits::value_to_yaml(item, out);
        out << "\n";
      }
    }
  }

  // member: last_written_pressure_kpa
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.last_written_pressure_kpa.size() == 0) {
      out << "last_written_pressure_kpa: []\n";
    } else {
      out << "last_written_pressure_kpa:\n";
      for (auto item : msg.last_written_pressure_kpa) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "- ";
        rosidl_generator_traits::value_to_yaml(item, out);
        out << "\n";
      }
    }
  }

  // member: writer_fresh
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "writer_fresh: ";
    rosidl_generator_traits::value_to_yaml(msg.writer_fresh, out);
    out << "\n";
  }

  // member: feedback_sequence
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "feedback_sequence: ";
    rosidl_generator_traits::value_to_yaml(msg.feedback_sequence, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const ControllerStatus & msg, bool use_flow_style = false)
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
  const soft_actuator_msgs::msg::ControllerStatus & msg,
  std::ostream & out, size_t indentation = 0)
{
  soft_actuator_msgs::msg::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use soft_actuator_msgs::msg::to_yaml() instead")]]
inline std::string to_yaml(const soft_actuator_msgs::msg::ControllerStatus & msg)
{
  return soft_actuator_msgs::msg::to_yaml(msg);
}

template<>
inline const char * data_type<soft_actuator_msgs::msg::ControllerStatus>()
{
  return "soft_actuator_msgs::msg::ControllerStatus";
}

template<>
inline const char * name<soft_actuator_msgs::msg::ControllerStatus>()
{
  return "soft_actuator_msgs/msg/ControllerStatus";
}

template<>
struct has_fixed_size<soft_actuator_msgs::msg::ControllerStatus>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<soft_actuator_msgs::msg::ControllerStatus>
  : std::integral_constant<bool, false> {};

template<>
struct is_message<soft_actuator_msgs::msg::ControllerStatus>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // SOFT_ACTUATOR_MSGS__MSG__DETAIL__CONTROLLER_STATUS__TRAITS_HPP_
