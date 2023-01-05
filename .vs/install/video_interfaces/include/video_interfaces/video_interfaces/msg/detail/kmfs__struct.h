// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from video_interfaces:msg/Kmfs.idl
// generated code does not contain a copyright notice

#ifndef VIDEO_INTERFACES__MSG__DETAIL__KMFS__STRUCT_H_
#define VIDEO_INTERFACES__MSG__DETAIL__KMFS__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

/// Struct defined in msg/Kmfs in the package video_interfaces.
typedef struct video_interfaces__msg__Kmfs
{
  float x1;
  float y1;
  float x2;
  float y2;
  bool open;
} video_interfaces__msg__Kmfs;

// Struct for a sequence of video_interfaces__msg__Kmfs.
typedef struct video_interfaces__msg__Kmfs__Sequence
{
  video_interfaces__msg__Kmfs * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} video_interfaces__msg__Kmfs__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // VIDEO_INTERFACES__MSG__DETAIL__KMFS__STRUCT_H_
