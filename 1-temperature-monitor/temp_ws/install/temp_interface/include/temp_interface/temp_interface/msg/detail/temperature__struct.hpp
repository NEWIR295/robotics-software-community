// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from temp_interface:msg/Temperature.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "temp_interface/msg/temperature.hpp"


#ifndef TEMP_INTERFACE__MSG__DETAIL__TEMPERATURE__STRUCT_HPP_
#define TEMP_INTERFACE__MSG__DETAIL__TEMPERATURE__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


// Include directives for member types
// Member 'temperature'
#include "std_msgs/msg/detail/float32__struct.hpp"
// Member 'timestamp'
#include "std_msgs/msg/detail/int64__struct.hpp"
// Member 'sensor_id'
// Member 'unit'
#include "std_msgs/msg/detail/string__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__temp_interface__msg__Temperature __attribute__((deprecated))
#else
# define DEPRECATED__temp_interface__msg__Temperature __declspec(deprecated)
#endif

namespace temp_interface
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct Temperature_
{
  using Type = Temperature_<ContainerAllocator>;

  explicit Temperature_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : temperature(_init),
    timestamp(_init),
    sensor_id(_init),
    unit(_init)
  {
    (void)_init;
  }

  explicit Temperature_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : temperature(_alloc, _init),
    timestamp(_alloc, _init),
    sensor_id(_alloc, _init),
    unit(_alloc, _init)
  {
    (void)_init;
  }

  // field types and members
  using _temperature_type =
    std_msgs::msg::Float32_<ContainerAllocator>;
  _temperature_type temperature;
  using _timestamp_type =
    std_msgs::msg::Int64_<ContainerAllocator>;
  _timestamp_type timestamp;
  using _sensor_id_type =
    std_msgs::msg::String_<ContainerAllocator>;
  _sensor_id_type sensor_id;
  using _unit_type =
    std_msgs::msg::String_<ContainerAllocator>;
  _unit_type unit;

  // setters for named parameter idiom
  Type & set__temperature(
    const std_msgs::msg::Float32_<ContainerAllocator> & _arg)
  {
    this->temperature = _arg;
    return *this;
  }
  Type & set__timestamp(
    const std_msgs::msg::Int64_<ContainerAllocator> & _arg)
  {
    this->timestamp = _arg;
    return *this;
  }
  Type & set__sensor_id(
    const std_msgs::msg::String_<ContainerAllocator> & _arg)
  {
    this->sensor_id = _arg;
    return *this;
  }
  Type & set__unit(
    const std_msgs::msg::String_<ContainerAllocator> & _arg)
  {
    this->unit = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    temp_interface::msg::Temperature_<ContainerAllocator> *;
  using ConstRawPtr =
    const temp_interface::msg::Temperature_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<temp_interface::msg::Temperature_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<temp_interface::msg::Temperature_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      temp_interface::msg::Temperature_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<temp_interface::msg::Temperature_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      temp_interface::msg::Temperature_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<temp_interface::msg::Temperature_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<temp_interface::msg::Temperature_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<temp_interface::msg::Temperature_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__temp_interface__msg__Temperature
    std::shared_ptr<temp_interface::msg::Temperature_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__temp_interface__msg__Temperature
    std::shared_ptr<temp_interface::msg::Temperature_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const Temperature_ & other) const
  {
    if (this->temperature != other.temperature) {
      return false;
    }
    if (this->timestamp != other.timestamp) {
      return false;
    }
    if (this->sensor_id != other.sensor_id) {
      return false;
    }
    if (this->unit != other.unit) {
      return false;
    }
    return true;
  }
  bool operator!=(const Temperature_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct Temperature_

// alias to use template instance with default allocator
using Temperature =
  temp_interface::msg::Temperature_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace temp_interface

#endif  // TEMP_INTERFACE__MSG__DETAIL__TEMPERATURE__STRUCT_HPP_
