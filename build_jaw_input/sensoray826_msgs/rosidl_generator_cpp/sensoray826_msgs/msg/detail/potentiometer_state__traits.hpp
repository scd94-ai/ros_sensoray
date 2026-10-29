// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from sensoray826_msgs:msg/PotentiometerState.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "sensoray826_msgs/msg/potentiometer_state.hpp"


#ifndef SENSORAY826_MSGS__MSG__DETAIL__POTENTIOMETER_STATE__TRAITS_HPP_
#define SENSORAY826_MSGS__MSG__DETAIL__POTENTIOMETER_STATE__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "sensoray826_msgs/msg/detail/potentiometer_state__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

// Include directives for member types
// Member 'header'
#include "std_msgs/msg/detail/header__traits.hpp"

namespace sensoray826_msgs
{

namespace msg
{

inline void to_flow_style_yaml(
  const PotentiometerState & msg,
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

  // member: board
  {
    out << "board: ";
    rosidl_generator_traits::value_to_yaml(msg.board, out);
    out << ", ";
  }

  // member: settling_us
  {
    out << "settling_us: ";
    rosidl_generator_traits::value_to_yaml(msg.settling_us, out);
    out << ", ";
  }

  // member: adc_channels
  {
    if (msg.adc_channels.size() == 0) {
      out << "adc_channels: []";
    } else {
      out << "adc_channels: [";
      size_t pending_items = msg.adc_channels.size();
      for (auto item : msg.adc_channels) {
        rosidl_generator_traits::value_to_yaml(item, out);
        if (--pending_items > 0) {
          out << ", ";
        }
      }
      out << "]";
    }
    out << ", ";
  }

  // member: adc_timestamps_us
  {
    if (msg.adc_timestamps_us.size() == 0) {
      out << "adc_timestamps_us: []";
    } else {
      out << "adc_timestamps_us: [";
      size_t pending_items = msg.adc_timestamps_us.size();
      for (auto item : msg.adc_timestamps_us) {
        rosidl_generator_traits::value_to_yaml(item, out);
        if (--pending_items > 0) {
          out << ", ";
        }
      }
      out << "]";
    }
    out << ", ";
  }

  // member: voltage_v
  {
    if (msg.voltage_v.size() == 0) {
      out << "voltage_v: []";
    } else {
      out << "voltage_v: [";
      size_t pending_items = msg.voltage_v.size();
      for (auto item : msg.voltage_v) {
        rosidl_generator_traits::value_to_yaml(item, out);
        if (--pending_items > 0) {
          out << ", ";
        }
      }
      out << "]";
    }
    out << ", ";
  }

  // member: valid
  {
    if (msg.valid.size() == 0) {
      out << "valid: []";
    } else {
      out << "valid: [";
      size_t pending_items = msg.valid.size();
      for (auto item : msg.valid) {
        rosidl_generator_traits::value_to_yaml(item, out);
        if (--pending_items > 0) {
          out << ", ";
        }
      }
      out << "]";
    }
    out << ", ";
  }

  // member: sdk_status
  {
    out << "sdk_status: ";
    rosidl_generator_traits::value_to_yaml(msg.sdk_status, out);
    out << ", ";
  }

  // member: supply_valid
  {
    out << "supply_valid: ";
    rosidl_generator_traits::value_to_yaml(msg.supply_valid, out);
    out << ", ";
  }

  // member: supply_voltage_v
  {
    out << "supply_voltage_v: ";
    rosidl_generator_traits::value_to_yaml(msg.supply_voltage_v, out);
    out << ", ";
  }

  // member: supply_adc_timestamp_us
  {
    out << "supply_adc_timestamp_us: ";
    rosidl_generator_traits::value_to_yaml(msg.supply_adc_timestamp_us, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const PotentiometerState & msg,
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

  // member: board
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "board: ";
    rosidl_generator_traits::value_to_yaml(msg.board, out);
    out << "\n";
  }

  // member: settling_us
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "settling_us: ";
    rosidl_generator_traits::value_to_yaml(msg.settling_us, out);
    out << "\n";
  }

  // member: adc_channels
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.adc_channels.size() == 0) {
      out << "adc_channels: []\n";
    } else {
      out << "adc_channels:\n";
      for (auto item : msg.adc_channels) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "- ";
        rosidl_generator_traits::value_to_yaml(item, out);
        out << "\n";
      }
    }
  }

  // member: adc_timestamps_us
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.adc_timestamps_us.size() == 0) {
      out << "adc_timestamps_us: []\n";
    } else {
      out << "adc_timestamps_us:\n";
      for (auto item : msg.adc_timestamps_us) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "- ";
        rosidl_generator_traits::value_to_yaml(item, out);
        out << "\n";
      }
    }
  }

  // member: voltage_v
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.voltage_v.size() == 0) {
      out << "voltage_v: []\n";
    } else {
      out << "voltage_v:\n";
      for (auto item : msg.voltage_v) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "- ";
        rosidl_generator_traits::value_to_yaml(item, out);
        out << "\n";
      }
    }
  }

  // member: valid
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.valid.size() == 0) {
      out << "valid: []\n";
    } else {
      out << "valid:\n";
      for (auto item : msg.valid) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "- ";
        rosidl_generator_traits::value_to_yaml(item, out);
        out << "\n";
      }
    }
  }

  // member: sdk_status
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "sdk_status: ";
    rosidl_generator_traits::value_to_yaml(msg.sdk_status, out);
    out << "\n";
  }

  // member: supply_valid
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "supply_valid: ";
    rosidl_generator_traits::value_to_yaml(msg.supply_valid, out);
    out << "\n";
  }

  // member: supply_voltage_v
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "supply_voltage_v: ";
    rosidl_generator_traits::value_to_yaml(msg.supply_voltage_v, out);
    out << "\n";
  }

  // member: supply_adc_timestamp_us
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "supply_adc_timestamp_us: ";
    rosidl_generator_traits::value_to_yaml(msg.supply_adc_timestamp_us, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const PotentiometerState & msg, bool use_flow_style = false)
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

}  // namespace sensoray826_msgs

namespace rosidl_generator_traits
{

[[deprecated("use sensoray826_msgs::msg::to_block_style_yaml() instead")]]
inline void to_yaml(
  const sensoray826_msgs::msg::PotentiometerState & msg,
  std::ostream & out, size_t indentation = 0)
{
  sensoray826_msgs::msg::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use sensoray826_msgs::msg::to_yaml() instead")]]
inline std::string to_yaml(const sensoray826_msgs::msg::PotentiometerState & msg)
{
  return sensoray826_msgs::msg::to_yaml(msg);
}

template<>
inline const char * data_type<sensoray826_msgs::msg::PotentiometerState>()
{
  return "sensoray826_msgs::msg::PotentiometerState";
}

template<>
inline const char * name<sensoray826_msgs::msg::PotentiometerState>()
{
  return "sensoray826_msgs/msg/PotentiometerState";
}

template<>
struct has_fixed_size<sensoray826_msgs::msg::PotentiometerState>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<sensoray826_msgs::msg::PotentiometerState>
  : std::integral_constant<bool, false> {};

template<>
struct is_message<sensoray826_msgs::msg::PotentiometerState>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // SENSORAY826_MSGS__MSG__DETAIL__POTENTIOMETER_STATE__TRAITS_HPP_
