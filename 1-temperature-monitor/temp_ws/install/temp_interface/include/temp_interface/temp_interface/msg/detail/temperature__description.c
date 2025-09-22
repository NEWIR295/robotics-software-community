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
      0x37, 0xd3, 0x66, 0xaa, 0xf8, 0x9c, 0x32, 0x2b,
      0xcf, 0x47, 0x0c, 0xd2, 0xba, 0x82, 0x4e, 0x26,
      0x0b, 0xb7, 0xf8, 0x6c, 0x4a, 0x85, 0xd8, 0x44,
      0xc5, 0x62, 0xc9, 0xb4, 0x43, 0x5c, 0xcd, 0xad,
    }};
  return &hash;
}

#include <assert.h>
#include <string.h>

// Include directives for referenced types
#include "std_msgs/msg/detail/string__functions.h"
#include "std_msgs/msg/detail/float32__functions.h"
#include "std_msgs/msg/detail/int64__functions.h"

// Hashes for external referenced types
#ifndef NDEBUG
static const rosidl_type_hash_t std_msgs__msg__Float32__EXPECTED_HASH = {1, {
    0x71, 0x70, 0xd3, 0xd8, 0xf8, 0x41, 0xf7, 0xbe,
    0x31, 0x72, 0xce, 0x5f, 0x4f, 0x59, 0xf3, 0xa4,
    0xd7, 0xf6, 0x3b, 0x04, 0x47, 0xe8, 0xb3, 0x33,
    0x27, 0x60, 0x1a, 0xd6, 0x4d, 0x83, 0xd6, 0xe2,
  }};
static const rosidl_type_hash_t std_msgs__msg__Int64__EXPECTED_HASH = {1, {
    0x8c, 0xd1, 0x04, 0x8c, 0x2f, 0x18, 0x6b, 0x6b,
    0xd9, 0xa9, 0x24, 0x72, 0xdc, 0x1c, 0xe5, 0x17,
    0x23, 0xc0, 0x83, 0x3a, 0x22, 0x1e, 0x2b, 0x7a,
    0xec, 0xff, 0xf1, 0x11, 0x77, 0x4f, 0x4b, 0x49,
  }};
static const rosidl_type_hash_t std_msgs__msg__String__EXPECTED_HASH = {1, {
    0xdf, 0x66, 0x8c, 0x74, 0x04, 0x82, 0xbb, 0xd4,
    0x8f, 0xb3, 0x9d, 0x76, 0xa7, 0x0d, 0xfd, 0x4b,
    0xd5, 0x9d, 0xb1, 0x28, 0x80, 0x21, 0x74, 0x35,
    0x03, 0x25, 0x9e, 0x94, 0x8f, 0x6b, 0x1a, 0x18,
  }};
#endif

static char temp_interface__msg__Temperature__TYPE_NAME[] = "temp_interface/msg/Temperature";
static char std_msgs__msg__Float32__TYPE_NAME[] = "std_msgs/msg/Float32";
static char std_msgs__msg__Int64__TYPE_NAME[] = "std_msgs/msg/Int64";
static char std_msgs__msg__String__TYPE_NAME[] = "std_msgs/msg/String";

// Define type names, field names, and default values
static char temp_interface__msg__Temperature__FIELD_NAME__temperature[] = "temperature";
static char temp_interface__msg__Temperature__FIELD_NAME__timestamp[] = "timestamp";
static char temp_interface__msg__Temperature__FIELD_NAME__sensor_id[] = "sensor_id";
static char temp_interface__msg__Temperature__FIELD_NAME__unit[] = "unit";

static rosidl_runtime_c__type_description__Field temp_interface__msg__Temperature__FIELDS[] = {
  {
    {temp_interface__msg__Temperature__FIELD_NAME__temperature, 11, 11},
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
      {std_msgs__msg__Int64__TYPE_NAME, 18, 18},
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
    {std_msgs__msg__Float32__TYPE_NAME, 20, 20},
    {NULL, 0, 0},
  },
  {
    {std_msgs__msg__Int64__TYPE_NAME, 18, 18},
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
    assert(0 == memcmp(&std_msgs__msg__Float32__EXPECTED_HASH, std_msgs__msg__Float32__get_type_hash(NULL), sizeof(rosidl_type_hash_t)));
    description.referenced_type_descriptions.data[0].fields = std_msgs__msg__Float32__get_type_description(NULL)->type_description.fields;
    assert(0 == memcmp(&std_msgs__msg__Int64__EXPECTED_HASH, std_msgs__msg__Int64__get_type_hash(NULL), sizeof(rosidl_type_hash_t)));
    description.referenced_type_descriptions.data[1].fields = std_msgs__msg__Int64__get_type_description(NULL)->type_description.fields;
    assert(0 == memcmp(&std_msgs__msg__String__EXPECTED_HASH, std_msgs__msg__String__get_type_hash(NULL), sizeof(rosidl_type_hash_t)));
    description.referenced_type_descriptions.data[2].fields = std_msgs__msg__String__get_type_description(NULL)->type_description.fields;
    constructed = true;
  }
  return &description;
}

static char toplevel_type_raw_source[] =
  "# temprature message definition\n"
  "\n"
  "# Temperature value (float)\n"
  "std_msgs/Float32 temperature\n"
  "\n"
  "# Timestamp\n"
  "std_msgs/Int64 timestamp\n"
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
    {toplevel_type_raw_source, 226, 226},
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
    sources[1] = *std_msgs__msg__Float32__get_individual_type_description_source(NULL);
    sources[2] = *std_msgs__msg__Int64__get_individual_type_description_source(NULL);
    sources[3] = *std_msgs__msg__String__get_individual_type_description_source(NULL);
    constructed = true;
  }
  return &source_sequence;
}
