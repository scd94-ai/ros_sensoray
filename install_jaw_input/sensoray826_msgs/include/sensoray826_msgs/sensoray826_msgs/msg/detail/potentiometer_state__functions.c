// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from sensoray826_msgs:msg/PotentiometerState.idl
// generated code does not contain a copyright notice
#include "sensoray826_msgs/msg/detail/potentiometer_state__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"


// Include directives for member types
// Member `header`
#include "std_msgs/msg/detail/header__functions.h"
// Member `session_id`
#include "rosidl_runtime_c/string_functions.h"

bool
sensoray826_msgs__msg__PotentiometerState__init(sensoray826_msgs__msg__PotentiometerState * msg)
{
  if (!msg) {
    return false;
  }
  // header
  if (!std_msgs__msg__Header__init(&msg->header)) {
    sensoray826_msgs__msg__PotentiometerState__fini(msg);
    return false;
  }
  // session_id
  if (!rosidl_runtime_c__String__init(&msg->session_id)) {
    sensoray826_msgs__msg__PotentiometerState__fini(msg);
    return false;
  }
  // sequence
  // board
  // settling_us
  // adc_channels
  // adc_timestamps_us
  // voltage_v
  // valid
  // sdk_status
  // supply_valid
  // supply_voltage_v
  // supply_adc_timestamp_us
  return true;
}

void
sensoray826_msgs__msg__PotentiometerState__fini(sensoray826_msgs__msg__PotentiometerState * msg)
{
  if (!msg) {
    return;
  }
  // header
  std_msgs__msg__Header__fini(&msg->header);
  // session_id
  rosidl_runtime_c__String__fini(&msg->session_id);
  // sequence
  // board
  // settling_us
  // adc_channels
  // adc_timestamps_us
  // voltage_v
  // valid
  // sdk_status
  // supply_valid
  // supply_voltage_v
  // supply_adc_timestamp_us
}

bool
sensoray826_msgs__msg__PotentiometerState__are_equal(const sensoray826_msgs__msg__PotentiometerState * lhs, const sensoray826_msgs__msg__PotentiometerState * rhs)
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
  // board
  if (lhs->board != rhs->board) {
    return false;
  }
  // settling_us
  if (lhs->settling_us != rhs->settling_us) {
    return false;
  }
  // adc_channels
  for (size_t i = 0; i < 2; ++i) {
    if (lhs->adc_channels[i] != rhs->adc_channels[i]) {
      return false;
    }
  }
  // adc_timestamps_us
  for (size_t i = 0; i < 2; ++i) {
    if (lhs->adc_timestamps_us[i] != rhs->adc_timestamps_us[i]) {
      return false;
    }
  }
  // voltage_v
  for (size_t i = 0; i < 2; ++i) {
    if (lhs->voltage_v[i] != rhs->voltage_v[i]) {
      return false;
    }
  }
  // valid
  for (size_t i = 0; i < 2; ++i) {
    if (lhs->valid[i] != rhs->valid[i]) {
      return false;
    }
  }
  // sdk_status
  if (lhs->sdk_status != rhs->sdk_status) {
    return false;
  }
  // supply_valid
  if (lhs->supply_valid != rhs->supply_valid) {
    return false;
  }
  // supply_voltage_v
  if (lhs->supply_voltage_v != rhs->supply_voltage_v) {
    return false;
  }
  // supply_adc_timestamp_us
  if (lhs->supply_adc_timestamp_us != rhs->supply_adc_timestamp_us) {
    return false;
  }
  return true;
}

bool
sensoray826_msgs__msg__PotentiometerState__copy(
  const sensoray826_msgs__msg__PotentiometerState * input,
  sensoray826_msgs__msg__PotentiometerState * output)
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
  // board
  output->board = input->board;
  // settling_us
  output->settling_us = input->settling_us;
  // adc_channels
  for (size_t i = 0; i < 2; ++i) {
    output->adc_channels[i] = input->adc_channels[i];
  }
  // adc_timestamps_us
  for (size_t i = 0; i < 2; ++i) {
    output->adc_timestamps_us[i] = input->adc_timestamps_us[i];
  }
  // voltage_v
  for (size_t i = 0; i < 2; ++i) {
    output->voltage_v[i] = input->voltage_v[i];
  }
  // valid
  for (size_t i = 0; i < 2; ++i) {
    output->valid[i] = input->valid[i];
  }
  // sdk_status
  output->sdk_status = input->sdk_status;
  // supply_valid
  output->supply_valid = input->supply_valid;
  // supply_voltage_v
  output->supply_voltage_v = input->supply_voltage_v;
  // supply_adc_timestamp_us
  output->supply_adc_timestamp_us = input->supply_adc_timestamp_us;
  return true;
}

sensoray826_msgs__msg__PotentiometerState *
sensoray826_msgs__msg__PotentiometerState__create(void)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  sensoray826_msgs__msg__PotentiometerState * msg = (sensoray826_msgs__msg__PotentiometerState *)allocator.allocate(sizeof(sensoray826_msgs__msg__PotentiometerState), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(sensoray826_msgs__msg__PotentiometerState));
  bool success = sensoray826_msgs__msg__PotentiometerState__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
sensoray826_msgs__msg__PotentiometerState__destroy(sensoray826_msgs__msg__PotentiometerState * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    sensoray826_msgs__msg__PotentiometerState__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
sensoray826_msgs__msg__PotentiometerState__Sequence__init(sensoray826_msgs__msg__PotentiometerState__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  sensoray826_msgs__msg__PotentiometerState * data = NULL;

  if (size) {
    if (size > SIZE_MAX / sizeof(sensoray826_msgs__msg__PotentiometerState)) {
      return false;
    }
    data = (sensoray826_msgs__msg__PotentiometerState *)allocator.zero_allocate(size, sizeof(sensoray826_msgs__msg__PotentiometerState), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = sensoray826_msgs__msg__PotentiometerState__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        sensoray826_msgs__msg__PotentiometerState__fini(&data[i - 1]);
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
sensoray826_msgs__msg__PotentiometerState__Sequence__fini(sensoray826_msgs__msg__PotentiometerState__Sequence * array)
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
      sensoray826_msgs__msg__PotentiometerState__fini(&array->data[i]);
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

sensoray826_msgs__msg__PotentiometerState__Sequence *
sensoray826_msgs__msg__PotentiometerState__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  sensoray826_msgs__msg__PotentiometerState__Sequence * array = (sensoray826_msgs__msg__PotentiometerState__Sequence *)allocator.allocate(sizeof(sensoray826_msgs__msg__PotentiometerState__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = sensoray826_msgs__msg__PotentiometerState__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
sensoray826_msgs__msg__PotentiometerState__Sequence__destroy(sensoray826_msgs__msg__PotentiometerState__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    sensoray826_msgs__msg__PotentiometerState__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
sensoray826_msgs__msg__PotentiometerState__Sequence__are_equal(const sensoray826_msgs__msg__PotentiometerState__Sequence * lhs, const sensoray826_msgs__msg__PotentiometerState__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!sensoray826_msgs__msg__PotentiometerState__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
sensoray826_msgs__msg__PotentiometerState__Sequence__copy(
  const sensoray826_msgs__msg__PotentiometerState__Sequence * input,
  sensoray826_msgs__msg__PotentiometerState__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    if (input->size > SIZE_MAX / sizeof(sensoray826_msgs__msg__PotentiometerState)) {
      return false;
    }
    const size_t allocation_size =
      input->size * sizeof(sensoray826_msgs__msg__PotentiometerState);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    sensoray826_msgs__msg__PotentiometerState * data =
      (sensoray826_msgs__msg__PotentiometerState *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!sensoray826_msgs__msg__PotentiometerState__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          sensoray826_msgs__msg__PotentiometerState__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!sensoray826_msgs__msg__PotentiometerState__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
