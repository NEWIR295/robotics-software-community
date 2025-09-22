// generated from rosidl_typesupport_introspection_c/resource/idl__type_support.c.em
// with input from temp_interface:msg/Temperature.idl
// generated code does not contain a copyright notice

#include <stddef.h>
#include "temp_interface/msg/detail/temperature__rosidl_typesupport_introspection_c.h"
#include "temp_interface/msg/rosidl_typesupport_introspection_c__visibility_control.h"
#include "rosidl_typesupport_introspection_c/field_types.h"
#include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/message_introspection.h"
#include "temp_interface/msg/detail/temperature__functions.h"
#include "temp_interface/msg/detail/temperature__struct.h"


// Include directives for member types
// Member `temperature`
#include "std_msgs/msg/float32.h"
// Member `temperature`
#include "std_msgs/msg/detail/float32__rosidl_typesupport_introspection_c.h"
// Member `timestamp`
#include "std_msgs/msg/int64.h"
// Member `timestamp`
#include "std_msgs/msg/detail/int64__rosidl_typesupport_introspection_c.h"
// Member `sensor_id`
// Member `unit`
#include "std_msgs/msg/string.h"
// Member `sensor_id`
// Member `unit`
#include "std_msgs/msg/detail/string__rosidl_typesupport_introspection_c.h"

#ifdef __cplusplus
extern "C"
{
#endif

void temp_interface__msg__Temperature__rosidl_typesupport_introspection_c__Temperature_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  temp_interface__msg__Temperature__init(message_memory);
}

void temp_interface__msg__Temperature__rosidl_typesupport_introspection_c__Temperature_fini_function(void * message_memory)
{
  temp_interface__msg__Temperature__fini(message_memory);
}

static rosidl_typesupport_introspection_c__MessageMember temp_interface__msg__Temperature__rosidl_typesupport_introspection_c__Temperature_message_member_array[4] = {
  {
    "temperature",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is key
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(temp_interface__msg__Temperature, temperature),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "timestamp",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is key
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(temp_interface__msg__Temperature, timestamp),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "sensor_id",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is key
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(temp_interface__msg__Temperature, sensor_id),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "unit",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is key
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(temp_interface__msg__Temperature, unit),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers temp_interface__msg__Temperature__rosidl_typesupport_introspection_c__Temperature_message_members = {
  "temp_interface__msg",  // message namespace
  "Temperature",  // message name
  4,  // number of fields
  sizeof(temp_interface__msg__Temperature),
  false,  // has_any_key_member_
  temp_interface__msg__Temperature__rosidl_typesupport_introspection_c__Temperature_message_member_array,  // message members
  temp_interface__msg__Temperature__rosidl_typesupport_introspection_c__Temperature_init_function,  // function to initialize message memory (memory has to be allocated)
  temp_interface__msg__Temperature__rosidl_typesupport_introspection_c__Temperature_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t temp_interface__msg__Temperature__rosidl_typesupport_introspection_c__Temperature_message_type_support_handle = {
  0,
  &temp_interface__msg__Temperature__rosidl_typesupport_introspection_c__Temperature_message_members,
  get_message_typesupport_handle_function,
  &temp_interface__msg__Temperature__get_type_hash,
  &temp_interface__msg__Temperature__get_type_description,
  &temp_interface__msg__Temperature__get_type_description_sources,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_temp_interface
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, temp_interface, msg, Temperature)() {
  temp_interface__msg__Temperature__rosidl_typesupport_introspection_c__Temperature_message_member_array[0].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, std_msgs, msg, Float32)();
  temp_interface__msg__Temperature__rosidl_typesupport_introspection_c__Temperature_message_member_array[1].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, std_msgs, msg, Int64)();
  temp_interface__msg__Temperature__rosidl_typesupport_introspection_c__Temperature_message_member_array[2].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, std_msgs, msg, String)();
  temp_interface__msg__Temperature__rosidl_typesupport_introspection_c__Temperature_message_member_array[3].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, std_msgs, msg, String)();
  if (!temp_interface__msg__Temperature__rosidl_typesupport_introspection_c__Temperature_message_type_support_handle.typesupport_identifier) {
    temp_interface__msg__Temperature__rosidl_typesupport_introspection_c__Temperature_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &temp_interface__msg__Temperature__rosidl_typesupport_introspection_c__Temperature_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif
