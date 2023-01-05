// generated from rosidl_typesupport_introspection_c/resource/idl__type_support.c.em
// with input from video_interfaces:srv/Kmf.idl
// generated code does not contain a copyright notice

#include <stddef.h>
#include "video_interfaces/srv/detail/kmf__rosidl_typesupport_introspection_c.h"
#include "video_interfaces/msg/rosidl_typesupport_introspection_c__visibility_control.h"
#include "rosidl_typesupport_introspection_c/field_types.h"
#include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/message_introspection.h"
#include "video_interfaces/srv/detail/kmf__functions.h"
#include "video_interfaces/srv/detail/kmf__struct.h"


#ifdef __cplusplus
extern "C"
{
#endif

void video_interfaces__srv__Kmf_Request__rosidl_typesupport_introspection_c__Kmf_Request_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  video_interfaces__srv__Kmf_Request__init(message_memory);
}

void video_interfaces__srv__Kmf_Request__rosidl_typesupport_introspection_c__Kmf_Request_fini_function(void * message_memory)
{
  video_interfaces__srv__Kmf_Request__fini(message_memory);
}

static rosidl_typesupport_introspection_c__MessageMember video_interfaces__srv__Kmf_Request__rosidl_typesupport_introspection_c__Kmf_Request_message_member_array[4] = {
  {
    "x1",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_FLOAT,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(video_interfaces__srv__Kmf_Request, x1),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "y1",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_FLOAT,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(video_interfaces__srv__Kmf_Request, y1),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "x2",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_FLOAT,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(video_interfaces__srv__Kmf_Request, x2),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "y2",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_FLOAT,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(video_interfaces__srv__Kmf_Request, y2),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers video_interfaces__srv__Kmf_Request__rosidl_typesupport_introspection_c__Kmf_Request_message_members = {
  "video_interfaces__srv",  // message namespace
  "Kmf_Request",  // message name
  4,  // number of fields
  sizeof(video_interfaces__srv__Kmf_Request),
  video_interfaces__srv__Kmf_Request__rosidl_typesupport_introspection_c__Kmf_Request_message_member_array,  // message members
  video_interfaces__srv__Kmf_Request__rosidl_typesupport_introspection_c__Kmf_Request_init_function,  // function to initialize message memory (memory has to be allocated)
  video_interfaces__srv__Kmf_Request__rosidl_typesupport_introspection_c__Kmf_Request_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t video_interfaces__srv__Kmf_Request__rosidl_typesupport_introspection_c__Kmf_Request_message_type_support_handle = {
  0,
  &video_interfaces__srv__Kmf_Request__rosidl_typesupport_introspection_c__Kmf_Request_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_video_interfaces
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, video_interfaces, srv, Kmf_Request)() {
  if (!video_interfaces__srv__Kmf_Request__rosidl_typesupport_introspection_c__Kmf_Request_message_type_support_handle.typesupport_identifier) {
    video_interfaces__srv__Kmf_Request__rosidl_typesupport_introspection_c__Kmf_Request_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &video_interfaces__srv__Kmf_Request__rosidl_typesupport_introspection_c__Kmf_Request_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif

// already included above
// #include <stddef.h>
// already included above
// #include "video_interfaces/srv/detail/kmf__rosidl_typesupport_introspection_c.h"
// already included above
// #include "video_interfaces/msg/rosidl_typesupport_introspection_c__visibility_control.h"
// already included above
// #include "rosidl_typesupport_introspection_c/field_types.h"
// already included above
// #include "rosidl_typesupport_introspection_c/identifier.h"
// already included above
// #include "rosidl_typesupport_introspection_c/message_introspection.h"
// already included above
// #include "video_interfaces/srv/detail/kmf__functions.h"
// already included above
// #include "video_interfaces/srv/detail/kmf__struct.h"


#ifdef __cplusplus
extern "C"
{
#endif

void video_interfaces__srv__Kmf_Response__rosidl_typesupport_introspection_c__Kmf_Response_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  video_interfaces__srv__Kmf_Response__init(message_memory);
}

void video_interfaces__srv__Kmf_Response__rosidl_typesupport_introspection_c__Kmf_Response_fini_function(void * message_memory)
{
  video_interfaces__srv__Kmf_Response__fini(message_memory);
}

static rosidl_typesupport_introspection_c__MessageMember video_interfaces__srv__Kmf_Response__rosidl_typesupport_introspection_c__Kmf_Response_message_member_array[4] = {
  {
    "x1",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_FLOAT,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(video_interfaces__srv__Kmf_Response, x1),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "y1",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_FLOAT,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(video_interfaces__srv__Kmf_Response, y1),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "x2",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_FLOAT,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(video_interfaces__srv__Kmf_Response, x2),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "y2",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_FLOAT,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(video_interfaces__srv__Kmf_Response, y2),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers video_interfaces__srv__Kmf_Response__rosidl_typesupport_introspection_c__Kmf_Response_message_members = {
  "video_interfaces__srv",  // message namespace
  "Kmf_Response",  // message name
  4,  // number of fields
  sizeof(video_interfaces__srv__Kmf_Response),
  video_interfaces__srv__Kmf_Response__rosidl_typesupport_introspection_c__Kmf_Response_message_member_array,  // message members
  video_interfaces__srv__Kmf_Response__rosidl_typesupport_introspection_c__Kmf_Response_init_function,  // function to initialize message memory (memory has to be allocated)
  video_interfaces__srv__Kmf_Response__rosidl_typesupport_introspection_c__Kmf_Response_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t video_interfaces__srv__Kmf_Response__rosidl_typesupport_introspection_c__Kmf_Response_message_type_support_handle = {
  0,
  &video_interfaces__srv__Kmf_Response__rosidl_typesupport_introspection_c__Kmf_Response_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_video_interfaces
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, video_interfaces, srv, Kmf_Response)() {
  if (!video_interfaces__srv__Kmf_Response__rosidl_typesupport_introspection_c__Kmf_Response_message_type_support_handle.typesupport_identifier) {
    video_interfaces__srv__Kmf_Response__rosidl_typesupport_introspection_c__Kmf_Response_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &video_interfaces__srv__Kmf_Response__rosidl_typesupport_introspection_c__Kmf_Response_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif

#include "rosidl_runtime_c/service_type_support_struct.h"
// already included above
// #include "video_interfaces/msg/rosidl_typesupport_introspection_c__visibility_control.h"
// already included above
// #include "video_interfaces/srv/detail/kmf__rosidl_typesupport_introspection_c.h"
// already included above
// #include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/service_introspection.h"

// this is intentionally not const to allow initialization later to prevent an initialization race
static rosidl_typesupport_introspection_c__ServiceMembers video_interfaces__srv__detail__kmf__rosidl_typesupport_introspection_c__Kmf_service_members = {
  "video_interfaces__srv",  // service namespace
  "Kmf",  // service name
  // these two fields are initialized below on the first access
  NULL,  // request message
  // video_interfaces__srv__detail__kmf__rosidl_typesupport_introspection_c__Kmf_Request_message_type_support_handle,
  NULL  // response message
  // video_interfaces__srv__detail__kmf__rosidl_typesupport_introspection_c__Kmf_Response_message_type_support_handle
};

static rosidl_service_type_support_t video_interfaces__srv__detail__kmf__rosidl_typesupport_introspection_c__Kmf_service_type_support_handle = {
  0,
  &video_interfaces__srv__detail__kmf__rosidl_typesupport_introspection_c__Kmf_service_members,
  get_service_typesupport_handle_function,
};

// Forward declaration of request/response type support functions
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, video_interfaces, srv, Kmf_Request)();

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, video_interfaces, srv, Kmf_Response)();

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_video_interfaces
const rosidl_service_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_introspection_c, video_interfaces, srv, Kmf)() {
  if (!video_interfaces__srv__detail__kmf__rosidl_typesupport_introspection_c__Kmf_service_type_support_handle.typesupport_identifier) {
    video_interfaces__srv__detail__kmf__rosidl_typesupport_introspection_c__Kmf_service_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  rosidl_typesupport_introspection_c__ServiceMembers * service_members =
    (rosidl_typesupport_introspection_c__ServiceMembers *)video_interfaces__srv__detail__kmf__rosidl_typesupport_introspection_c__Kmf_service_type_support_handle.data;

  if (!service_members->request_members_) {
    service_members->request_members_ =
      (const rosidl_typesupport_introspection_c__MessageMembers *)
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, video_interfaces, srv, Kmf_Request)()->data;
  }
  if (!service_members->response_members_) {
    service_members->response_members_ =
      (const rosidl_typesupport_introspection_c__MessageMembers *)
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, video_interfaces, srv, Kmf_Response)()->data;
  }

  return &video_interfaces__srv__detail__kmf__rosidl_typesupport_introspection_c__Kmf_service_type_support_handle;
}
