// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from video_interfaces:msg/Image.idl
// generated code does not contain a copyright notice

#ifndef VIDEO_INTERFACES__MSG__DETAIL__IMAGE__STRUCT_H_
#define VIDEO_INTERFACES__MSG__DETAIL__IMAGE__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

// Include directives for member types
// Member 'img_pre'
// Member 'img_th1'
#include "sensor_msgs/msg/detail/image__struct.h"

/// Struct defined in msg/Image in the package video_interfaces.
typedef struct video_interfaces__msg__Image
{
  sensor_msgs__msg__Image img_pre;
  sensor_msgs__msg__Image img_th1;
} video_interfaces__msg__Image;

// Struct for a sequence of video_interfaces__msg__Image.
typedef struct video_interfaces__msg__Image__Sequence
{
  video_interfaces__msg__Image * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} video_interfaces__msg__Image__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // VIDEO_INTERFACES__MSG__DETAIL__IMAGE__STRUCT_H_
