// generated from rosidl_typesupport_introspection_c/resource/idl__type_support.c.em
// with input from video_interfaces:msg/Send.idl
// generated code does not contain a copyright notice

#include <stddef.h>
#include "video_interfaces/msg/detail/send__rosidl_typesupport_introspection_c.h"
#include "video_interfaces/msg/rosidl_typesupport_introspection_c__visibility_control.h"
#include "rosidl_typesupport_introspection_c/field_types.h"
#include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/message_introspection.h"
#include "video_interfaces/msg/detail/send__functions.h"
#include "video_interfaces/msg/detail/send__struct.h"


#ifdef __cplusplus
extern "C"
{
#endif

void video_interfaces__msg__Send__rosidl_typesupport_introspection_c__Send_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  video_interfaces__msg__Send__init(message_memory);
}

void video_interfaces__msg__Send__rosidl_typesupport_introspection_c__Send_fini_function(void * message_memory)
{
  video_interfaces__msg__Send__fini(message_memory);
}

size_t video_interfaces__msg__Send__rosidl_typesupport_introspection_c__size_function__Send__rvec(
  const void * untyped_member)
{
  (void)untyped_member;
  return 3;
}

const void * video_interfaces__msg__Send__rosidl_typesupport_introspection_c__get_const_function__Send__rvec(
  const void * untyped_member, size_t index)
{
  const float * member =
    (const float *)(untyped_member);
  return &member[index];
}

void * video_interfaces__msg__Send__rosidl_typesupport_introspection_c__get_function__Send__rvec(
  void * untyped_member, size_t index)
{
  float * member =
    (float *)(untyped_member);
  return &member[index];
}

void video_interfaces__msg__Send__rosidl_typesupport_introspection_c__fetch_function__Send__rvec(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const float * item =
    ((const float *)
    video_interfaces__msg__Send__rosidl_typesupport_introspection_c__get_const_function__Send__rvec(untyped_member, index));
  float * value =
    (float *)(untyped_value);
  *value = *item;
}

void video_interfaces__msg__Send__rosidl_typesupport_introspection_c__assign_function__Send__rvec(
  void * untyped_member, size_t index, const void * untyped_value)
{
  float * item =
    ((float *)
    video_interfaces__msg__Send__rosidl_typesupport_introspection_c__get_function__Send__rvec(untyped_member, index));
  const float * value =
    (const float *)(untyped_value);
  *item = *value;
}

size_t video_interfaces__msg__Send__rosidl_typesupport_introspection_c__size_function__Send__tvec(
  const void * untyped_member)
{
  (void)untyped_member;
  return 3;
}

const void * video_interfaces__msg__Send__rosidl_typesupport_introspection_c__get_const_function__Send__tvec(
  const void * untyped_member, size_t index)
{
  const float * member =
    (const float *)(untyped_member);
  return &member[index];
}

void * video_interfaces__msg__Send__rosidl_typesupport_introspection_c__get_function__Send__tvec(
  void * untyped_member, size_t index)
{
  float * member =
    (float *)(untyped_member);
  return &member[index];
}

void video_interfaces__msg__Send__rosidl_typesupport_introspection_c__fetch_function__Send__tvec(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const float * item =
    ((const float *)
    video_interfaces__msg__Send__rosidl_typesupport_introspection_c__get_const_function__Send__tvec(untyped_member, index));
  float * value =
    (float *)(untyped_value);
  *value = *item;
}

void video_interfaces__msg__Send__rosidl_typesupport_introspection_c__assign_function__Send__tvec(
  void * untyped_member, size_t index, const void * untyped_value)
{
  float * item =
    ((float *)
    video_interfaces__msg__Send__rosidl_typesupport_introspection_c__get_function__Send__tvec(untyped_member, index));
  const float * value =
    (const float *)(untyped_value);
  *item = *value;
}

static rosidl_typesupport_introspection_c__MessageMember video_interfaces__msg__Send__rosidl_typesupport_introspection_c__Send_message_member_array[5] = {
  {
    "dist",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_FLOAT,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(video_interfaces__msg__Send, dist),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "rvec",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_FLOAT,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    true,  // is array
    3,  // array size
    false,  // is upper bound
    offsetof(video_interfaces__msg__Send, rvec),  // bytes offset in struct
    NULL,  // default value
    video_interfaces__msg__Send__rosidl_typesupport_introspection_c__size_function__Send__rvec,  // size() function pointer
    video_interfaces__msg__Send__rosidl_typesupport_introspection_c__get_const_function__Send__rvec,  // get_const(index) function pointer
    video_interfaces__msg__Send__rosidl_typesupport_introspection_c__get_function__Send__rvec,  // get(index) function pointer
    video_interfaces__msg__Send__rosidl_typesupport_introspection_c__fetch_function__Send__rvec,  // fetch(index, &value) function pointer
    video_interfaces__msg__Send__rosidl_typesupport_introspection_c__assign_function__Send__rvec,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "tvec",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_FLOAT,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    true,  // is array
    3,  // array size
    false,  // is upper bound
    offsetof(video_interfaces__msg__Send, tvec),  // bytes offset in struct
    NULL,  // default value
    video_interfaces__msg__Send__rosidl_typesupport_introspection_c__size_function__Send__tvec,  // size() function pointer
    video_interfaces__msg__Send__rosidl_typesupport_introspection_c__get_const_function__Send__tvec,  // get_const(index) function pointer
    video_interfaces__msg__Send__rosidl_typesupport_introspection_c__get_function__Send__tvec,  // get(index) function pointer
    video_interfaces__msg__Send__rosidl_typesupport_introspection_c__fetch_function__Send__tvec,  // fetch(index, &value) function pointer
    video_interfaces__msg__Send__rosidl_typesupport_introspection_c__assign_function__Send__tvec,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "pitch",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_FLOAT,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(video_interfaces__msg__Send, pitch),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "roll",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_FLOAT,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(video_interfaces__msg__Send, roll),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers video_interfaces__msg__Send__rosidl_typesupport_introspection_c__Send_message_members = {
  "video_interfaces__msg",  // message namespace
  "Send",  // message name
  5,  // number of fields
  sizeof(video_interfaces__msg__Send),
  video_interfaces__msg__Send__rosidl_typesupport_introspection_c__Send_message_member_array,  // message members
  video_interfaces__msg__Send__rosidl_typesupport_introspection_c__Send_init_function,  // function to initialize message memory (memory has to be allocated)
  video_interfaces__msg__Send__rosidl_typesupport_introspection_c__Send_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t video_interfaces__msg__Send__rosidl_typesupport_introspection_c__Send_message_type_support_handle = {
  0,
  &video_interfaces__msg__Send__rosidl_typesupport_introspection_c__Send_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_video_interfaces
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, video_interfaces, msg, Send)() {
  if (!video_interfaces__msg__Send__rosidl_typesupport_introspection_c__Send_message_type_support_handle.typesupport_identifier) {
    video_interfaces__msg__Send__rosidl_typesupport_introspection_c__Send_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &video_interfaces__msg__Send__rosidl_typesupport_introspection_c__Send_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif
