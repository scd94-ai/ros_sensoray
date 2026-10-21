// generated from rosidl_generator_c/resource/idl__functions.h.em
// with input from soft_actuator_msgs:msg/PressureCommand.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "soft_actuator_msgs/msg/pressure_command.h"


#ifndef SOFT_ACTUATOR_MSGS__MSG__DETAIL__PRESSURE_COMMAND__FUNCTIONS_H_
#define SOFT_ACTUATOR_MSGS__MSG__DETAIL__PRESSURE_COMMAND__FUNCTIONS_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stdlib.h>

#include "rosidl_runtime_c/action_type_support_struct.h"
#include "rosidl_runtime_c/message_type_support_struct.h"
#include "rosidl_runtime_c/service_type_support_struct.h"
#include "rosidl_runtime_c/type_description/type_description__struct.h"
#include "rosidl_runtime_c/type_description/type_source__struct.h"
#include "rosidl_runtime_c/type_hash.h"
#include "rosidl_runtime_c/visibility_control.h"
#include "soft_actuator_msgs/msg/rosidl_generator_c__visibility_control.h"

#include "soft_actuator_msgs/msg/detail/pressure_command__struct.h"

/// Initialize msg/PressureCommand message.
/**
 * If the init function is called twice for the same message without
 * calling fini inbetween previously allocated memory will be leaked.
 * \param[in,out] msg The previously allocated message pointer.
 * Fields without a default value will not be initialized by this function.
 * You might want to call memset(msg, 0, sizeof(
 * soft_actuator_msgs__msg__PressureCommand
 * )) before or use
 * soft_actuator_msgs__msg__PressureCommand__create()
 * to allocate and initialize the message.
 * \return true if initialization was successful, otherwise false
 */
ROSIDL_GENERATOR_C_PUBLIC_soft_actuator_msgs
bool
soft_actuator_msgs__msg__PressureCommand__init(soft_actuator_msgs__msg__PressureCommand * msg);

/// Finalize msg/PressureCommand message.
/**
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_soft_actuator_msgs
void
soft_actuator_msgs__msg__PressureCommand__fini(soft_actuator_msgs__msg__PressureCommand * msg);

/// Create msg/PressureCommand message.
/**
 * It allocates the memory for the message, sets the memory to zero, and
 * calls
 * soft_actuator_msgs__msg__PressureCommand__init().
 * \return The pointer to the initialized message if successful,
 * otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_soft_actuator_msgs
soft_actuator_msgs__msg__PressureCommand *
soft_actuator_msgs__msg__PressureCommand__create(void);

/// Destroy msg/PressureCommand message.
/**
 * It calls
 * soft_actuator_msgs__msg__PressureCommand__fini()
 * and frees the memory of the message.
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_soft_actuator_msgs
void
soft_actuator_msgs__msg__PressureCommand__destroy(soft_actuator_msgs__msg__PressureCommand * msg);

/// Check for msg/PressureCommand message equality.
/**
 * \param[in] lhs The message on the left hand size of the equality operator.
 * \param[in] rhs The message on the right hand size of the equality operator.
 * \return true if messages are equal, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_soft_actuator_msgs
bool
soft_actuator_msgs__msg__PressureCommand__are_equal(const soft_actuator_msgs__msg__PressureCommand * lhs, const soft_actuator_msgs__msg__PressureCommand * rhs);

/// Copy a msg/PressureCommand message.
/**
 * This functions performs a deep copy, as opposed to the shallow copy that
 * plain assignment yields.
 *
 * \param[in] input The source message pointer.
 * \param[out] output The target message pointer, which must
 *   have been initialized before calling this function.
 * \return true if successful, or false if either pointer is null
 *   or memory allocation fails.
 */
ROSIDL_GENERATOR_C_PUBLIC_soft_actuator_msgs
bool
soft_actuator_msgs__msg__PressureCommand__copy(
  const soft_actuator_msgs__msg__PressureCommand * input,
  soft_actuator_msgs__msg__PressureCommand * output);

/// Retrieve pointer to the hash of the description of this type.
ROSIDL_GENERATOR_C_PUBLIC_soft_actuator_msgs
const rosidl_type_hash_t *
soft_actuator_msgs__msg__PressureCommand__get_type_hash(
  const rosidl_message_type_support_t * type_support);

/// Retrieve pointer to the description of this type.
ROSIDL_GENERATOR_C_PUBLIC_soft_actuator_msgs
const rosidl_runtime_c__type_description__TypeDescription *
soft_actuator_msgs__msg__PressureCommand__get_type_description(
  const rosidl_message_type_support_t * type_support);

/// Retrieve pointer to the single raw source text that defined this type.
ROSIDL_GENERATOR_C_PUBLIC_soft_actuator_msgs
const rosidl_runtime_c__type_description__TypeSource *
soft_actuator_msgs__msg__PressureCommand__get_individual_type_description_source(
  const rosidl_message_type_support_t * type_support);

/// Retrieve pointer to the recursive raw sources that defined the description of this type.
ROSIDL_GENERATOR_C_PUBLIC_soft_actuator_msgs
const rosidl_runtime_c__type_description__TypeSource__Sequence *
soft_actuator_msgs__msg__PressureCommand__get_type_description_sources(
  const rosidl_message_type_support_t * type_support);

/// Initialize array of msg/PressureCommand messages.
/**
 * It allocates the memory for the number of elements and calls
 * soft_actuator_msgs__msg__PressureCommand__init()
 * for each element of the array.
 * \param[in,out] array The allocated array pointer.
 * \param[in] size The size / capacity of the array.
 * \return true if initialization was successful, otherwise false
 * If the array pointer is valid and the size is zero it is guaranteed
 # to return true.
 */
ROSIDL_GENERATOR_C_PUBLIC_soft_actuator_msgs
bool
soft_actuator_msgs__msg__PressureCommand__Sequence__init(soft_actuator_msgs__msg__PressureCommand__Sequence * array, size_t size);

/// Finalize array of msg/PressureCommand messages.
/**
 * It calls
 * soft_actuator_msgs__msg__PressureCommand__fini()
 * for each element of the array and frees the memory for the number of
 * elements.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_soft_actuator_msgs
void
soft_actuator_msgs__msg__PressureCommand__Sequence__fini(soft_actuator_msgs__msg__PressureCommand__Sequence * array);

/// Create array of msg/PressureCommand messages.
/**
 * It allocates the memory for the array and calls
 * soft_actuator_msgs__msg__PressureCommand__Sequence__init().
 * \param[in] size The size / capacity of the array.
 * \return The pointer to the initialized array if successful, otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_soft_actuator_msgs
soft_actuator_msgs__msg__PressureCommand__Sequence *
soft_actuator_msgs__msg__PressureCommand__Sequence__create(size_t size);

/// Destroy array of msg/PressureCommand messages.
/**
 * It calls
 * soft_actuator_msgs__msg__PressureCommand__Sequence__fini()
 * on the array,
 * and frees the memory of the array.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_soft_actuator_msgs
void
soft_actuator_msgs__msg__PressureCommand__Sequence__destroy(soft_actuator_msgs__msg__PressureCommand__Sequence * array);

/// Check for msg/PressureCommand message array equality.
/**
 * \param[in] lhs The message array on the left hand size of the equality operator.
 * \param[in] rhs The message array on the right hand size of the equality operator.
 * \return true if message arrays are equal in size and content, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_soft_actuator_msgs
bool
soft_actuator_msgs__msg__PressureCommand__Sequence__are_equal(const soft_actuator_msgs__msg__PressureCommand__Sequence * lhs, const soft_actuator_msgs__msg__PressureCommand__Sequence * rhs);

/// Copy an array of msg/PressureCommand messages.
/**
 * This functions performs a deep copy, as opposed to the shallow copy that
 * plain assignment yields.
 *
 * \param[in] input The source array pointer.
 * \param[out] output The target array pointer, which must
 *   have been initialized before calling this function.
 * \return true if successful, or false if either pointer
 *   is null or memory allocation fails.
 */
ROSIDL_GENERATOR_C_PUBLIC_soft_actuator_msgs
bool
soft_actuator_msgs__msg__PressureCommand__Sequence__copy(
  const soft_actuator_msgs__msg__PressureCommand__Sequence * input,
  soft_actuator_msgs__msg__PressureCommand__Sequence * output);

#ifdef __cplusplus
}
#endif

#endif  // SOFT_ACTUATOR_MSGS__MSG__DETAIL__PRESSURE_COMMAND__FUNCTIONS_H_
