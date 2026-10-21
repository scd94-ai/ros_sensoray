// generated from rosidl_generator_c/resource/idl__description.c.em
// with input from soft_actuator_msgs:msg/PressureState.idl
// generated code does not contain a copyright notice

#include "soft_actuator_msgs/msg/detail/pressure_state__functions.h"

ROSIDL_GENERATOR_C_PUBLIC_soft_actuator_msgs
const rosidl_type_hash_t *
soft_actuator_msgs__msg__PressureState__get_type_hash(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_type_hash_t hash = {1, {
      0x0f, 0x59, 0xa6, 0x3c, 0xee, 0x26, 0x4a, 0x67,
      0xf4, 0x80, 0x97, 0x7b, 0x7d, 0xd5, 0xf7, 0xb2,
      0xac, 0x67, 0x3a, 0x8d, 0x44, 0x52, 0x14, 0x0b,
      0x95, 0x26, 0xc7, 0x58, 0x1e, 0xcd, 0xc6, 0x80,
    }};
  return &hash;
}

#include <assert.h>
#include <string.h>

// Include directives for referenced types
#include "builtin_interfaces/msg/detail/time__functions.h"
#include "std_msgs/msg/detail/header__functions.h"

// Hashes for external referenced types
#ifndef NDEBUG
static const rosidl_type_hash_t builtin_interfaces__msg__Time__EXPECTED_HASH = {1, {
    0xb1, 0x06, 0x23, 0x5e, 0x25, 0xa4, 0xc5, 0xed,
    0x35, 0x09, 0x8a, 0xa0, 0xa6, 0x1a, 0x3e, 0xe9,
    0xc9, 0xb1, 0x8d, 0x19, 0x7f, 0x39, 0x8b, 0x0e,
    0x42, 0x06, 0xce, 0xa9, 0xac, 0xf9, 0xc1, 0x97,
  }};
static const rosidl_type_hash_t std_msgs__msg__Header__EXPECTED_HASH = {1, {
    0xf4, 0x9f, 0xb3, 0xae, 0x2c, 0xf0, 0x70, 0xf7,
    0x93, 0x64, 0x5f, 0xf7, 0x49, 0x68, 0x3a, 0xc6,
    0xb0, 0x62, 0x03, 0xe4, 0x1c, 0x89, 0x1e, 0x17,
    0x70, 0x1b, 0x1c, 0xb5, 0x97, 0xce, 0x6a, 0x01,
  }};
#endif

static char soft_actuator_msgs__msg__PressureState__TYPE_NAME[] = "soft_actuator_msgs/msg/PressureState";
static char builtin_interfaces__msg__Time__TYPE_NAME[] = "builtin_interfaces/msg/Time";
static char std_msgs__msg__Header__TYPE_NAME[] = "std_msgs/msg/Header";

// Define type names, field names, and default values
static char soft_actuator_msgs__msg__PressureState__FIELD_NAME__header[] = "header";
static char soft_actuator_msgs__msg__PressureState__FIELD_NAME__session_id[] = "session_id";
static char soft_actuator_msgs__msg__PressureState__FIELD_NAME__command_sequence[] = "command_sequence";
static char soft_actuator_msgs__msg__PressureState__FIELD_NAME__written_pressure_kpa[] = "written_pressure_kpa";
static char soft_actuator_msgs__msg__PressureState__FIELD_NAME__write_success[] = "write_success";
static char soft_actuator_msgs__msg__PressureState__FIELD_NAME__ready[] = "ready";
static char soft_actuator_msgs__msg__PressureState__FIELD_NAME__fault[] = "fault";

static rosidl_runtime_c__type_description__Field soft_actuator_msgs__msg__PressureState__FIELDS[] = {
  {
    {soft_actuator_msgs__msg__PressureState__FIELD_NAME__header, 6, 6},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_NESTED_TYPE,
      0,
      0,
      {std_msgs__msg__Header__TYPE_NAME, 19, 19},
    },
    {NULL, 0, 0},
  },
  {
    {soft_actuator_msgs__msg__PressureState__FIELD_NAME__session_id, 10, 10},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_STRING,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {soft_actuator_msgs__msg__PressureState__FIELD_NAME__command_sequence, 16, 16},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_UINT64,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {soft_actuator_msgs__msg__PressureState__FIELD_NAME__written_pressure_kpa, 20, 20},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_DOUBLE_ARRAY,
      3,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {soft_actuator_msgs__msg__PressureState__FIELD_NAME__write_success, 13, 13},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_BOOLEAN,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {soft_actuator_msgs__msg__PressureState__FIELD_NAME__ready, 5, 5},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_BOOLEAN,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {soft_actuator_msgs__msg__PressureState__FIELD_NAME__fault, 5, 5},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_STRING,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
};

static rosidl_runtime_c__type_description__IndividualTypeDescription soft_actuator_msgs__msg__PressureState__REFERENCED_TYPE_DESCRIPTIONS[] = {
  {
    {builtin_interfaces__msg__Time__TYPE_NAME, 27, 27},
    {NULL, 0, 0},
  },
  {
    {std_msgs__msg__Header__TYPE_NAME, 19, 19},
    {NULL, 0, 0},
  },
};

const rosidl_runtime_c__type_description__TypeDescription *
soft_actuator_msgs__msg__PressureState__get_type_description(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static bool constructed = false;
  static const rosidl_runtime_c__type_description__TypeDescription description = {
    {
      {soft_actuator_msgs__msg__PressureState__TYPE_NAME, 36, 36},
      {soft_actuator_msgs__msg__PressureState__FIELDS, 7, 7},
    },
    {soft_actuator_msgs__msg__PressureState__REFERENCED_TYPE_DESCRIPTIONS, 2, 2},
  };
  if (!constructed) {
    assert(0 == memcmp(&builtin_interfaces__msg__Time__EXPECTED_HASH, builtin_interfaces__msg__Time__get_type_hash(NULL), sizeof(rosidl_type_hash_t)));
    description.referenced_type_descriptions.data[0].fields = builtin_interfaces__msg__Time__get_type_description(NULL)->type_description.fields;
    assert(0 == memcmp(&std_msgs__msg__Header__EXPECTED_HASH, std_msgs__msg__Header__get_type_hash(NULL), sizeof(rosidl_type_hash_t)));
    description.referenced_type_descriptions.data[1].fields = std_msgs__msg__Header__get_type_description(NULL)->type_description.fields;
    constructed = true;
  }
  return &description;
}

static char toplevel_type_raw_source[] =
  "# Writer acknowledgement/status for one actuator.\n"
  "# header.stamp is the writer's ROS publication time for observation.\n"
  "# The controller uses the acknowledged command's local send time as a conservative\n"
  "# lower bound for write time; delayed/repeated ACKs never refresh an old command.\n"
  "std_msgs/Header header\n"
  "# Echo the session_id of the command acknowledged by this message.\n"
  "string session_id\n"
  "# Echo the sequence of the command acknowledged by this message.\n"
  "uint64 command_sequence\n"
  "# The three pressure commands actually written successfully to the board, in kPa.\n"
  "# These values are NOT measured chamber pressures and do not prove physical pressure response.\n"
  "# If write_success is false, this field must not update the controller's write history.\n"
  "float64[3] written_pressure_kpa\n"
  "# True only after the actual board write succeeds, never merely after ROS message receipt.\n"
  "bool write_success\n"
  "# True when the writer is ready to accept output commands.\n"
  "bool ready\n"
  "# Empty when no writer fault is active; otherwise a human-readable fault description.\n"
  "string fault";

static char msg_encoding[] = "msg";

// Define all individual source functions

const rosidl_runtime_c__type_description__TypeSource *
soft_actuator_msgs__msg__PressureState__get_individual_type_description_source(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static const rosidl_runtime_c__type_description__TypeSource source = {
    {soft_actuator_msgs__msg__PressureState__TYPE_NAME, 36, 36},
    {msg_encoding, 3, 3},
    {toplevel_type_raw_source, 1057, 1057},
  };
  return &source;
}

const rosidl_runtime_c__type_description__TypeSource__Sequence *
soft_actuator_msgs__msg__PressureState__get_type_description_sources(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_runtime_c__type_description__TypeSource sources[3];
  static const rosidl_runtime_c__type_description__TypeSource__Sequence source_sequence = {sources, 3, 3};
  static bool constructed = false;
  if (!constructed) {
    sources[0] = *soft_actuator_msgs__msg__PressureState__get_individual_type_description_source(NULL),
    sources[1] = *builtin_interfaces__msg__Time__get_individual_type_description_source(NULL);
    sources[2] = *std_msgs__msg__Header__get_individual_type_description_source(NULL);
    constructed = true;
  }
  return &source_sequence;
}
