// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from sensoray826_msgs:msg/PotentiometerState.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "sensoray826_msgs/msg/potentiometer_state.h"


#ifndef SENSORAY826_MSGS__MSG__DETAIL__POTENTIOMETER_STATE__STRUCT_H_
#define SENSORAY826_MSGS__MSG__DETAIL__POTENTIOMETER_STATE__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>

// Constants defined in the message

// Include directives for member types
// Member 'header'
#include "std_msgs/msg/detail/header__struct.h"
// Member 'session_id'
#include "rosidl_runtime_c/string.h"

/// Struct defined in msg/PotentiometerState in the package sensoray826_msgs.
/**
  * Raw ADC capture. Header and sequence identify acquisition, never publication.
 */
typedef struct sensoray826_msgs__msg__PotentiometerState
{
  std_msgs__msg__Header header;
  rosidl_runtime_c__String session_id;
  uint64_t sequence;
  uint8_t board;
  uint32_t settling_us;
  uint8_t adc_channels[2];
  uint32_t adc_timestamps_us[2];
  double voltage_v[2];
  bool valid[2];
  int32_t sdk_status;
  bool supply_valid;
  double supply_voltage_v;
  uint32_t supply_adc_timestamp_us;
} sensoray826_msgs__msg__PotentiometerState;

// Struct for a sequence of sensoray826_msgs__msg__PotentiometerState.
typedef struct sensoray826_msgs__msg__PotentiometerState__Sequence
{
  sensoray826_msgs__msg__PotentiometerState * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} sensoray826_msgs__msg__PotentiometerState__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // SENSORAY826_MSGS__MSG__DETAIL__POTENTIOMETER_STATE__STRUCT_H_
