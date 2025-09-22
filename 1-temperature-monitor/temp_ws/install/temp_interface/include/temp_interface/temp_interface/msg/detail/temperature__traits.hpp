// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from temp_interface:msg/Temperature.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "temp_interface/msg/temperature.hpp"


#ifndef TEMP_INTERFACE__MSG__DETAIL__TEMPERATURE__TRAITS_HPP_
#define TEMP_INTERFACE__MSG__DETAIL__TEMPERATURE__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "temp_interface/msg/detail/temperature__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

// Include directives for member types
// Member 'temperature'
#include "std_msgs/msg/detail/float32__traits.hpp"
// Member 'timestamp'
#include "std_msgs/msg/detail/int64__traits.hpp"
// Member 'sensor_id'
// Member 'unit'
#include "std_msgs/msg/detail/string__traits.hpp"

namespace temp_interface
{

namespace msg
{

inline void to_flow_style_yaml(
  const Temperature & msg,
  std::ostream & out)
{
  out << "{";
  // member: temperature
  {
    out << "temperature: ";
    to_flow_style_yaml(msg.temperature, out);
    out << ", ";
  }

  // member: timestamp
  {
    out << "timestamp: ";
    to_flow_style_yaml(msg.timestamp, out);
    out << ", ";
  }

  // member: sensor_id
  {
    out << "sensor_id: ";
    to_flow_style_yaml(msg.sensor_id, out);
    out << ", ";
  }

  // member: unit
  {
    out << "unit: ";
    to_flow_style_yaml(msg.unit, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const Temperature & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: temperature
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "temperature:\n";
    to_block_style_yaml(msg.temperature, out, indentation + 2);
  }

  // member: timestamp
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "timestamp:\n";
    to_block_style_yaml(msg.timestamp, out, indentation + 2);
  }

  // member: sensor_id
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "sensor_id:\n";
    to_block_style_yaml(msg.sensor_id, out, indentation + 2);
  }

  // member: unit
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "unit:\n";
    to_block_style_yaml(msg.unit, out, indentation + 2);
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const Temperature & msg, bool use_flow_style = false)
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

}  // namespace temp_interface

namespace rosidl_generator_traits
{

[[deprecated("use temp_interface::msg::to_block_style_yaml() instead")]]
inline void to_yaml(
  const temp_interface::msg::Temperature & msg,
  std::ostream & out, size_t indentation = 0)
{
  temp_interface::msg::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use temp_interface::msg::to_yaml() instead")]]
inline std::string to_yaml(const temp_interface::msg::Temperature & msg)
{
  return temp_interface::msg::to_yaml(msg);
}

template<>
inline const char * data_type<temp_interface::msg::Temperature>()
{
  return "temp_interface::msg::Temperature";
}

template<>
inline const char * name<temp_interface::msg::Temperature>()
{
  return "temp_interface/msg/Temperature";
}

template<>
struct has_fixed_size<temp_interface::msg::Temperature>
  : std::integral_constant<bool, has_fixed_size<std_msgs::msg::Float32>::value && has_fixed_size<std_msgs::msg::Int64>::value && has_fixed_size<std_msgs::msg::String>::value> {};

template<>
struct has_bounded_size<temp_interface::msg::Temperature>
  : std::integral_constant<bool, has_bounded_size<std_msgs::msg::Float32>::value && has_bounded_size<std_msgs::msg::Int64>::value && has_bounded_size<std_msgs::msg::String>::value> {};

template<>
struct is_message<temp_interface::msg::Temperature>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // TEMP_INTERFACE__MSG__DETAIL__TEMPERATURE__TRAITS_HPP_
