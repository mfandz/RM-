// generated from rosidl_typesupport_introspection_c/resource/idl__type_support.c.em
// with input from video_interfaces:msg/Image.idl
// generated code does not contain a copyright notice

#include <stddef.h>
#include "video_interfaces/msg/detail/image__rosidl_typesupport_introspection_c.h"
#include "video_interfaces/msg/rosidl_typesupport_introspection_c__visibility_control.h"
#include "rosidl_typesupport_introspection_c/field_types.h"
#include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/message_introspection.h"
#include "video_interfaces/msg/detail/image__functions.h"
#include "video_interfaces/msg/detail/image__struct.h"


// Include directives for member types
// Member `img_pre`
// Member `img_th1`
#include "sensor_msgs/msg/image.h"
// Member `img_pre`
// Member `img_th1`
#include "sensor_msgs/msg/detail/image__rosidl_typesupport_introspection_c.h"

#ifdef __cplusplus
extern "C"
{
#endif

void video_interfaces__msg__Image__rosidl_typesupport_introspection_c__Image_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  video_interfaces__msg__Image__init(message_memory);
}

void video_interfaces__msg__Image__rosidl_typesupport_introspection_c__Image_fini_function(void * message_memory)
{
  video_interfaces__msg__Image__fini(message_memory);
}

static rosidl_typesupport_introspection_c__MessageMember video_interfaces__msg__Image__rosidl_typesupport_introspection_c__Image_message_member_array[2] = {
  {
    "img_pre",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(video_interfaces__msg__Image, img_pre),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "img_th1",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(video_interfaces__msg__Image, img_th1),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers video_interfaces__msg__Image__rosidl_typesupport_introspection_c__Image_message_members = {
  "video_interfaces__msg",  // message namespace
  "Image",  // message name
  2,  // number of fields
  sizeof(video_interfaces__msg__Image),
  video_interfaces__msg__Image__rosidl_typesupport_introspection_c__Image_message_member_array,  // message members
  video_interfaces__msg__Image__rosidl_typesupport_introspection_c__Image_init_function,  // function to initialize message memory (memory has to be allocated)
  video_interfaces__msg__Image__rosidl_typesupport_introspection_c__Image_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t video_interfaces__msg__Image__rosidl_typesupport_introspection_c__Image_message_type_support_handle = {
  0,
  &video_interfaces__msg__Image__rosidl_typesupport_introspection_c__Image_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_video_interfaces
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, video_interfaces, msg, Image)() {
  video_interfaces__msg__Image__rosidl_typesupport_introspection_c__Image_message_member_array[0].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, sensor_msgs, msg, Image)();
  video_interfaces__msg__Image__rosidl_typesupport_introspection_c__Image_message_member_array[1].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, sensor_msgs, msg, Image)();
  if (!video_interfaces__msg__Image__rosidl_typesupport_introspection_c__Image_message_type_support_handle.typesupport_identifier) {
    video_interfaces__msg__Image__rosidl_typesupport_introspection_c__Image_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &video_interfaces__msg__Image__rosidl_typesupport_introspection_c__Image_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif
