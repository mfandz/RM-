// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from video_interfaces:msg/Pos.idl
// generated code does not contain a copyright notice

#ifndef VIDEO_INTERFACES__MSG__DETAIL__POS__STRUCT_H_
#define VIDEO_INTERFACES__MSG__DETAIL__POS__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

/// Struct defined in msg/Pos in the package video_interfaces.
typedef struct video_interfaces__msg__Pos
{
  float x1;
  float y1;
  float x2;
  float y2;
  float width;
  float height;
  float angle;
  bool open;
  bool success;
} video_interfaces__msg__Pos;

// Struct for a sequence of video_interfaces__msg__Pos.
typedef struct video_interfaces__msg__Pos__Sequence
{
  video_interfaces__msg__Pos * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} video_interfaces__msg__Pos__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // VIDEO_INTERFACES__MSG__DETAIL__POS__STRUCT_H_
