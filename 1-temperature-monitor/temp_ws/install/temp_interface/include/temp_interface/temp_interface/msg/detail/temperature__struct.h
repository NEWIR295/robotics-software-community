// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from temp_interface:msg/Temperature.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "temp_interface/msg/temperature.h"


#ifndef TEMP_INTERFACE__MSG__DETAIL__TEMPERATURE__STRUCT_H_
#define TEMP_INTERFACE__MSG__DETAIL__TEMPERATURE__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>

// Constants defined in the message

// Include directives for member types
// Member 'temperature'
#include "std_msgs/msg/detail/float32__struct.h"
// Member 'timestamp'
#include "std_msgs/msg/detail/int64__struct.h"
// Member 'sensor_id'
// Member 'unit'
#include "std_msgs/msg/detail/string__struct.h"

/// Struct defined in msg/Temperature in the package temp_interface.
/**
  * temprature message definition
 */
typedef struct temp_interface__msg__Temperature
{
  /// Temperature value (float)
  std_msgs__msg__Float32 temperature;
  /// Timestamp
  std_msgs__msg__Int64 timestamp;
  /// Sensor ID (string)
  std_msgs__msg__String sensor_id;
  /// Unit (Celsius/Fahrenheit)
  std_msgs__msg__String unit;
} temp_interface__msg__Temperature;

// Struct for a sequence of temp_interface__msg__Temperature.
typedef struct temp_interface__msg__Temperature__Sequence
{
  temp_interface__msg__Temperature * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} temp_interface__msg__Temperature__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // TEMP_INTERFACE__MSG__DETAIL__TEMPERATURE__STRUCT_H_
