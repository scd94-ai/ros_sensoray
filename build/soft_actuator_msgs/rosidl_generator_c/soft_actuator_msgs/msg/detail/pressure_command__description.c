// generated from rosidl_generator_c/resource/idl__description.c.em
// with input from soft_actuator_msgs:msg/PressureCommand.idl
// generated code does not contain a copyright notice

#include "soft_actuator_msgs/msg/detail/pressure_command__functions.h"

ROSIDL_GENERATOR_C_PUBLIC_soft_actuator_msgs
const rosidl_type_hash_t *
soft_actuator_msgs__msg__PressureCommand__get_type_hash(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_type_hash_t hash = {1, {
      0x8d, 0x93, 0x29, 0x5c, 0x42, 0x5c, 0x8f, 0x9b,
      0x8e, 0xb4, 0xa9, 0xad, 0xc7, 0xf2, 0x4c, 0x03,
      0x43, 0xa4, 0xec, 0xa5, 0x10, 0x73, 0xa7, 0xe7,
      0x98, 0xa6, 0x2d, 0xae, 0x60, 0x9d, 0x6a, 0x0b,
    }};
  return &hash;
}

#include <assert.h>
#include <string.h>

// Include directives for referenced types
#include "std_msgs/msg/detail/header__functions.h"
#include "builtin_interfaces/msg/detail/time__functions.h"
#include "builtin_interfaces/msg/detail/duration__functions.h"

// Hashes for external referenced types
#ifndef NDEBUG
static const rosidl_type_hash_t builtin_interfaces__msg__Duration__EXPECTED_HASH = {1, {
    0xe8, 0xd0, 0x09, 0xf6, 0x59, 0x81, 0x6f, 0x75,
    0x8b, 0x75, 0x33, 0x4e, 0xe1, 0xa9, 0xca, 0x5b,
    0x5c, 0x0b, 0x85, 0x98, 0x43, 0x26, 0x1f, 0x14,
    0xc7, 0xf9, 0x37, 0x34, 0x95, 0x99, 0xd9, 0x3b,
  }};
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

static char soft_actuator_msgs__msg__PressureCommand__TYPE_NAME[] = "soft_actuator_msgs/msg/PressureCommand";
static char builtin_interfaces__msg__Duration__TYPE_NAME[] = "builtin_interfaces/msg/Duration";
static char builtin_interfaces__msg__Time__TYPE_NAME[] = "builtin_interfaces/msg/Time";
static char std_msgs__msg__Header__TYPE_NAME[] = "std_msgs/msg/Header";

// Define type names, field names, and default values
static char soft_actuator_msgs__msg__PressureCommand__FIELD_NAME__header[] = "header";
static char soft_actuator_msgs__msg__PressureCommand__FIELD_NAME__session_id[] = "session_id";
static char soft_actuator_msgs__msg__PressureCommand__FIELD_NAME__sequence[] = "sequence";
static char soft_actuator_msgs__msg__PressureCommand__FIELD_NAME__pressure_kpa[] = "pressure_kpa";
static char soft_actuator_msgs__msg__PressureCommand__FIELD_NAME__force_zero[] = "force_zero";
static char soft_actuator_msgs__msg__PressureCommand__FIELD_NAME__valid_for[] = "valid_for";
static char soft_actuator_msgs__msg__PressureCommand__FIELD_NAME__reason[] = "reason";

static rosidl_runtime_c__type_description__Field soft_actuator_msgs__msg__PressureCommand__FIELDS[] = {
  {
    {soft_actuator_msgs__msg__PressureCommand__FIELD_NAME__header, 6, 6},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_NESTED_TYPE,
      0,
      0,
      {std_msgs__msg__Header__TYPE_NAME, 19, 19},
    },
    {NULL, 0, 0},
  },
  {
    {soft_actuator_msgs__msg__PressureCommand__FIELD_NAME__session_id, 10, 10},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_STRING,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {soft_actuator_msgs__msg__PressureCommand__FIELD_NAME__sequence, 8, 8},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_UINT64,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {soft_actuator_msgs__msg__PressureCommand__FIELD_NAME__pressure_kpa, 12, 12},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_DOUBLE_ARRAY,
      3,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {soft_actuator_msgs__msg__PressureCommand__FIELD_NAME__force_zero, 10, 10},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_BOOLEAN,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {soft_actuator_msgs__msg__PressureCommand__FIELD_NAME__valid_for, 9, 9},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_NESTED_TYPE,
      0,
      0,
      {builtin_interfaces__msg__Duration__TYPE_NAME, 31, 31},
    },
    {NULL, 0, 0},
  },
  {
    {soft_actuator_msgs__msg__PressureCommand__FIELD_NAME__reason, 6, 6},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_STRING,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
};

static rosidl_runtime_c__type_description__IndividualTypeDescription soft_actuator_msgs__msg__PressureCommand__REFERENCED_TYPE_DESCRIPTIONS[] = {
  {
    {builtin_interfaces__msg__Duration__TYPE_NAME, 31, 31},
    {NULL, 0, 0},
  },
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
soft_actuator_msgs__msg__PressureCommand__get_type_description(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static bool constructed = false;
  static const rosidl_runtime_c__type_description__TypeDescription description = {
    {
      {soft_actuator_msgs__msg__PressureCommand__TYPE_NAME, 38, 38},
      {soft_actuator_msgs__msg__PressureCommand__FIELDS, 7, 7},
    },
    {soft_actuator_msgs__msg__PressureCommand__REFERENCED_TYPE_DESCRIPTIONS, 3, 3},
  };
  if (!constructed) {
    assert(0 == memcmp(&builtin_interfaces__msg__Duration__EXPECTED_HASH, builtin_interfaces__msg__Duration__get_type_hash(NULL), sizeof(rosidl_type_hash_t)));
    description.referenced_type_descriptions.data[0].fields = builtin_interfaces__msg__Duration__get_type_description(NULL)->type_description.fields;
    assert(0 == memcmp(&builtin_interfaces__msg__Time__EXPECTED_HASH, builtin_interfaces__msg__Time__get_type_hash(NULL), sizeof(rosidl_type_hash_t)));
    description.referenced_type_descriptions.data[1].fields = builtin_interfaces__msg__Time__get_type_description(NULL)->type_description.fields;
    assert(0 == memcmp(&std_msgs__msg__Header__EXPECTED_HASH, std_msgs__msg__Header__get_type_hash(NULL), sizeof(rosidl_type_hash_t)));
    description.referenced_type_descriptions.data[2].fields = std_msgs__msg__Header__get_type_description(NULL)->type_description.fields;
    constructed = true;
  }
  return &description;
}

static char toplevel_type_raw_source[] =
  "# One three-channel pressure command for one actuator.\n"
  "# header.stamp is ROS publication time, not a core monotonic timestamp.\n"
  "std_msgs/Header header\n"
  "# Identifies one controller process session; reject acknowledgements from other sessions.\n"
  "string session_id\n"
  "# Increases within this session. A writer must acknowledge the exact command it wrote.\n"
  "uint64 sequence\n"
  "# Requested channel pressures [channel 1, channel 2, channel 3], in kPa.\n"
  "float64[3] pressure_kpa\n"
  "# Request the writer's emergency-zero path, bypassing ordinary slew/hold policies.\n"
  "bool force_zero\n"
  "# Maximum command validity duration; the writer must enforce command expiry/watchdog.\n"
  "builtin_interfaces/Duration valid_for\n"
  "# Human-readable command purpose or reason, not a machine-readable status code.\n"
  "string reason";

static char msg_encoding[] = "msg";

// Define all individual source functions

const rosidl_runtime_c__type_description__TypeSource *
soft_actuator_msgs__msg__PressureCommand__get_individual_type_description_source(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static const rosidl_runtime_c__type_description__TypeSource source = {
    {soft_actuator_msgs__msg__PressureCommand__TYPE_NAME, 38, 38},
    {msg_encoding, 3, 3},
    {toplevel_type_raw_source, 775, 775},
  };
  return &source;
}

const rosidl_runtime_c__type_description__TypeSource__Sequence *
soft_actuator_msgs__msg__PressureCommand__get_type_description_sources(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_runtime_c__type_description__TypeSource sources[4];
  static const rosidl_runtime_c__type_description__TypeSource__Sequence source_sequence = {sources, 4, 4};
  static bool constructed = false;
  if (!constructed) {
    sources[0] = *soft_actuator_msgs__msg__PressureCommand__get_individual_type_description_source(NULL),
    sources[1] = *builtin_interfaces__msg__Duration__get_individual_type_description_source(NULL);
    sources[2] = *builtin_interfaces__msg__Time__get_individual_type_description_source(NULL);
    sources[3] = *std_msgs__msg__Header__get_individual_type_description_source(NULL);
    constructed = true;
  }
  return &source_sequence;
}
