// generated from rosidl_typesupport_fastrtps_c/resource/idl__rosidl_typesupport_fastrtps_c.h.em
// with input from temp_interface:msg/Temperature.idl
// generated code does not contain a copyright notice
#ifndef TEMP_INTERFACE__MSG__DETAIL__TEMPERATURE__ROSIDL_TYPESUPPORT_FASTRTPS_C_H_
#define TEMP_INTERFACE__MSG__DETAIL__TEMPERATURE__ROSIDL_TYPESUPPORT_FASTRTPS_C_H_


#include <stddef.h>
#include "rosidl_runtime_c/message_type_support_struct.h"
#include "rosidl_typesupport_interface/macros.h"
#include "temp_interface/msg/rosidl_typesupport_fastrtps_c__visibility_control.h"
#include "temp_interface/msg/detail/temperature__struct.h"
#include "fastcdr/Cdr.h"

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_temp_interface
bool cdr_serialize_temp_interface__msg__Temperature(
  const temp_interface__msg__Temperature * ros_message,
  eprosima::fastcdr::Cdr & cdr);

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_temp_interface
bool cdr_deserialize_temp_interface__msg__Temperature(
  eprosima::fastcdr::Cdr &,
  temp_interface__msg__Temperature * ros_message);

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_temp_interface
size_t get_serialized_size_temp_interface__msg__Temperature(
  const void * untyped_ros_message,
  size_t current_alignment);

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_temp_interface
size_t max_serialized_size_temp_interface__msg__Temperature(
  bool & full_bounded,
  bool & is_plain,
  size_t current_alignment);

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_temp_interface
bool cdr_serialize_key_temp_interface__msg__Temperature(
  const temp_interface__msg__Temperature * ros_message,
  eprosima::fastcdr::Cdr & cdr);

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_temp_interface
size_t get_serialized_size_key_temp_interface__msg__Temperature(
  const void * untyped_ros_message,
  size_t current_alignment);

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_temp_interface
size_t max_serialized_size_key_temp_interface__msg__Temperature(
  bool & full_bounded,
  bool & is_plain,
  size_t current_alignment);

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_temp_interface
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, temp_interface, msg, Temperature)();

#ifdef __cplusplus
}
#endif

#endif  // TEMP_INTERFACE__MSG__DETAIL__TEMPERATURE__ROSIDL_TYPESUPPORT_FASTRTPS_C_H_
