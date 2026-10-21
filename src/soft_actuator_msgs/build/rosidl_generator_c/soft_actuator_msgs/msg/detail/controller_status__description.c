// generated from rosidl_generator_c/resource/idl__description.c.em
// with input from soft_actuator_msgs:msg/ControllerStatus.idl
// generated code does not contain a copyright notice

#include "soft_actuator_msgs/msg/detail/controller_status__functions.h"

ROSIDL_GENERATOR_C_PUBLIC_soft_actuator_msgs
const rosidl_type_hash_t *
soft_actuator_msgs__msg__ControllerStatus__get_type_hash(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_type_hash_t hash = {1, {
      0x2b, 0x1d, 0xa8, 0x11, 0x82, 0x26, 0x2e, 0xe1,
      0xac, 0x23, 0x38, 0x46, 0x0e, 0xd0, 0xc8, 0x0f,
      0x24, 0xee, 0x21, 0x22, 0x2e, 0xb8, 0x3c, 0x57,
      0x52, 0x44, 0x18, 0xea, 0x40, 0xfb, 0x71, 0x4b,
    }};
  return &hash;
}

#include <assert.h>
#include <string.h>

// Include directives for referenced types
#include "std_msgs/msg/detail/header__functions.h"
#include "builtin_interfaces/msg/detail/time__functions.h"

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

static char soft_actuator_msgs__msg__ControllerStatus__TYPE_NAME[] = "soft_actuator_msgs/msg/ControllerStatus";
static char builtin_interfaces__msg__Time__TYPE_NAME[] = "builtin_interfaces/msg/Time";
static char std_msgs__msg__Header__TYPE_NAME[] = "std_msgs/msg/Header";

// Define type names, field names, and default values
static char soft_actuator_msgs__msg__ControllerStatus__FIELD_NAME__header[] = "header";
static char soft_actuator_msgs__msg__ControllerStatus__FIELD_NAME__session_id[] = "session_id";
static char soft_actuator_msgs__msg__ControllerStatus__FIELD_NAME__state[] = "state";
static char soft_actuator_msgs__msg__ControllerStatus__FIELD_NAME__enabled[] = "enabled";
static char soft_actuator_msgs__msg__ControllerStatus__FIELD_NAME__requested_mode[] = "requested_mode";
static char soft_actuator_msgs__msg__ControllerStatus__FIELD_NAME__effective_mode[] = "effective_mode";
static char soft_actuator_msgs__msg__ControllerStatus__FIELD_NAME__feedback_reason[] = "feedback_reason";
static char soft_actuator_msgs__msg__ControllerStatus__FIELD_NAME__numeric_valid[] = "numeric_valid";
static char soft_actuator_msgs__msg__ControllerStatus__FIELD_NAME__pressure_limited[] = "pressure_limited";
static char soft_actuator_msgs__msg__ControllerStatus__FIELD_NAME__measured_error_valid[] = "measured_error_valid";
static char soft_actuator_msgs__msg__ControllerStatus__FIELD_NAME__contact_state[] = "contact_state";
static char soft_actuator_msgs__msg__ControllerStatus__FIELD_NAME__target_mm[] = "target_mm";
static char soft_actuator_msgs__msg__ControllerStatus__FIELD_NAME__predicted_mm[] = "predicted_mm";
static char soft_actuator_msgs__msg__ControllerStatus__FIELD_NAME__error_mm[] = "error_mm";
static char soft_actuator_msgs__msg__ControllerStatus__FIELD_NAME__requested_pressure_kpa[] = "requested_pressure_kpa";
static char soft_actuator_msgs__msg__ControllerStatus__FIELD_NAME__core_pressure_kpa[] = "core_pressure_kpa";
static char soft_actuator_msgs__msg__ControllerStatus__FIELD_NAME__output_pressure_kpa[] = "output_pressure_kpa";
static char soft_actuator_msgs__msg__ControllerStatus__FIELD_NAME__last_written_pressure_kpa[] = "last_written_pressure_kpa";
static char soft_actuator_msgs__msg__ControllerStatus__FIELD_NAME__writer_fresh[] = "writer_fresh";
static char soft_actuator_msgs__msg__ControllerStatus__FIELD_NAME__feedback_sequence[] = "feedback_sequence";

static rosidl_runtime_c__type_description__Field soft_actuator_msgs__msg__ControllerStatus__FIELDS[] = {
  {
    {soft_actuator_msgs__msg__ControllerStatus__FIELD_NAME__header, 6, 6},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_NESTED_TYPE,
      0,
      0,
      {std_msgs__msg__Header__TYPE_NAME, 19, 19},
    },
    {NULL, 0, 0},
  },
  {
    {soft_actuator_msgs__msg__ControllerStatus__FIELD_NAME__session_id, 10, 10},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_STRING,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {soft_actuator_msgs__msg__ControllerStatus__FIELD_NAME__state, 5, 5},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_STRING,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {soft_actuator_msgs__msg__ControllerStatus__FIELD_NAME__enabled, 7, 7},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_BOOLEAN,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {soft_actuator_msgs__msg__ControllerStatus__FIELD_NAME__requested_mode, 14, 14},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_STRING,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {soft_actuator_msgs__msg__ControllerStatus__FIELD_NAME__effective_mode, 14, 14},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_STRING,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {soft_actuator_msgs__msg__ControllerStatus__FIELD_NAME__feedback_reason, 15, 15},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_STRING,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {soft_actuator_msgs__msg__ControllerStatus__FIELD_NAME__numeric_valid, 13, 13},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_BOOLEAN,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {soft_actuator_msgs__msg__ControllerStatus__FIELD_NAME__pressure_limited, 16, 16},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_BOOLEAN,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {soft_actuator_msgs__msg__ControllerStatus__FIELD_NAME__measured_error_valid, 20, 20},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_BOOLEAN,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {soft_actuator_msgs__msg__ControllerStatus__FIELD_NAME__contact_state, 13, 13},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_STRING,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {soft_actuator_msgs__msg__ControllerStatus__FIELD_NAME__target_mm, 9, 9},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_DOUBLE_ARRAY,
      3,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {soft_actuator_msgs__msg__ControllerStatus__FIELD_NAME__predicted_mm, 12, 12},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_DOUBLE_ARRAY,
      3,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {soft_actuator_msgs__msg__ControllerStatus__FIELD_NAME__error_mm, 8, 8},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_DOUBLE_ARRAY,
      3,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {soft_actuator_msgs__msg__ControllerStatus__FIELD_NAME__requested_pressure_kpa, 22, 22},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_DOUBLE_ARRAY,
      3,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {soft_actuator_msgs__msg__ControllerStatus__FIELD_NAME__core_pressure_kpa, 17, 17},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_DOUBLE_ARRAY,
      3,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {soft_actuator_msgs__msg__ControllerStatus__FIELD_NAME__output_pressure_kpa, 19, 19},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_DOUBLE_ARRAY,
      3,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {soft_actuator_msgs__msg__ControllerStatus__FIELD_NAME__last_written_pressure_kpa, 25, 25},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_DOUBLE_ARRAY,
      3,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {soft_actuator_msgs__msg__ControllerStatus__FIELD_NAME__writer_fresh, 12, 12},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_BOOLEAN,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {soft_actuator_msgs__msg__ControllerStatus__FIELD_NAME__feedback_sequence, 17, 17},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_UINT64,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
};

static rosidl_runtime_c__type_description__IndividualTypeDescription soft_actuator_msgs__msg__ControllerStatus__REFERENCED_TYPE_DESCRIPTIONS[] = {
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
soft_actuator_msgs__msg__ControllerStatus__get_type_description(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static bool constructed = false;
  static const rosidl_runtime_c__type_description__TypeDescription description = {
    {
      {soft_actuator_msgs__msg__ControllerStatus__TYPE_NAME, 39, 39},
      {soft_actuator_msgs__msg__ControllerStatus__FIELDS, 20, 20},
    },
    {soft_actuator_msgs__msg__ControllerStatus__REFERENCED_TYPE_DESCRIPTIONS, 2, 2},
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
  "# Controller diagnostics for one actuator. Position vectors use the PCC base frame, in mm.\n"
  "# header.frame_id names the PCC base frame; header.stamp is ROS publication time.\n"
  "std_msgs/Header header\n"
  "string session_id\n"
  "# Adapter-level state (for example disabled, waiting for input, or running).\n"
  "string state\n"
  "bool enabled\n"
  "# Requested mode and mode actually used by the current core step.\n"
  "string requested_mode\n"
  "string effective_mode\n"
  "string feedback_reason\n"
  "bool numeric_valid\n"
  "bool pressure_limited\n"
  "# True only when error_mm is based on actual valid feedback rather than model prediction.\n"
  "bool measured_error_valid\n"
  "string contact_state\n"
  "float64[3] target_mm\n"
  "float64[3] predicted_mm\n"
  "float64[3] error_mm\n"
  "# Core pressure before its internal limits, in kPa.\n"
  "float64[3] requested_pressure_kpa\n"
  "# Core pressure after its internal limits, in kPa.\n"
  "float64[3] core_pressure_kpa\n"
  "# Adapter output-policy result sent to the writer, in kPa; not proof of a successful write.\n"
  "float64[3] output_pressure_kpa\n"
  "# Most recent acknowledged successful board write, in kPa; not measured chamber pressure.\n"
  "float64[3] last_written_pressure_kpa\n"
  "# Whether the last accepted writer report is fresh according to local monotonic receipt time.\n"
  "bool writer_fresh\n"
  "# Adapter-assigned sequence of the latest distinct feedback source frame.\n"
  "uint64 feedback_sequence";

static char msg_encoding[] = "msg";

// Define all individual source functions

const rosidl_runtime_c__type_description__TypeSource *
soft_actuator_msgs__msg__ControllerStatus__get_individual_type_description_source(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static const rosidl_runtime_c__type_description__TypeSource source = {
    {soft_actuator_msgs__msg__ControllerStatus__TYPE_NAME, 39, 39},
    {msg_encoding, 3, 3},
    {toplevel_type_raw_source, 1320, 1320},
  };
  return &source;
}

const rosidl_runtime_c__type_description__TypeSource__Sequence *
soft_actuator_msgs__msg__ControllerStatus__get_type_description_sources(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_runtime_c__type_description__TypeSource sources[3];
  static const rosidl_runtime_c__type_description__TypeSource__Sequence source_sequence = {sources, 3, 3};
  static bool constructed = false;
  if (!constructed) {
    sources[0] = *soft_actuator_msgs__msg__ControllerStatus__get_individual_type_description_source(NULL),
    sources[1] = *builtin_interfaces__msg__Time__get_individual_type_description_source(NULL);
    sources[2] = *std_msgs__msg__Header__get_individual_type_description_source(NULL);
    constructed = true;
  }
  return &source_sequence;
}
