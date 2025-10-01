// generated from rosidl_generator_c/resource/idl__description.c.em
// with input from temp_interface:msg/Temperature.idl
// generated code does not contain a copyright notice

#include "temp_interface/msg/detail/temperature__functions.h"

ROSIDL_GENERATOR_C_PUBLIC_temp_interface
const rosidl_type_hash_t *
temp_interface__msg__Temperature__get_type_hash(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_type_hash_t hash = {1, {
      0x5b, 0xfd, 0x7d, 0x38, 0x0e, 0xb1, 0xae, 0x25,
      0x01, 0x40, 0x0f, 0xd7, 0xab, 0x0e, 0xdf, 0x3b,
      0xe2, 0x94, 0x98, 0x03, 0x2a, 0x53, 0x72, 0x86,
      0x84, 0xbe, 0xa1, 0xdc, 0x47, 0x91, 0x75, 0x12,
    }};
  return &hash;
}

#include <assert.h>
#include <string.h>

// Include directives for referenced types
#include "builtin_interfaces/msg/detail/time__functions.h"
#include "std_msgs/msg/detail/float32__functions.h"
#include "std_msgs/msg/detail/string__functions.h"

// Hashes for external referenced types
#ifndef NDEBUG
static const rosidl_type_hash_t builtin_interfaces__msg__Time__EXPECTED_HASH = {1, {
    0xb1, 0x06, 0x23, 0x5e, 0x25, 0xa4, 0xc5, 0xed,
    0x35, 0x09, 0x8a, 0xa0, 0xa6, 0x1a, 0x3e, 0xe9,
    0xc9, 0xb1, 0x8d, 0x19, 0x7f, 0x39, 0x8b, 0x0e,
    0x42, 0x06, 0xce, 0xa9, 0xac, 0xf9, 0xc1, 0x97,
  }};
static const rosidl_type_hash_t std_msgs__msg__Float32__EXPECTED_HASH = {1, {
    0x71, 0x70, 0xd3, 0xd8, 0xf8, 0x41, 0xf7, 0xbe,
    0x31, 0x72, 0xce, 0x5f, 0x4f, 0x59, 0xf3, 0xa4,
    0xd7, 0xf6, 0x3b, 0x04, 0x47, 0xe8, 0xb3, 0x33,
    0x27, 0x60, 0x1a, 0xd6, 0x4d, 0x83, 0xd6, 0xe2,
  }};
static const rosidl_type_hash_t std_msgs__msg__String__EXPECTED_HASH = {1, {
    0xdf, 0x66, 0x8c, 0x74, 0x04, 0x82, 0xbb, 0xd4,
    0x8f, 0xb3, 0x9d, 0x76, 0xa7, 0x0d, 0xfd, 0x4b,
    0xd5, 0x9d, 0xb1, 0x28, 0x80, 0x21, 0x74, 0x35,
    0x03, 0x25, 0x9e, 0x94, 0x8f, 0x6b, 0x1a, 0x18,
  }};
#endif

static char temp_interface__msg__Temperature__TYPE_NAME[] = "temp_interface/msg/Temperature";
static char builtin_interfaces__msg__Time__TYPE_NAME[] = "builtin_interfaces/msg/Time";
static char std_msgs__msg__Float32__TYPE_NAME[] = "std_msgs/msg/Float32";
static char std_msgs__msg__String__TYPE_NAME[] = "std_msgs/msg/String";

// Define type names, field names, and default values
static char temp_interface__msg__Temperature__FIELD_NAME__value[] = "value";
static char temp_interface__msg__Temperature__FIELD_NAME__timestamp[] = "timestamp";
static char temp_interface__msg__Temperature__FIELD_NAME__sensor_id[] = "sensor_id";
static char temp_interface__msg__Temperature__FIELD_NAME__unit[] = "unit";

static rosidl_runtime_c__type_description__Field temp_interface__msg__Temperature__FIELDS[] = {
  {
    {temp_interface__msg__Temperature__FIELD_NAME__value, 5, 5},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_NESTED_TYPE,
      0,
      0,
      {std_msgs__msg__Float32__TYPE_NAME, 20, 20},
    },
    {NULL, 0, 0},
  },
  {
    {temp_interface__msg__Temperature__FIELD_NAME__timestamp, 9, 9},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_NESTED_TYPE,
      0,
      0,
      {builtin_interfaces__msg__Time__TYPE_NAME, 27, 27},
    },
    {NULL, 0, 0},
  },
  {
    {temp_interface__msg__Temperature__FIELD_NAME__sensor_id, 9, 9},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_NESTED_TYPE,
      0,
      0,
      {std_msgs__msg__String__TYPE_NAME, 19, 19},
    },
    {NULL, 0, 0},
  },
  {
    {temp_interface__msg__Temperature__FIELD_NAME__unit, 4, 4},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_NESTED_TYPE,
      0,
      0,
      {std_msgs__msg__String__TYPE_NAME, 19, 19},
    },
    {NULL, 0, 0},
  },
};

static rosidl_runtime_c__type_description__IndividualTypeDescription temp_interface__msg__Temperature__REFERENCED_TYPE_DESCRIPTIONS[] = {
  {
    {builtin_interfaces__msg__Time__TYPE_NAME, 27, 27},
    {NULL, 0, 0},
  },
  {
    {std_msgs__msg__Float32__TYPE_NAME, 20, 20},
    {NULL, 0, 0},
  },
  {
    {std_msgs__msg__String__TYPE_NAME, 19, 19},
    {NULL, 0, 0},
  },
};

const rosidl_runtime_c__type_description__TypeDescription *
temp_interface__msg__Temperature__get_type_description(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static bool constructed = false;
  static const rosidl_runtime_c__type_description__TypeDescription description = {
    {
      {temp_interface__msg__Temperature__TYPE_NAME, 30, 30},
      {temp_interface__msg__Temperature__FIELDS, 4, 4},
    },
    {temp_interface__msg__Temperature__REFERENCED_TYPE_DESCRIPTIONS, 3, 3},
  };
  if (!constructed) {
    assert(0 == memcmp(&builtin_interfaces__msg__Time__EXPECTED_HASH, builtin_interfaces__msg__Time__get_type_hash(NULL), sizeof(rosidl_type_hash_t)));
    description.referenced_type_descriptions.data[0].fields = builtin_interfaces__msg__Time__get_type_description(NULL)->type_description.fields;
    assert(0 == memcmp(&std_msgs__msg__Float32__EXPECTED_HASH, std_msgs__msg__Float32__get_type_hash(NULL), sizeof(rosidl_type_hash_t)));
    description.referenced_type_descriptions.data[1].fields = std_msgs__msg__Float32__get_type_description(NULL)->type_description.fields;
    assert(0 == memcmp(&std_msgs__msg__String__EXPECTED_HASH, std_msgs__msg__String__get_type_hash(NULL), sizeof(rosidl_type_hash_t)));
    description.referenced_type_descriptions.data[2].fields = std_msgs__msg__String__get_type_description(NULL)->type_description.fields;
    constructed = true;
  }
  return &description;
}

static char toplevel_type_raw_source[] =
  "# temperature message definition\n"
  "\n"
  "# Temperature value (float)\n"
  "std_msgs/Float32 value\n"
  "\n"
  "# Timestamp\n"
  "builtin_interfaces/Time timestamp\n"
  "\n"
  "# Sensor ID (string)\n"
  "std_msgs/String sensor_id\n"
  "\n"
  "# Unit (Celsius/Fahrenheit)\n"
  "std_msgs/String unit";

static char msg_encoding[] = "msg";

// Define all individual source functions

const rosidl_runtime_c__type_description__TypeSource *
temp_interface__msg__Temperature__get_individual_type_description_source(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static const rosidl_runtime_c__type_description__TypeSource source = {
    {temp_interface__msg__Temperature__TYPE_NAME, 30, 30},
    {msg_encoding, 3, 3},
    {toplevel_type_raw_source, 230, 230},
  };
  return &source;
}

const rosidl_runtime_c__type_description__TypeSource__Sequence *
temp_interface__msg__Temperature__get_type_description_sources(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_runtime_c__type_description__TypeSource sources[4];
  static const rosidl_runtime_c__type_description__TypeSource__Sequence source_sequence = {sources, 4, 4};
  static bool constructed = false;
  if (!constructed) {
    sources[0] = *temp_interface__msg__Temperature__get_individual_type_description_source(NULL),
    sources[1] = *builtin_interfaces__msg__Time__get_individual_type_description_source(NULL);
    sources[2] = *std_msgs__msg__Float32__get_individual_type_description_source(NULL);
    sources[3] = *std_msgs__msg__String__get_individual_type_description_source(NULL);
    constructed = true;
  }
  return &source_sequence;
}
