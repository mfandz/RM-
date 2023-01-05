// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from video_interfaces:msg/Send.idl
// generated code does not contain a copyright notice

#ifndef VIDEO_INTERFACES__MSG__DETAIL__SEND__STRUCT_H_
#define VIDEO_INTERFACES__MSG__DETAIL__SEND__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

/// Struct defined in msg/Send in the package video_interfaces.
typedef struct video_interfaces__msg__Send
{
  float dist;
  float rvec[3];
  float tvec[3];
  float pitch;
  float roll;
} video_interfaces__msg__Send;

// Struct for a sequence of video_interfaces__msg__Send.
typedef struct video_interfaces__msg__Send__Sequence
{
  video_interfaces__msg__Send * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} video_interfaces__msg__Send__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // VIDEO_INTERFACES__MSG__DETAIL__SEND__STRUCT_H_
