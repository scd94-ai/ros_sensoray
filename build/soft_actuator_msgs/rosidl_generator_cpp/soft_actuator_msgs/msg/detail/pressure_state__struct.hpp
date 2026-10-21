// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from soft_actuator_msgs:msg/PressureState.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "soft_actuator_msgs/msg/pressure_state.hpp"


#ifndef SOFT_ACTUATOR_MSGS__MSG__DETAIL__PRESSURE_STATE__STRUCT_HPP_
#define SOFT_ACTUATOR_MSGS__MSG__DETAIL__PRESSURE_STATE__STRUCT_HPP_

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
# define DEPRECATED__soft_actuator_msgs__msg__PressureState __attribute__((deprecated))
#else
# define DEPRECATED__soft_actuator_msgs__msg__PressureState __declspec(deprecated)
#endif

namespace soft_actuator_msgs
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct PressureState_
{
  using Type = PressureState_<ContainerAllocator>;

  explicit PressureState_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : header(_init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->session_id = "";
      this->command_sequence = 0ull;
      std::fill<typename std::array<double, 3>::iterator, double>(this->written_pressure_kpa.begin(), this->written_pressure_kpa.end(), 0.0);
      this->write_success = false;
      this->ready = false;
      this->fault = "";
    }
  }

  explicit PressureState_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : header(_alloc, _init),
    session_id(_alloc),
    written_pressure_kpa(_alloc),
    fault(_alloc)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->session_id = "";
      this->command_sequence = 0ull;
      std::fill<typename std::array<double, 3>::iterator, double>(this->written_pressure_kpa.begin(), this->written_pressure_kpa.end(), 0.0);
      this->write_success = false;
      this->ready = false;
      this->fault = "";
    }
  }

  // field types and members
  using _header_type =
    std_msgs::msg::Header_<ContainerAllocator>;
  _header_type header;
  using _session_id_type =
    std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>;
  _session_id_type session_id;
  using _command_sequence_type =
    uint64_t;
  _command_sequence_type command_sequence;
  using _written_pressure_kpa_type =
    std::array<double, 3>;
  _written_pressure_kpa_type written_pressure_kpa;
  using _write_success_type =
    bool;
  _write_success_type write_success;
  using _ready_type =
    bool;
  _ready_type ready;
  using _fault_type =
    std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>;
  _fault_type fault;

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
  Type & set__command_sequence(
    const uint64_t & _arg)
  {
    this->command_sequence = _arg;
    return *this;
  }
  Type & set__written_pressure_kpa(
    const std::array<double, 3> & _arg)
  {
    this->written_pressure_kpa = _arg;
    return *this;
  }
  Type & set__write_success(
    const bool & _arg)
  {
    this->write_success = _arg;
    return *this;
  }
  Type & set__ready(
    const bool & _arg)
  {
    this->ready = _arg;
    return *this;
  }
  Type & set__fault(
    const std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>> & _arg)
  {
    this->fault = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    soft_actuator_msgs::msg::PressureState_<ContainerAllocator> *;
  using ConstRawPtr =
    const soft_actuator_msgs::msg::PressureState_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<soft_actuator_msgs::msg::PressureState_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<soft_actuator_msgs::msg::PressureState_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      soft_actuator_msgs::msg::PressureState_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<soft_actuator_msgs::msg::PressureState_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      soft_actuator_msgs::msg::PressureState_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<soft_actuator_msgs::msg::PressureState_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<soft_actuator_msgs::msg::PressureState_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<soft_actuator_msgs::msg::PressureState_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__soft_actuator_msgs__msg__PressureState
    std::shared_ptr<soft_actuator_msgs::msg::PressureState_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__soft_actuator_msgs__msg__PressureState
    std::shared_ptr<soft_actuator_msgs::msg::PressureState_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const PressureState_ & other) const
  {
    if (this->header != other.header) {
      return false;
    }
    if (this->session_id != other.session_id) {
      return false;
    }
    if (this->command_sequence != other.command_sequence) {
      return false;
    }
    if (this->written_pressure_kpa != other.written_pressure_kpa) {
      return false;
    }
    if (this->write_success != other.write_success) {
      return false;
    }
    if (this->ready != other.ready) {
      return false;
    }
    if (this->fault != other.fault) {
      return false;
    }
    return true;
  }
  bool operator!=(const PressureState_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct PressureState_

// alias to use template instance with default allocator
using PressureState =
  soft_actuator_msgs::msg::PressureState_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace soft_actuator_msgs

#endif  // SOFT_ACTUATOR_MSGS__MSG__DETAIL__PRESSURE_STATE__STRUCT_HPP_
