// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from soft_actuator_msgs:msg/ControllerStatus.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "soft_actuator_msgs/msg/controller_status.hpp"


#ifndef SOFT_ACTUATOR_MSGS__MSG__DETAIL__CONTROLLER_STATUS__STRUCT_HPP_
#define SOFT_ACTUATOR_MSGS__MSG__DETAIL__CONTROLLER_STATUS__STRUCT_HPP_

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
# define DEPRECATED__soft_actuator_msgs__msg__ControllerStatus __attribute__((deprecated))
#else
# define DEPRECATED__soft_actuator_msgs__msg__ControllerStatus __declspec(deprecated)
#endif

namespace soft_actuator_msgs
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct ControllerStatus_
{
  using Type = ControllerStatus_<ContainerAllocator>;

  explicit ControllerStatus_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : header(_init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->session_id = "";
      this->state = "";
      this->enabled = false;
      this->requested_mode = "";
      this->effective_mode = "";
      this->feedback_reason = "";
      this->numeric_valid = false;
      this->pressure_limited = false;
      this->measured_error_valid = false;
      this->contact_state = "";
      std::fill<typename std::array<double, 3>::iterator, double>(this->target_mm.begin(), this->target_mm.end(), 0.0);
      std::fill<typename std::array<double, 3>::iterator, double>(this->predicted_mm.begin(), this->predicted_mm.end(), 0.0);
      std::fill<typename std::array<double, 3>::iterator, double>(this->error_mm.begin(), this->error_mm.end(), 0.0);
      std::fill<typename std::array<double, 3>::iterator, double>(this->requested_pressure_kpa.begin(), this->requested_pressure_kpa.end(), 0.0);
      std::fill<typename std::array<double, 3>::iterator, double>(this->core_pressure_kpa.begin(), this->core_pressure_kpa.end(), 0.0);
      std::fill<typename std::array<double, 3>::iterator, double>(this->output_pressure_kpa.begin(), this->output_pressure_kpa.end(), 0.0);
      std::fill<typename std::array<double, 3>::iterator, double>(this->last_written_pressure_kpa.begin(), this->last_written_pressure_kpa.end(), 0.0);
      this->writer_fresh = false;
      this->feedback_sequence = 0ull;
    }
  }

  explicit ControllerStatus_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : header(_alloc, _init),
    session_id(_alloc),
    state(_alloc),
    requested_mode(_alloc),
    effective_mode(_alloc),
    feedback_reason(_alloc),
    contact_state(_alloc),
    target_mm(_alloc),
    predicted_mm(_alloc),
    error_mm(_alloc),
    requested_pressure_kpa(_alloc),
    core_pressure_kpa(_alloc),
    output_pressure_kpa(_alloc),
    last_written_pressure_kpa(_alloc)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->session_id = "";
      this->state = "";
      this->enabled = false;
      this->requested_mode = "";
      this->effective_mode = "";
      this->feedback_reason = "";
      this->numeric_valid = false;
      this->pressure_limited = false;
      this->measured_error_valid = false;
      this->contact_state = "";
      std::fill<typename std::array<double, 3>::iterator, double>(this->target_mm.begin(), this->target_mm.end(), 0.0);
      std::fill<typename std::array<double, 3>::iterator, double>(this->predicted_mm.begin(), this->predicted_mm.end(), 0.0);
      std::fill<typename std::array<double, 3>::iterator, double>(this->error_mm.begin(), this->error_mm.end(), 0.0);
      std::fill<typename std::array<double, 3>::iterator, double>(this->requested_pressure_kpa.begin(), this->requested_pressure_kpa.end(), 0.0);
      std::fill<typename std::array<double, 3>::iterator, double>(this->core_pressure_kpa.begin(), this->core_pressure_kpa.end(), 0.0);
      std::fill<typename std::array<double, 3>::iterator, double>(this->output_pressure_kpa.begin(), this->output_pressure_kpa.end(), 0.0);
      std::fill<typename std::array<double, 3>::iterator, double>(this->last_written_pressure_kpa.begin(), this->last_written_pressure_kpa.end(), 0.0);
      this->writer_fresh = false;
      this->feedback_sequence = 0ull;
    }
  }

  // field types and members
  using _header_type =
    std_msgs::msg::Header_<ContainerAllocator>;
  _header_type header;
  using _session_id_type =
    std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>;
  _session_id_type session_id;
  using _state_type =
    std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>;
  _state_type state;
  using _enabled_type =
    bool;
  _enabled_type enabled;
  using _requested_mode_type =
    std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>;
  _requested_mode_type requested_mode;
  using _effective_mode_type =
    std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>;
  _effective_mode_type effective_mode;
  using _feedback_reason_type =
    std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>;
  _feedback_reason_type feedback_reason;
  using _numeric_valid_type =
    bool;
  _numeric_valid_type numeric_valid;
  using _pressure_limited_type =
    bool;
  _pressure_limited_type pressure_limited;
  using _measured_error_valid_type =
    bool;
  _measured_error_valid_type measured_error_valid;
  using _contact_state_type =
    std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>;
  _contact_state_type contact_state;
  using _target_mm_type =
    std::array<double, 3>;
  _target_mm_type target_mm;
  using _predicted_mm_type =
    std::array<double, 3>;
  _predicted_mm_type predicted_mm;
  using _error_mm_type =
    std::array<double, 3>;
  _error_mm_type error_mm;
  using _requested_pressure_kpa_type =
    std::array<double, 3>;
  _requested_pressure_kpa_type requested_pressure_kpa;
  using _core_pressure_kpa_type =
    std::array<double, 3>;
  _core_pressure_kpa_type core_pressure_kpa;
  using _output_pressure_kpa_type =
    std::array<double, 3>;
  _output_pressure_kpa_type output_pressure_kpa;
  using _last_written_pressure_kpa_type =
    std::array<double, 3>;
  _last_written_pressure_kpa_type last_written_pressure_kpa;
  using _writer_fresh_type =
    bool;
  _writer_fresh_type writer_fresh;
  using _feedback_sequence_type =
    uint64_t;
  _feedback_sequence_type feedback_sequence;

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
  Type & set__state(
    const std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>> & _arg)
  {
    this->state = _arg;
    return *this;
  }
  Type & set__enabled(
    const bool & _arg)
  {
    this->enabled = _arg;
    return *this;
  }
  Type & set__requested_mode(
    const std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>> & _arg)
  {
    this->requested_mode = _arg;
    return *this;
  }
  Type & set__effective_mode(
    const std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>> & _arg)
  {
    this->effective_mode = _arg;
    return *this;
  }
  Type & set__feedback_reason(
    const std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>> & _arg)
  {
    this->feedback_reason = _arg;
    return *this;
  }
  Type & set__numeric_valid(
    const bool & _arg)
  {
    this->numeric_valid = _arg;
    return *this;
  }
  Type & set__pressure_limited(
    const bool & _arg)
  {
    this->pressure_limited = _arg;
    return *this;
  }
  Type & set__measured_error_valid(
    const bool & _arg)
  {
    this->measured_error_valid = _arg;
    return *this;
  }
  Type & set__contact_state(
    const std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>> & _arg)
  {
    this->contact_state = _arg;
    return *this;
  }
  Type & set__target_mm(
    const std::array<double, 3> & _arg)
  {
    this->target_mm = _arg;
    return *this;
  }
  Type & set__predicted_mm(
    const std::array<double, 3> & _arg)
  {
    this->predicted_mm = _arg;
    return *this;
  }
  Type & set__error_mm(
    const std::array<double, 3> & _arg)
  {
    this->error_mm = _arg;
    return *this;
  }
  Type & set__requested_pressure_kpa(
    const std::array<double, 3> & _arg)
  {
    this->requested_pressure_kpa = _arg;
    return *this;
  }
  Type & set__core_pressure_kpa(
    const std::array<double, 3> & _arg)
  {
    this->core_pressure_kpa = _arg;
    return *this;
  }
  Type & set__output_pressure_kpa(
    const std::array<double, 3> & _arg)
  {
    this->output_pressure_kpa = _arg;
    return *this;
  }
  Type & set__last_written_pressure_kpa(
    const std::array<double, 3> & _arg)
  {
    this->last_written_pressure_kpa = _arg;
    return *this;
  }
  Type & set__writer_fresh(
    const bool & _arg)
  {
    this->writer_fresh = _arg;
    return *this;
  }
  Type & set__feedback_sequence(
    const uint64_t & _arg)
  {
    this->feedback_sequence = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    soft_actuator_msgs::msg::ControllerStatus_<ContainerAllocator> *;
  using ConstRawPtr =
    const soft_actuator_msgs::msg::ControllerStatus_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<soft_actuator_msgs::msg::ControllerStatus_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<soft_actuator_msgs::msg::ControllerStatus_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      soft_actuator_msgs::msg::ControllerStatus_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<soft_actuator_msgs::msg::ControllerStatus_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      soft_actuator_msgs::msg::ControllerStatus_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<soft_actuator_msgs::msg::ControllerStatus_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<soft_actuator_msgs::msg::ControllerStatus_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<soft_actuator_msgs::msg::ControllerStatus_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__soft_actuator_msgs__msg__ControllerStatus
    std::shared_ptr<soft_actuator_msgs::msg::ControllerStatus_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__soft_actuator_msgs__msg__ControllerStatus
    std::shared_ptr<soft_actuator_msgs::msg::ControllerStatus_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const ControllerStatus_ & other) const
  {
    if (this->header != other.header) {
      return false;
    }
    if (this->session_id != other.session_id) {
      return false;
    }
    if (this->state != other.state) {
      return false;
    }
    if (this->enabled != other.enabled) {
      return false;
    }
    if (this->requested_mode != other.requested_mode) {
      return false;
    }
    if (this->effective_mode != other.effective_mode) {
      return false;
    }
    if (this->feedback_reason != other.feedback_reason) {
      return false;
    }
    if (this->numeric_valid != other.numeric_valid) {
      return false;
    }
    if (this->pressure_limited != other.pressure_limited) {
      return false;
    }
    if (this->measured_error_valid != other.measured_error_valid) {
      return false;
    }
    if (this->contact_state != other.contact_state) {
      return false;
    }
    if (this->target_mm != other.target_mm) {
      return false;
    }
    if (this->predicted_mm != other.predicted_mm) {
      return false;
    }
    if (this->error_mm != other.error_mm) {
      return false;
    }
    if (this->requested_pressure_kpa != other.requested_pressure_kpa) {
      return false;
    }
    if (this->core_pressure_kpa != other.core_pressure_kpa) {
      return false;
    }
    if (this->output_pressure_kpa != other.output_pressure_kpa) {
      return false;
    }
    if (this->last_written_pressure_kpa != other.last_written_pressure_kpa) {
      return false;
    }
    if (this->writer_fresh != other.writer_fresh) {
      return false;
    }
    if (this->feedback_sequence != other.feedback_sequence) {
      return false;
    }
    return true;
  }
  bool operator!=(const ControllerStatus_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct ControllerStatus_

// alias to use template instance with default allocator
using ControllerStatus =
  soft_actuator_msgs::msg::ControllerStatus_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace soft_actuator_msgs

#endif  // SOFT_ACTUATOR_MSGS__MSG__DETAIL__CONTROLLER_STATUS__STRUCT_HPP_
