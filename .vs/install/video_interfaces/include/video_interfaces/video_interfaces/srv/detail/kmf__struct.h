// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from video_interfaces:srv/Kmf.idl
// generated code does not contain a copyright notice

#ifndef VIDEO_INTERFACES__SRV__DETAIL__KMF__STRUCT_H_
#define VIDEO_INTERFACES__SRV__DETAIL__KMF__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

/// Struct defined in srv/Kmf in the package video_interfaces.
typedef struct video_interfaces__srv__Kmf_Request
{
  float x1;
  float y1;
  float x2;
  float y2;
} video_interfaces__srv__Kmf_Request;

// Struct for a sequence of video_interfaces__srv__Kmf_Request.
typedef struct video_interfaces__srv__Kmf_Request__Sequence
{
  video_interfaces__srv__Kmf_Request * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} video_interfaces__srv__Kmf_Request__Sequence;


// Constants defined in the message

/// Struct defined in srv/Kmf in the package video_interfaces.
typedef struct video_interfaces__srv__Kmf_Response
{
  float x1;
  float y1;
  float x2;
  float y2;
} video_interfaces__srv__Kmf_Response;

// Struct for a sequence of video_interfaces__srv__Kmf_Response.
typedef struct video_interfaces__srv__Kmf_Response__Sequence
{
  video_interfaces__srv__Kmf_Response * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} video_interfaces__srv__Kmf_Response__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // VIDEO_INTERFACES__SRV__DETAIL__KMF__STRUCT_H_
