// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from soft_actuator_msgs:msg/ControllerStatus.idl
// generated code does not contain a copyright notice
#include "soft_actuator_msgs/msg/detail/controller_status__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"


// Include directives for member types
// Member `header`
#include "std_msgs/msg/detail/header__functions.h"
// Member `session_id`
// Member `state`
// Member `requested_mode`
// Member `effective_mode`
// Member `feedback_reason`
// Member `contact_state`
#include "rosidl_runtime_c/string_functions.h"

bool
soft_actuator_msgs__msg__ControllerStatus__init(soft_actuator_msgs__msg__ControllerStatus * msg)
{
  if (!msg) {
    return false;
  }
  // header
  if (!std_msgs__msg__Header__init(&msg->header)) {
    soft_actuator_msgs__msg__ControllerStatus__fini(msg);
    return false;
  }
  // session_id
  if (!rosidl_runtime_c__String__init(&msg->session_id)) {
    soft_actuator_msgs__msg__ControllerStatus__fini(msg);
    return false;
  }
  // state
  if (!rosidl_runtime_c__String__init(&msg->state)) {
    soft_actuator_msgs__msg__ControllerStatus__fini(msg);
    return false;
  }
  // enabled
  // requested_mode
  if (!rosidl_runtime_c__String__init(&msg->requested_mode)) {
    soft_actuator_msgs__msg__ControllerStatus__fini(msg);
    return false;
  }
  // effective_mode
  if (!rosidl_runtime_c__String__init(&msg->effective_mode)) {
    soft_actuator_msgs__msg__ControllerStatus__fini(msg);
    return false;
  }
  // feedback_reason
  if (!rosidl_runtime_c__String__init(&msg->feedback_reason)) {
    soft_actuator_msgs__msg__ControllerStatus__fini(msg);
    return false;
  }
  // numeric_valid
  // pressure_limited
  // measured_error_valid
  // contact_state
  if (!rosidl_runtime_c__String__init(&msg->contact_state)) {
    soft_actuator_msgs__msg__ControllerStatus__fini(msg);
    return false;
  }
  // target_mm
  // predicted_mm
  // error_mm
  // requested_pressure_kpa
  // core_pressure_kpa
  // output_pressure_kpa
  // last_written_pressure_kpa
  // writer_fresh
  // feedback_sequence
  return true;
}

void
soft_actuator_msgs__msg__ControllerStatus__fini(soft_actuator_msgs__msg__ControllerStatus * msg)
{
  if (!msg) {
    return;
  }
  // header
  std_msgs__msg__Header__fini(&msg->header);
  // session_id
  rosidl_runtime_c__String__fini(&msg->session_id);
  // state
  rosidl_runtime_c__String__fini(&msg->state);
  // enabled
  // requested_mode
  rosidl_runtime_c__String__fini(&msg->requested_mode);
  // effective_mode
  rosidl_runtime_c__String__fini(&msg->effective_mode);
  // feedback_reason
  rosidl_runtime_c__String__fini(&msg->feedback_reason);
  // numeric_valid
  // pressure_limited
  // measured_error_valid
  // contact_state
  rosidl_runtime_c__String__fini(&msg->contact_state);
  // target_mm
  // predicted_mm
  // error_mm
  // requested_pressure_kpa
  // core_pressure_kpa
  // output_pressure_kpa
  // last_written_pressure_kpa
  // writer_fresh
  // feedback_sequence
}

bool
soft_actuator_msgs__msg__ControllerStatus__are_equal(const soft_actuator_msgs__msg__ControllerStatus * lhs, const soft_actuator_msgs__msg__ControllerStatus * rhs)
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
  // state
  if (!rosidl_runtime_c__String__are_equal(
      &(lhs->state), &(rhs->state)))
  {
    return false;
  }
  // enabled
  if (lhs->enabled != rhs->enabled) {
    return false;
  }
  // requested_mode
  if (!rosidl_runtime_c__String__are_equal(
      &(lhs->requested_mode), &(rhs->requested_mode)))
  {
    return false;
  }
  // effective_mode
  if (!rosidl_runtime_c__String__are_equal(
      &(lhs->effective_mode), &(rhs->effective_mode)))
  {
    return false;
  }
  // feedback_reason
  if (!rosidl_runtime_c__String__are_equal(
      &(lhs->feedback_reason), &(rhs->feedback_reason)))
  {
    return false;
  }
  // numeric_valid
  if (lhs->numeric_valid != rhs->numeric_valid) {
    return false;
  }
  // pressure_limited
  if (lhs->pressure_limited != rhs->pressure_limited) {
    return false;
  }
  // measured_error_valid
  if (lhs->measured_error_valid != rhs->measured_error_valid) {
    return false;
  }
  // contact_state
  if (!rosidl_runtime_c__String__are_equal(
      &(lhs->contact_state), &(rhs->contact_state)))
  {
    return false;
  }
  // target_mm
  for (size_t i = 0; i < 3; ++i) {
    if (lhs->target_mm[i] != rhs->target_mm[i]) {
      return false;
    }
  }
  // predicted_mm
  for (size_t i = 0; i < 3; ++i) {
    if (lhs->predicted_mm[i] != rhs->predicted_mm[i]) {
      return false;
    }
  }
  // error_mm
  for (size_t i = 0; i < 3; ++i) {
    if (lhs->error_mm[i] != rhs->error_mm[i]) {
      return false;
    }
  }
  // requested_pressure_kpa
  for (size_t i = 0; i < 3; ++i) {
    if (lhs->requested_pressure_kpa[i] != rhs->requested_pressure_kpa[i]) {
      return false;
    }
  }
  // core_pressure_kpa
  for (size_t i = 0; i < 3; ++i) {
    if (lhs->core_pressure_kpa[i] != rhs->core_pressure_kpa[i]) {
      return false;
    }
  }
  // output_pressure_kpa
  for (size_t i = 0; i < 3; ++i) {
    if (lhs->output_pressure_kpa[i] != rhs->output_pressure_kpa[i]) {
      return false;
    }
  }
  // last_written_pressure_kpa
  for (size_t i = 0; i < 3; ++i) {
    if (lhs->last_written_pressure_kpa[i] != rhs->last_written_pressure_kpa[i]) {
      return false;
    }
  }
  // writer_fresh
  if (lhs->writer_fresh != rhs->writer_fresh) {
    return false;
  }
  // feedback_sequence
  if (lhs->feedback_sequence != rhs->feedback_sequence) {
    return false;
  }
  return true;
}

bool
soft_actuator_msgs__msg__ControllerStatus__copy(
  const soft_actuator_msgs__msg__ControllerStatus * input,
  soft_actuator_msgs__msg__ControllerStatus * output)
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
  // state
  if (!rosidl_runtime_c__String__copy(
      &(input->state), &(output->state)))
  {
    return false;
  }
  // enabled
  output->enabled = input->enabled;
  // requested_mode
  if (!rosidl_runtime_c__String__copy(
      &(input->requested_mode), &(output->requested_mode)))
  {
    return false;
  }
  // effective_mode
  if (!rosidl_runtime_c__String__copy(
      &(input->effective_mode), &(output->effective_mode)))
  {
    return false;
  }
  // feedback_reason
  if (!rosidl_runtime_c__String__copy(
      &(input->feedback_reason), &(output->feedback_reason)))
  {
    return false;
  }
  // numeric_valid
  output->numeric_valid = input->numeric_valid;
  // pressure_limited
  output->pressure_limited = input->pressure_limited;
  // measured_error_valid
  output->measured_error_valid = input->measured_error_valid;
  // contact_state
  if (!rosidl_runtime_c__String__copy(
      &(input->contact_state), &(output->contact_state)))
  {
    return false;
  }
  // target_mm
  for (size_t i = 0; i < 3; ++i) {
    output->target_mm[i] = input->target_mm[i];
  }
  // predicted_mm
  for (size_t i = 0; i < 3; ++i) {
    output->predicted_mm[i] = input->predicted_mm[i];
  }
  // error_mm
  for (size_t i = 0; i < 3; ++i) {
    output->error_mm[i] = input->error_mm[i];
  }
  // requested_pressure_kpa
  for (size_t i = 0; i < 3; ++i) {
    output->requested_pressure_kpa[i] = input->requested_pressure_kpa[i];
  }
  // core_pressure_kpa
  for (size_t i = 0; i < 3; ++i) {
    output->core_pressure_kpa[i] = input->core_pressure_kpa[i];
  }
  // output_pressure_kpa
  for (size_t i = 0; i < 3; ++i) {
    output->output_pressure_kpa[i] = input->output_pressure_kpa[i];
  }
  // last_written_pressure_kpa
  for (size_t i = 0; i < 3; ++i) {
    output->last_written_pressure_kpa[i] = input->last_written_pressure_kpa[i];
  }
  // writer_fresh
  output->writer_fresh = input->writer_fresh;
  // feedback_sequence
  output->feedback_sequence = input->feedback_sequence;
  return true;
}

soft_actuator_msgs__msg__ControllerStatus *
soft_actuator_msgs__msg__ControllerStatus__create(void)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  soft_actuator_msgs__msg__ControllerStatus * msg = (soft_actuator_msgs__msg__ControllerStatus *)allocator.allocate(sizeof(soft_actuator_msgs__msg__ControllerStatus), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(soft_actuator_msgs__msg__ControllerStatus));
  bool success = soft_actuator_msgs__msg__ControllerStatus__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
soft_actuator_msgs__msg__ControllerStatus__destroy(soft_actuator_msgs__msg__ControllerStatus * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    soft_actuator_msgs__msg__ControllerStatus__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
soft_actuator_msgs__msg__ControllerStatus__Sequence__init(soft_actuator_msgs__msg__ControllerStatus__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  soft_actuator_msgs__msg__ControllerStatus * data = NULL;

  if (size) {
    if (size > SIZE_MAX / sizeof(soft_actuator_msgs__msg__ControllerStatus)) {
      return false;
    }
    data = (soft_actuator_msgs__msg__ControllerStatus *)allocator.zero_allocate(size, sizeof(soft_actuator_msgs__msg__ControllerStatus), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = soft_actuator_msgs__msg__ControllerStatus__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        soft_actuator_msgs__msg__ControllerStatus__fini(&data[i - 1]);
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
soft_actuator_msgs__msg__ControllerStatus__Sequence__fini(soft_actuator_msgs__msg__ControllerStatus__Sequence * array)
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
      soft_actuator_msgs__msg__ControllerStatus__fini(&array->data[i]);
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

soft_actuator_msgs__msg__ControllerStatus__Sequence *
soft_actuator_msgs__msg__ControllerStatus__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  soft_actuator_msgs__msg__ControllerStatus__Sequence * array = (soft_actuator_msgs__msg__ControllerStatus__Sequence *)allocator.allocate(sizeof(soft_actuator_msgs__msg__ControllerStatus__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = soft_actuator_msgs__msg__ControllerStatus__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
soft_actuator_msgs__msg__ControllerStatus__Sequence__destroy(soft_actuator_msgs__msg__ControllerStatus__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    soft_actuator_msgs__msg__ControllerStatus__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
soft_actuator_msgs__msg__ControllerStatus__Sequence__are_equal(const soft_actuator_msgs__msg__ControllerStatus__Sequence * lhs, const soft_actuator_msgs__msg__ControllerStatus__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!soft_actuator_msgs__msg__ControllerStatus__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
soft_actuator_msgs__msg__ControllerStatus__Sequence__copy(
  const soft_actuator_msgs__msg__ControllerStatus__Sequence * input,
  soft_actuator_msgs__msg__ControllerStatus__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    if (input->size > SIZE_MAX / sizeof(soft_actuator_msgs__msg__ControllerStatus)) {
      return false;
    }
    const size_t allocation_size =
      input->size * sizeof(soft_actuator_msgs__msg__ControllerStatus);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    soft_actuator_msgs__msg__ControllerStatus * data =
      (soft_actuator_msgs__msg__ControllerStatus *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!soft_actuator_msgs__msg__ControllerStatus__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          soft_actuator_msgs__msg__ControllerStatus__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!soft_actuator_msgs__msg__ControllerStatus__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
