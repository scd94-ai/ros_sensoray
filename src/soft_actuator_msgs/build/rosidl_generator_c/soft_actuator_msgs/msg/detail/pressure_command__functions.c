// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from soft_actuator_msgs:msg/PressureCommand.idl
// generated code does not contain a copyright notice
#include "soft_actuator_msgs/msg/detail/pressure_command__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"


// Include directives for member types
// Member `header`
#include "std_msgs/msg/detail/header__functions.h"
// Member `session_id`
// Member `reason`
#include "rosidl_runtime_c/string_functions.h"
// Member `valid_for`
#include "builtin_interfaces/msg/detail/duration__functions.h"

bool
soft_actuator_msgs__msg__PressureCommand__init(soft_actuator_msgs__msg__PressureCommand * msg)
{
  if (!msg) {
    return false;
  }
  // header
  if (!std_msgs__msg__Header__init(&msg->header)) {
    soft_actuator_msgs__msg__PressureCommand__fini(msg);
    return false;
  }
  // session_id
  if (!rosidl_runtime_c__String__init(&msg->session_id)) {
    soft_actuator_msgs__msg__PressureCommand__fini(msg);
    return false;
  }
  // sequence
  // pressure_kpa
  // force_zero
  // valid_for
  if (!builtin_interfaces__msg__Duration__init(&msg->valid_for)) {
    soft_actuator_msgs__msg__PressureCommand__fini(msg);
    return false;
  }
  // reason
  if (!rosidl_runtime_c__String__init(&msg->reason)) {
    soft_actuator_msgs__msg__PressureCommand__fini(msg);
    return false;
  }
  return true;
}

void
soft_actuator_msgs__msg__PressureCommand__fini(soft_actuator_msgs__msg__PressureCommand * msg)
{
  if (!msg) {
    return;
  }
  // header
  std_msgs__msg__Header__fini(&msg->header);
  // session_id
  rosidl_runtime_c__String__fini(&msg->session_id);
  // sequence
  // pressure_kpa
  // force_zero
  // valid_for
  builtin_interfaces__msg__Duration__fini(&msg->valid_for);
  // reason
  rosidl_runtime_c__String__fini(&msg->reason);
}

bool
soft_actuator_msgs__msg__PressureCommand__are_equal(const soft_actuator_msgs__msg__PressureCommand * lhs, const soft_actuator_msgs__msg__PressureCommand * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // header
  if (!std_msgs__msg__Header__are_equal(
      &(lhs->header), &(rhs->header)))
  {
    return false;
  }
  // session_id
  if (!rosidl_runtime_c__String__are_equal(
      &(lhs->session_id), &(rhs->session_id)))
  {
    return false;
  }
  // sequence
  if (lhs->sequence != rhs->sequence) {
    return false;
  }
  // pressure_kpa
  for (size_t i = 0; i < 3; ++i) {
    if (lhs->pressure_kpa[i] != rhs->pressure_kpa[i]) {
      return false;
    }
  }
  // force_zero
  if (lhs->force_zero != rhs->force_zero) {
    return false;
  }
  // valid_for
  if (!builtin_interfaces__msg__Duration__are_equal(
      &(lhs->valid_for), &(rhs->valid_for)))
  {
    return false;
  }
  // reason
  if (!rosidl_runtime_c__String__are_equal(
      &(lhs->reason), &(rhs->reason)))
  {
    return false;
  }
  return true;
}

bool
soft_actuator_msgs__msg__PressureCommand__copy(
  const soft_actuator_msgs__msg__PressureCommand * input,
  soft_actuator_msgs__msg__PressureCommand * output)
{
  if (!input || !output) {
    return false;
  }
  // header
  if (!std_msgs__msg__Header__copy(
      &(input->header), &(output->header)))
  {
    return false;
  }
  // session_id
  if (!rosidl_runtime_c__String__copy(
      &(input->session_id), &(output->session_id)))
  {
    return false;
  }
  // sequence
  output->sequence = input->sequence;
  // pressure_kpa
  for (size_t i = 0; i < 3; ++i) {
    output->pressure_kpa[i] = input->pressure_kpa[i];
  }
  // force_zero
  output->force_zero = input->force_zero;
  // valid_for
  if (!builtin_interfaces__msg__Duration__copy(
      &(input->valid_for), &(output->valid_for)))
  {
    return false;
  }
  // reason
  if (!rosidl_runtime_c__String__copy(
      &(input->reason), &(output->reason)))
  {
    return false;
  }
  return true;
}

soft_actuator_msgs__msg__PressureCommand *
soft_actuator_msgs__msg__PressureCommand__create(void)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  soft_actuator_msgs__msg__PressureCommand * msg = (soft_actuator_msgs__msg__PressureCommand *)allocator.allocate(sizeof(soft_actuator_msgs__msg__PressureCommand), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(soft_actuator_msgs__msg__PressureCommand));
  bool success = soft_actuator_msgs__msg__PressureCommand__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
soft_actuator_msgs__msg__PressureCommand__destroy(soft_actuator_msgs__msg__PressureCommand * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    soft_actuator_msgs__msg__PressureCommand__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
soft_actuator_msgs__msg__PressureCommand__Sequence__init(soft_actuator_msgs__msg__PressureCommand__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  soft_actuator_msgs__msg__PressureCommand * data = NULL;

  if (size) {
    if (size > SIZE_MAX / sizeof(soft_actuator_msgs__msg__PressureCommand)) {
      return false;
    }
    data = (soft_actuator_msgs__msg__PressureCommand *)allocator.zero_allocate(size, sizeof(soft_actuator_msgs__msg__PressureCommand), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = soft_actuator_msgs__msg__PressureCommand__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        soft_actuator_msgs__msg__PressureCommand__fini(&data[i - 1]);
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
soft_actuator_msgs__msg__PressureCommand__Sequence__fini(soft_actuator_msgs__msg__PressureCommand__Sequence * array)
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
      soft_actuator_msgs__msg__PressureCommand__fini(&array->data[i]);
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

soft_actuator_msgs__msg__PressureCommand__Sequence *
soft_actuator_msgs__msg__PressureCommand__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  soft_actuator_msgs__msg__PressureCommand__Sequence * array = (soft_actuator_msgs__msg__PressureCommand__Sequence *)allocator.allocate(sizeof(soft_actuator_msgs__msg__PressureCommand__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = soft_actuator_msgs__msg__PressureCommand__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
soft_actuator_msgs__msg__PressureCommand__Sequence__destroy(soft_actuator_msgs__msg__PressureCommand__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    soft_actuator_msgs__msg__PressureCommand__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
soft_actuator_msgs__msg__PressureCommand__Sequence__are_equal(const soft_actuator_msgs__msg__PressureCommand__Sequence * lhs, const soft_actuator_msgs__msg__PressureCommand__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!soft_actuator_msgs__msg__PressureCommand__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
soft_actuator_msgs__msg__PressureCommand__Sequence__copy(
  const soft_actuator_msgs__msg__PressureCommand__Sequence * input,
  soft_actuator_msgs__msg__PressureCommand__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    if (input->size > SIZE_MAX / sizeof(soft_actuator_msgs__msg__PressureCommand)) {
      return false;
    }
    const size_t allocation_size =
      input->size * sizeof(soft_actuator_msgs__msg__PressureCommand);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    soft_actuator_msgs__msg__PressureCommand * data =
      (soft_actuator_msgs__msg__PressureCommand *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!soft_actuator_msgs__msg__PressureCommand__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          soft_actuator_msgs__msg__PressureCommand__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!soft_actuator_msgs__msg__PressureCommand__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
