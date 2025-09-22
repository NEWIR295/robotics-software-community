// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from temp_interface:msg/Temperature.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "temp_interface/msg/temperature.hpp"


#ifndef TEMP_INTERFACE__MSG__DETAIL__TEMPERATURE__BUILDER_HPP_
#define TEMP_INTERFACE__MSG__DETAIL__TEMPERATURE__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "temp_interface/msg/detail/temperature__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace temp_interface
{

namespace msg
{

namespace builder
{

class Init_Temperature_unit
{
public:
  explicit Init_Temperature_unit(::temp_interface::msg::Temperature & msg)
  : msg_(msg)
  {}
  ::temp_interface::msg::Temperature unit(::temp_interface::msg::Temperature::_unit_type arg)
  {
    msg_.unit = std::move(arg);
    return std::move(msg_);
  }

private:
  ::temp_interface::msg::Temperature msg_;
};

class Init_Temperature_sensor_id
{
public:
  explicit Init_Temperature_sensor_id(::temp_interface::msg::Temperature & msg)
  : msg_(msg)
  {}
  Init_Temperature_unit sensor_id(::temp_interface::msg::Temperature::_sensor_id_type arg)
  {
    msg_.sensor_id = std::move(arg);
    return Init_Temperature_unit(msg_);
  }

private:
  ::temp_interface::msg::Temperature msg_;
};

class Init_Temperature_timestamp
{
public:
  explicit Init_Temperature_timestamp(::temp_interface::msg::Temperature & msg)
  : msg_(msg)
  {}
  Init_Temperature_sensor_id timestamp(::temp_interface::msg::Temperature::_timestamp_type arg)
  {
    msg_.timestamp = std::move(arg);
    return Init_Temperature_sensor_id(msg_);
  }

private:
  ::temp_interface::msg::Temperature msg_;
};

class Init_Temperature_temperature
{
public:
  Init_Temperature_temperature()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_Temperature_timestamp temperature(::temp_interface::msg::Temperature::_temperature_type arg)
  {
    msg_.temperature = std::move(arg);
    return Init_Temperature_timestamp(msg_);
  }

private:
  ::temp_interface::msg::Temperature msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::temp_interface::msg::Temperature>()
{
  return temp_interface::msg::builder::Init_Temperature_temperature();
}

}  // namespace temp_interface

#endif  // TEMP_INTERFACE__MSG__DETAIL__TEMPERATURE__BUILDER_HPP_
