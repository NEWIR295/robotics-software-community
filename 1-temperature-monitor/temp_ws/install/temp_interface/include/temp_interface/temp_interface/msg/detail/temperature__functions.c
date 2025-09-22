// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from temp_interface:msg/Temperature.idl
// generated code does not contain a copyright notice
#include "temp_interface/msg/detail/temperature__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"


// Include directives for member types
// Member `value`
#include "std_msgs/msg/detail/float32__functions.h"
// Member `timestamp`
#include "builtin_interfaces/msg/detail/time__functions.h"
// Member `sensor_id`
// Member `unit`
#include "std_msgs/msg/detail/string__functions.h"

bool
temp_interface__msg__Temperature__init(temp_interface__msg__Temperature * msg)
{
  if (!msg) {
    return false;
  }
  // value
  if (!std_msgs__msg__Float32__init(&msg->value)) {
    temp_interface__msg__Temperature__fini(msg);
    return false;
  }
  // timestamp
  if (!builtin_interfaces__msg__Time__init(&msg->timestamp)) {
    temp_interface__msg__Temperature__fini(msg);
    return false;
  }
  // sensor_id
  if (!std_msgs__msg__String__init(&msg->sensor_id)) {
    temp_interface__msg__Temperature__fini(msg);
    return false;
  }
  // unit
  if (!std_msgs__msg__String__init(&msg->unit)) {
    temp_interface__msg__Temperature__fini(msg);
    return false;
  }
  return true;
}

void
temp_interface__msg__Temperature__fini(temp_interface__msg__Temperature * msg)
{
  if (!msg) {
    return;
  }
  // value
  std_msgs__msg__Float32__fini(&msg->value);
  // timestamp
  builtin_interfaces__msg__Time__fini(&msg->timestamp);
  // sensor_id
  std_msgs__msg__String__fini(&msg->sensor_id);
  // unit
  std_msgs__msg__String__fini(&msg->unit);
}

bool
temp_interface__msg__Temperature__are_equal(const temp_interface__msg__Temperature * lhs, const temp_interface__msg__Temperature * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // value
  if (!std_msgs__msg__Float32__are_equal(
      &(lhs->value), &(rhs->value)))
  {
    return false;
  }
  // timestamp
  if (!builtin_interfaces__msg__Time__are_equal(
      &(lhs->timestamp), &(rhs->timestamp)))
  {
    return false;
  }
  // sensor_id
  if (!std_msgs__msg__String__are_equal(
      &(lhs->sensor_id), &(rhs->sensor_id)))
  {
    return false;
  }
  // unit
  if (!std_msgs__msg__String__are_equal(
      &(lhs->unit), &(rhs->unit)))
  {
    return false;
  }
  return true;
}

bool
temp_interface__msg__Temperature__copy(
  const temp_interface__msg__Temperature * input,
  temp_interface__msg__Temperature * output)
{
  if (!input || !output) {
    return false;
  }
  // value
  if (!std_msgs__msg__Float32__copy(
      &(input->value), &(output->value)))
  {
    return false;
  }
  // timestamp
  if (!builtin_interfaces__msg__Time__copy(
      &(input->timestamp), &(output->timestamp)))
  {
    return false;
  }
  // sensor_id
  if (!std_msgs__msg__String__copy(
      &(input->sensor_id), &(output->sensor_id)))
  {
    return false;
  }
  // unit
  if (!std_msgs__msg__String__copy(
      &(input->unit), &(output->unit)))
  {
    return false;
  }
  return true;
}

temp_interface__msg__Temperature *
temp_interface__msg__Temperature__create(void)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  temp_interface__msg__Temperature * msg = (temp_interface__msg__Temperature *)allocator.allocate(sizeof(temp_interface__msg__Temperature), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(temp_interface__msg__Temperature));
  bool success = temp_interface__msg__Temperature__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
temp_interface__msg__Temperature__destroy(temp_interface__msg__Temperature * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    temp_interface__msg__Temperature__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
temp_interface__msg__Temperature__Sequence__init(temp_interface__msg__Temperature__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  temp_interface__msg__Temperature * data = NULL;

  if (size) {
    data = (temp_interface__msg__Temperature *)allocator.zero_allocate(size, sizeof(temp_interface__msg__Temperature), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = temp_interface__msg__Temperature__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        temp_interface__msg__Temperature__fini(&data[i - 1]);
      }
      allocator.deallocate(data, allocator.state);
      return false;
    }
  }
  array->data = data;
  array->size = size;
  array->capacity = size;
  return true;
}

void
temp_interface__msg__Temperature__Sequence__fini(temp_interface__msg__Temperature__Sequence * array)
{
  if (!array) {
    return;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();

  if (array->data) {
    // ensure that data and capacity values are consistent
    assert(array->capacity > 0);
    // finalize all array elements
    for (size_t i = 0; i < array->capacity; ++i) {
      temp_interface__msg__Temperature__fini(&array->data[i]);
    }
    allocator.deallocate(array->data, allocator.state);
    array->data = NULL;
    array->size = 0;
    array->capacity = 0;
  } else {
    // ensure that data, size, and capacity values are consistent
    assert(0 == array->size);
    assert(0 == array->capacity);
  }
}

temp_interface__msg__Temperature__Sequence *
temp_interface__msg__Temperature__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  temp_interface__msg__Temperature__Sequence * array = (temp_interface__msg__Temperature__Sequence *)allocator.allocate(sizeof(temp_interface__msg__Temperature__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = temp_interface__msg__Temperature__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
temp_interface__msg__Temperature__Sequence__destroy(temp_interface__msg__Temperature__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    temp_interface__msg__Temperature__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
temp_interface__msg__Temperature__Sequence__are_equal(const temp_interface__msg__Temperature__Sequence * lhs, const temp_interface__msg__Temperature__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!temp_interface__msg__Temperature__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
temp_interface__msg__Temperature__Sequence__copy(
  const temp_interface__msg__Temperature__Sequence * input,
  temp_interface__msg__Temperature__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(temp_interface__msg__Temperature);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    temp_interface__msg__Temperature * data =
      (temp_interface__msg__Temperature *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!temp_interface__msg__Temperature__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          temp_interface__msg__Temperature__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!temp_interface__msg__Temperature__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
