// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from soft_actuator_msgs:msg/PressureCommand.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "soft_actuator_msgs/msg/pressure_command.hpp"


#ifndef SOFT_ACTUATOR_MSGS__MSG__DETAIL__PRESSURE_COMMAND__STRUCT_HPP_
#define SOFT_ACTUATOR_MSGS__MSG__DETAIL__PRESSURE_COMMAND__STRUCT_HPP_

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
// Member 'valid_for'
#include "builtin_interfaces/msg/detail/duration__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__soft_actuator_msgs__msg__PressureCommand __attribute__((deprecated))
#else
# define DEPRECATED__soft_actuator_msgs__msg__PressureCommand __declspec(deprecated)
#endif

namespace soft_actuator_msgs
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct PressureCommand_
{
  using Type = PressureCommand_<ContainerAllocator>;

  explicit PressureCommand_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : header(_init),
    valid_for(_init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->session_id = "";
      this->sequence = 0ull;
      std::fill<typename std::array<double, 3>::iterator, double>(this->pressure_kpa.begin(), this->pressure_kpa.end(), 0.0);
      this->force_zero = false;
      this->reason = "";
    }
  }

  explicit PressureCommand_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : header(_alloc, _init),
    session_id(_alloc),
    pressure_kpa(_alloc),
    valid_for(_alloc, _init),
    reason(_alloc)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->session_id = "";
      this->sequence = 0ull;
      std::fill<typename std::array<double, 3>::iterator, double>(this->pressure_kpa.begin(), this->pressure_kpa.end(), 0.0);
      this->force_zero = false;
      this->reason = "";
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
  using _pressure_kpa_type =
    std::array<double, 3>;
  _pressure_kpa_type pressure_kpa;
  using _force_zero_type =
    bool;
  _force_zero_type force_zero;
  using _valid_for_type =
    builtin_interfaces::msg::Duration_<ContainerAllocator>;
  _valid_for_type valid_for;
  using _reason_type =
    std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>;
  _reason_type reason;

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
  Type & set__pressure_kpa(
    const std::array<double, 3> & _arg)
  {
    this->pressure_kpa = _arg;
    return *this;
  }
  Type & set__force_zero(
    const bool & _arg)
  {
    this->force_zero = _arg;
    return *this;
  }
  Type & set__valid_for(
    const builtin_interfaces::msg::Duration_<ContainerAllocator> & _arg)
  {
    this->valid_for = _arg;
    return *this;
  }
  Type & set__reason(
    const std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>> & _arg)
  {
    this->reason = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    soft_actuator_msgs::msg::PressureCommand_<ContainerAllocator> *;
  using ConstRawPtr =
    const soft_actuator_msgs::msg::PressureCommand_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<soft_actuator_msgs::msg::PressureCommand_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<soft_actuator_msgs::msg::PressureCommand_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      soft_actuator_msgs::msg::PressureCommand_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<soft_actuator_msgs::msg::PressureCommand_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      soft_actuator_msgs::msg::PressureCommand_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<soft_actuator_msgs::msg::PressureCommand_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<soft_actuator_msgs::msg::PressureCommand_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<soft_actuator_msgs::msg::PressureCommand_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__soft_actuator_msgs__msg__PressureCommand
    std::shared_ptr<soft_actuator_msgs::msg::PressureCommand_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__soft_actuator_msgs__msg__PressureCommand
    std::shared_ptr<soft_actuator_msgs::msg::PressureCommand_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const PressureCommand_ & other) const
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
    if (this->pressure_kpa != other.pressure_kpa) {
      return false;
    }
    if (this->force_zero != other.force_zero) {
      return false;
    }
    if (this->valid_for != other.valid_for) {
      return false;
    }
    if (this->reason != other.reason) {
      return false;
    }
    return true;
  }
  bool operator!=(const PressureCommand_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct PressureCommand_

// alias to use template instance with default allocator
using PressureCommand =
  soft_actuator_msgs::msg::PressureCommand_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace soft_actuator_msgs

#endif  // SOFT_ACTUATOR_MSGS__MSG__DETAIL__PRESSURE_COMMAND__STRUCT_HPP_
