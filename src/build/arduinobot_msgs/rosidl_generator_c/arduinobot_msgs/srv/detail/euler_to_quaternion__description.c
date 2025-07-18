// generated from rosidl_generator_c/resource/idl__description.c.em
// with input from arduinobot_msgs:srv/EulerToQuaternion.idl
// generated code does not contain a copyright notice

#include "arduinobot_msgs/srv/detail/euler_to_quaternion__functions.h"

ROSIDL_GENERATOR_C_PUBLIC_arduinobot_msgs
const rosidl_type_hash_t *
arduinobot_msgs__srv__EulerToQuaternion__get_type_hash(
  const rosidl_service_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_type_hash_t hash = {1, {
      0x9b, 0x40, 0x40, 0x9e, 0x8b, 0x66, 0xf1, 0x17,
      0x52, 0xc6, 0xf9, 0x7e, 0xd2, 0xcf, 0x3c, 0x4e,
      0x03, 0xc7, 0x1e, 0x42, 0xfe, 0xaa, 0x08, 0x10,
      0xa4, 0xcd, 0x14, 0x8a, 0xae, 0x40, 0xa6, 0xb5,
    }};
  return &hash;
}

ROSIDL_GENERATOR_C_PUBLIC_arduinobot_msgs
const rosidl_type_hash_t *
arduinobot_msgs__srv__EulerToQuaternion_Request__get_type_hash(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_type_hash_t hash = {1, {
      0xca, 0xca, 0xed, 0x24, 0x1b, 0x4f, 0x5a, 0x8c,
      0x14, 0xe6, 0x27, 0x04, 0x9b, 0xe7, 0xd7, 0xde,
      0x11, 0x48, 0xf7, 0x47, 0x7c, 0xf5, 0x1f, 0xf5,
      0xed, 0x8f, 0xab, 0xdd, 0xe0, 0x64, 0x9b, 0xd6,
    }};
  return &hash;
}

ROSIDL_GENERATOR_C_PUBLIC_arduinobot_msgs
const rosidl_type_hash_t *
arduinobot_msgs__srv__EulerToQuaternion_Response__get_type_hash(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_type_hash_t hash = {1, {
      0x27, 0xdc, 0x35, 0x8c, 0xc7, 0x0d, 0xe7, 0x09,
      0xdd, 0xb0, 0xca, 0xb0, 0xc3, 0x38, 0xca, 0x19,
      0x29, 0x46, 0x3f, 0x48, 0x70, 0x75, 0xb0, 0x1f,
      0x79, 0x0b, 0x3b, 0xe3, 0xd0, 0xca, 0x53, 0x5c,
    }};
  return &hash;
}

ROSIDL_GENERATOR_C_PUBLIC_arduinobot_msgs
const rosidl_type_hash_t *
arduinobot_msgs__srv__EulerToQuaternion_Event__get_type_hash(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_type_hash_t hash = {1, {
      0xbf, 0x8d, 0xf8, 0xe5, 0xbc, 0x5c, 0x5f, 0xee,
      0x59, 0xd1, 0x53, 0x2b, 0x75, 0xce, 0x86, 0x80,
      0x30, 0x85, 0x43, 0x86, 0x2a, 0x26, 0x62, 0x61,
      0x9d, 0x5b, 0x3e, 0x8d, 0x4c, 0xa9, 0x8b, 0x1a,
    }};
  return &hash;
}

#include <assert.h>
#include <string.h>

// Include directives for referenced types
#include "service_msgs/msg/detail/service_event_info__functions.h"
#include "builtin_interfaces/msg/detail/time__functions.h"

// Hashes for external referenced types
#ifndef NDEBUG
static const rosidl_type_hash_t builtin_interfaces__msg__Time__EXPECTED_HASH = {1, {
    0xb1, 0x06, 0x23, 0x5e, 0x25, 0xa4, 0xc5, 0xed,
    0x35, 0x09, 0x8a, 0xa0, 0xa6, 0x1a, 0x3e, 0xe9,
    0xc9, 0xb1, 0x8d, 0x19, 0x7f, 0x39, 0x8b, 0x0e,
    0x42, 0x06, 0xce, 0xa9, 0xac, 0xf9, 0xc1, 0x97,
  }};
static const rosidl_type_hash_t service_msgs__msg__ServiceEventInfo__EXPECTED_HASH = {1, {
    0x41, 0xbc, 0xbb, 0xe0, 0x7a, 0x75, 0xc9, 0xb5,
    0x2b, 0xc9, 0x6b, 0xfd, 0x5c, 0x24, 0xd7, 0xf0,
    0xfc, 0x0a, 0x08, 0xc0, 0xcb, 0x79, 0x21, 0xb3,
    0x37, 0x3c, 0x57, 0x32, 0x34, 0x5a, 0x6f, 0x45,
  }};
#endif

static char arduinobot_msgs__srv__EulerToQuaternion__TYPE_NAME[] = "arduinobot_msgs/srv/EulerToQuaternion";
static char arduinobot_msgs__srv__EulerToQuaternion_Event__TYPE_NAME[] = "arduinobot_msgs/srv/EulerToQuaternion_Event";
static char arduinobot_msgs__srv__EulerToQuaternion_Request__TYPE_NAME[] = "arduinobot_msgs/srv/EulerToQuaternion_Request";
static char arduinobot_msgs__srv__EulerToQuaternion_Response__TYPE_NAME[] = "arduinobot_msgs/srv/EulerToQuaternion_Response";
static char builtin_interfaces__msg__Time__TYPE_NAME[] = "builtin_interfaces/msg/Time";
static char service_msgs__msg__ServiceEventInfo__TYPE_NAME[] = "service_msgs/msg/ServiceEventInfo";

// Define type names, field names, and default values
static char arduinobot_msgs__srv__EulerToQuaternion__FIELD_NAME__request_message[] = "request_message";
static char arduinobot_msgs__srv__EulerToQuaternion__FIELD_NAME__response_message[] = "response_message";
static char arduinobot_msgs__srv__EulerToQuaternion__FIELD_NAME__event_message[] = "event_message";

static rosidl_runtime_c__type_description__Field arduinobot_msgs__srv__EulerToQuaternion__FIELDS[] = {
  {
    {arduinobot_msgs__srv__EulerToQuaternion__FIELD_NAME__request_message, 15, 15},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_NESTED_TYPE,
      0,
      0,
      {arduinobot_msgs__srv__EulerToQuaternion_Request__TYPE_NAME, 45, 45},
    },
    {NULL, 0, 0},
  },
  {
    {arduinobot_msgs__srv__EulerToQuaternion__FIELD_NAME__response_message, 16, 16},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_NESTED_TYPE,
      0,
      0,
      {arduinobot_msgs__srv__EulerToQuaternion_Response__TYPE_NAME, 46, 46},
    },
    {NULL, 0, 0},
  },
  {
    {arduinobot_msgs__srv__EulerToQuaternion__FIELD_NAME__event_message, 13, 13},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_NESTED_TYPE,
      0,
      0,
      {arduinobot_msgs__srv__EulerToQuaternion_Event__TYPE_NAME, 43, 43},
    },
    {NULL, 0, 0},
  },
};

static rosidl_runtime_c__type_description__IndividualTypeDescription arduinobot_msgs__srv__EulerToQuaternion__REFERENCED_TYPE_DESCRIPTIONS[] = {
  {
    {arduinobot_msgs__srv__EulerToQuaternion_Event__TYPE_NAME, 43, 43},
    {NULL, 0, 0},
  },
  {
    {arduinobot_msgs__srv__EulerToQuaternion_Request__TYPE_NAME, 45, 45},
    {NULL, 0, 0},
  },
  {
    {arduinobot_msgs__srv__EulerToQuaternion_Response__TYPE_NAME, 46, 46},
    {NULL, 0, 0},
  },
  {
    {builtin_interfaces__msg__Time__TYPE_NAME, 27, 27},
    {NULL, 0, 0},
  },
  {
    {service_msgs__msg__ServiceEventInfo__TYPE_NAME, 33, 33},
    {NULL, 0, 0},
  },
};

const rosidl_runtime_c__type_description__TypeDescription *
arduinobot_msgs__srv__EulerToQuaternion__get_type_description(
  const rosidl_service_type_support_t * type_support)
{
  (void)type_support;
  static bool constructed = false;
  static const rosidl_runtime_c__type_description__TypeDescription description = {
    {
      {arduinobot_msgs__srv__EulerToQuaternion__TYPE_NAME, 37, 37},
      {arduinobot_msgs__srv__EulerToQuaternion__FIELDS, 3, 3},
    },
    {arduinobot_msgs__srv__EulerToQuaternion__REFERENCED_TYPE_DESCRIPTIONS, 5, 5},
  };
  if (!constructed) {
    description.referenced_type_descriptions.data[0].fields = arduinobot_msgs__srv__EulerToQuaternion_Event__get_type_description(NULL)->type_description.fields;
    description.referenced_type_descriptions.data[1].fields = arduinobot_msgs__srv__EulerToQuaternion_Request__get_type_description(NULL)->type_description.fields;
    description.referenced_type_descriptions.data[2].fields = arduinobot_msgs__srv__EulerToQuaternion_Response__get_type_description(NULL)->type_description.fields;
    assert(0 == memcmp(&builtin_interfaces__msg__Time__EXPECTED_HASH, builtin_interfaces__msg__Time__get_type_hash(NULL), sizeof(rosidl_type_hash_t)));
    description.referenced_type_descriptions.data[3].fields = builtin_interfaces__msg__Time__get_type_description(NULL)->type_description.fields;
    assert(0 == memcmp(&service_msgs__msg__ServiceEventInfo__EXPECTED_HASH, service_msgs__msg__ServiceEventInfo__get_type_hash(NULL), sizeof(rosidl_type_hash_t)));
    description.referenced_type_descriptions.data[4].fields = service_msgs__msg__ServiceEventInfo__get_type_description(NULL)->type_description.fields;
    constructed = true;
  }
  return &description;
}
// Define type names, field names, and default values
static char arduinobot_msgs__srv__EulerToQuaternion_Request__FIELD_NAME__roll[] = "roll";
static char arduinobot_msgs__srv__EulerToQuaternion_Request__FIELD_NAME__pitch[] = "pitch";
static char arduinobot_msgs__srv__EulerToQuaternion_Request__FIELD_NAME__yaw[] = "yaw";

static rosidl_runtime_c__type_description__Field arduinobot_msgs__srv__EulerToQuaternion_Request__FIELDS[] = {
  {
    {arduinobot_msgs__srv__EulerToQuaternion_Request__FIELD_NAME__roll, 4, 4},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_DOUBLE,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {arduinobot_msgs__srv__EulerToQuaternion_Request__FIELD_NAME__pitch, 5, 5},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_DOUBLE,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {arduinobot_msgs__srv__EulerToQuaternion_Request__FIELD_NAME__yaw, 3, 3},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_DOUBLE,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
};

const rosidl_runtime_c__type_description__TypeDescription *
arduinobot_msgs__srv__EulerToQuaternion_Request__get_type_description(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static bool constructed = false;
  static const rosidl_runtime_c__type_description__TypeDescription description = {
    {
      {arduinobot_msgs__srv__EulerToQuaternion_Request__TYPE_NAME, 45, 45},
      {arduinobot_msgs__srv__EulerToQuaternion_Request__FIELDS, 3, 3},
    },
    {NULL, 0, 0},
  };
  if (!constructed) {
    constructed = true;
  }
  return &description;
}
// Define type names, field names, and default values
static char arduinobot_msgs__srv__EulerToQuaternion_Response__FIELD_NAME__x[] = "x";
static char arduinobot_msgs__srv__EulerToQuaternion_Response__FIELD_NAME__y[] = "y";
static char arduinobot_msgs__srv__EulerToQuaternion_Response__FIELD_NAME__z[] = "z";
static char arduinobot_msgs__srv__EulerToQuaternion_Response__FIELD_NAME__w[] = "w";

static rosidl_runtime_c__type_description__Field arduinobot_msgs__srv__EulerToQuaternion_Response__FIELDS[] = {
  {
    {arduinobot_msgs__srv__EulerToQuaternion_Response__FIELD_NAME__x, 1, 1},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_DOUBLE,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {arduinobot_msgs__srv__EulerToQuaternion_Response__FIELD_NAME__y, 1, 1},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_DOUBLE,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {arduinobot_msgs__srv__EulerToQuaternion_Response__FIELD_NAME__z, 1, 1},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_DOUBLE,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {arduinobot_msgs__srv__EulerToQuaternion_Response__FIELD_NAME__w, 1, 1},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_DOUBLE,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
};

const rosidl_runtime_c__type_description__TypeDescription *
arduinobot_msgs__srv__EulerToQuaternion_Response__get_type_description(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static bool constructed = false;
  static const rosidl_runtime_c__type_description__TypeDescription description = {
    {
      {arduinobot_msgs__srv__EulerToQuaternion_Response__TYPE_NAME, 46, 46},
      {arduinobot_msgs__srv__EulerToQuaternion_Response__FIELDS, 4, 4},
    },
    {NULL, 0, 0},
  };
  if (!constructed) {
    constructed = true;
  }
  return &description;
}
// Define type names, field names, and default values
static char arduinobot_msgs__srv__EulerToQuaternion_Event__FIELD_NAME__info[] = "info";
static char arduinobot_msgs__srv__EulerToQuaternion_Event__FIELD_NAME__request[] = "request";
static char arduinobot_msgs__srv__EulerToQuaternion_Event__FIELD_NAME__response[] = "response";

static rosidl_runtime_c__type_description__Field arduinobot_msgs__srv__EulerToQuaternion_Event__FIELDS[] = {
  {
    {arduinobot_msgs__srv__EulerToQuaternion_Event__FIELD_NAME__info, 4, 4},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_NESTED_TYPE,
      0,
      0,
      {service_msgs__msg__ServiceEventInfo__TYPE_NAME, 33, 33},
    },
    {NULL, 0, 0},
  },
  {
    {arduinobot_msgs__srv__EulerToQuaternion_Event__FIELD_NAME__request, 7, 7},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_NESTED_TYPE_BOUNDED_SEQUENCE,
      1,
      0,
      {arduinobot_msgs__srv__EulerToQuaternion_Request__TYPE_NAME, 45, 45},
    },
    {NULL, 0, 0},
  },
  {
    {arduinobot_msgs__srv__EulerToQuaternion_Event__FIELD_NAME__response, 8, 8},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_NESTED_TYPE_BOUNDED_SEQUENCE,
      1,
      0,
      {arduinobot_msgs__srv__EulerToQuaternion_Response__TYPE_NAME, 46, 46},
    },
    {NULL, 0, 0},
  },
};

static rosidl_runtime_c__type_description__IndividualTypeDescription arduinobot_msgs__srv__EulerToQuaternion_Event__REFERENCED_TYPE_DESCRIPTIONS[] = {
  {
    {arduinobot_msgs__srv__EulerToQuaternion_Request__TYPE_NAME, 45, 45},
    {NULL, 0, 0},
  },
  {
    {arduinobot_msgs__srv__EulerToQuaternion_Response__TYPE_NAME, 46, 46},
    {NULL, 0, 0},
  },
  {
    {builtin_interfaces__msg__Time__TYPE_NAME, 27, 27},
    {NULL, 0, 0},
  },
  {
    {service_msgs__msg__ServiceEventInfo__TYPE_NAME, 33, 33},
    {NULL, 0, 0},
  },
};

const rosidl_runtime_c__type_description__TypeDescription *
arduinobot_msgs__srv__EulerToQuaternion_Event__get_type_description(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static bool constructed = false;
  static const rosidl_runtime_c__type_description__TypeDescription description = {
    {
      {arduinobot_msgs__srv__EulerToQuaternion_Event__TYPE_NAME, 43, 43},
      {arduinobot_msgs__srv__EulerToQuaternion_Event__FIELDS, 3, 3},
    },
    {arduinobot_msgs__srv__EulerToQuaternion_Event__REFERENCED_TYPE_DESCRIPTIONS, 4, 4},
  };
  if (!constructed) {
    description.referenced_type_descriptions.data[0].fields = arduinobot_msgs__srv__EulerToQuaternion_Request__get_type_description(NULL)->type_description.fields;
    description.referenced_type_descriptions.data[1].fields = arduinobot_msgs__srv__EulerToQuaternion_Response__get_type_description(NULL)->type_description.fields;
    assert(0 == memcmp(&builtin_interfaces__msg__Time__EXPECTED_HASH, builtin_interfaces__msg__Time__get_type_hash(NULL), sizeof(rosidl_type_hash_t)));
    description.referenced_type_descriptions.data[2].fields = builtin_interfaces__msg__Time__get_type_description(NULL)->type_description.fields;
    assert(0 == memcmp(&service_msgs__msg__ServiceEventInfo__EXPECTED_HASH, service_msgs__msg__ServiceEventInfo__get_type_hash(NULL), sizeof(rosidl_type_hash_t)));
    description.referenced_type_descriptions.data[3].fields = service_msgs__msg__ServiceEventInfo__get_type_description(NULL)->type_description.fields;
    constructed = true;
  }
  return &description;
}

static char toplevel_type_raw_source[] =
  "#Request\n"
  "float64 roll\n"
  "float64 pitch\n"
  "float64 yaw\n"
  "---\n"
  "#Response\n"
  "float64 x\n"
  "float64 y\n"
  "float64 z\n"
  "float64 w";

static char srv_encoding[] = "srv";
static char implicit_encoding[] = "implicit";

// Define all individual source functions

const rosidl_runtime_c__type_description__TypeSource *
arduinobot_msgs__srv__EulerToQuaternion__get_individual_type_description_source(
  const rosidl_service_type_support_t * type_support)
{
  (void)type_support;
  static const rosidl_runtime_c__type_description__TypeSource source = {
    {arduinobot_msgs__srv__EulerToQuaternion__TYPE_NAME, 37, 37},
    {srv_encoding, 3, 3},
    {toplevel_type_raw_source, 101, 101},
  };
  return &source;
}

const rosidl_runtime_c__type_description__TypeSource *
arduinobot_msgs__srv__EulerToQuaternion_Request__get_individual_type_description_source(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static const rosidl_runtime_c__type_description__TypeSource source = {
    {arduinobot_msgs__srv__EulerToQuaternion_Request__TYPE_NAME, 45, 45},
    {implicit_encoding, 8, 8},
    {NULL, 0, 0},
  };
  return &source;
}

const rosidl_runtime_c__type_description__TypeSource *
arduinobot_msgs__srv__EulerToQuaternion_Response__get_individual_type_description_source(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static const rosidl_runtime_c__type_description__TypeSource source = {
    {arduinobot_msgs__srv__EulerToQuaternion_Response__TYPE_NAME, 46, 46},
    {implicit_encoding, 8, 8},
    {NULL, 0, 0},
  };
  return &source;
}

const rosidl_runtime_c__type_description__TypeSource *
arduinobot_msgs__srv__EulerToQuaternion_Event__get_individual_type_description_source(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static const rosidl_runtime_c__type_description__TypeSource source = {
    {arduinobot_msgs__srv__EulerToQuaternion_Event__TYPE_NAME, 43, 43},
    {implicit_encoding, 8, 8},
    {NULL, 0, 0},
  };
  return &source;
}

const rosidl_runtime_c__type_description__TypeSource__Sequence *
arduinobot_msgs__srv__EulerToQuaternion__get_type_description_sources(
  const rosidl_service_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_runtime_c__type_description__TypeSource sources[6];
  static const rosidl_runtime_c__type_description__TypeSource__Sequence source_sequence = {sources, 6, 6};
  static bool constructed = false;
  if (!constructed) {
    sources[0] = *arduinobot_msgs__srv__EulerToQuaternion__get_individual_type_description_source(NULL),
    sources[1] = *arduinobot_msgs__srv__EulerToQuaternion_Event__get_individual_type_description_source(NULL);
    sources[2] = *arduinobot_msgs__srv__EulerToQuaternion_Request__get_individual_type_description_source(NULL);
    sources[3] = *arduinobot_msgs__srv__EulerToQuaternion_Response__get_individual_type_description_source(NULL);
    sources[4] = *builtin_interfaces__msg__Time__get_individual_type_description_source(NULL);
    sources[5] = *service_msgs__msg__ServiceEventInfo__get_individual_type_description_source(NULL);
    constructed = true;
  }
  return &source_sequence;
}

const rosidl_runtime_c__type_description__TypeSource__Sequence *
arduinobot_msgs__srv__EulerToQuaternion_Request__get_type_description_sources(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_runtime_c__type_description__TypeSource sources[1];
  static const rosidl_runtime_c__type_description__TypeSource__Sequence source_sequence = {sources, 1, 1};
  static bool constructed = false;
  if (!constructed) {
    sources[0] = *arduinobot_msgs__srv__EulerToQuaternion_Request__get_individual_type_description_source(NULL),
    constructed = true;
  }
  return &source_sequence;
}

const rosidl_runtime_c__type_description__TypeSource__Sequence *
arduinobot_msgs__srv__EulerToQuaternion_Response__get_type_description_sources(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_runtime_c__type_description__TypeSource sources[1];
  static const rosidl_runtime_c__type_description__TypeSource__Sequence source_sequence = {sources, 1, 1};
  static bool constructed = false;
  if (!constructed) {
    sources[0] = *arduinobot_msgs__srv__EulerToQuaternion_Response__get_individual_type_description_source(NULL),
    constructed = true;
  }
  return &source_sequence;
}

const rosidl_runtime_c__type_description__TypeSource__Sequence *
arduinobot_msgs__srv__EulerToQuaternion_Event__get_type_description_sources(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_runtime_c__type_description__TypeSource sources[5];
  static const rosidl_runtime_c__type_description__TypeSource__Sequence source_sequence = {sources, 5, 5};
  static bool constructed = false;
  if (!constructed) {
    sources[0] = *arduinobot_msgs__srv__EulerToQuaternion_Event__get_individual_type_description_source(NULL),
    sources[1] = *arduinobot_msgs__srv__EulerToQuaternion_Request__get_individual_type_description_source(NULL);
    sources[2] = *arduinobot_msgs__srv__EulerToQuaternion_Response__get_individual_type_description_source(NULL);
    sources[3] = *builtin_interfaces__msg__Time__get_individual_type_description_source(NULL);
    sources[4] = *service_msgs__msg__ServiceEventInfo__get_individual_type_description_source(NULL);
    constructed = true;
  }
  return &source_sequence;
}
