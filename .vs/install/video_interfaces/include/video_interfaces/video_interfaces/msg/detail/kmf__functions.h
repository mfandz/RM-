// generated from rosidl_generator_c/resource/idl__functions.h.em
// with input from video_interfaces:msg/Kmf.idl
// generated code does not contain a copyright notice

#ifndef VIDEO_INTERFACES__MSG__DETAIL__KMF__FUNCTIONS_H_
#define VIDEO_INTERFACES__MSG__DETAIL__KMF__FUNCTIONS_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stdlib.h>

#include "rosidl_runtime_c/visibility_control.h"
#include "video_interfaces/msg/rosidl_generator_c__visibility_control.h"

#include "video_interfaces/msg/detail/kmf__struct.h"

/// Initialize msg/Kmf message.
/**
 * If the init function is called twice for the same message without
 * calling fini inbetween previously allocated memory will be leaked.
 * \param[in,out] msg The previously allocated message pointer.
 * Fields without a default value will not be initialized by this function.
 * You might want to call memset(msg, 0, sizeof(
 * video_interfaces__msg__Kmf
 * )) before or use
 * video_interfaces__msg__Kmf__create()
 * to allocate and initialize the message.
 * \return true if initialization was successful, otherwise false
 */
ROSIDL_GENERATOR_C_PUBLIC_video_interfaces
bool
video_interfaces__msg__Kmf__init(video_interfaces__msg__Kmf * msg);

/// Finalize msg/Kmf message.
/**
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_video_interfaces
void
video_interfaces__msg__Kmf__fini(video_interfaces__msg__Kmf * msg);

/// Create msg/Kmf message.
/**
 * It allocates the memory for the message, sets the memory to zero, and
 * calls
 * video_interfaces__msg__Kmf__init().
 * \return The pointer to the initialized message if successful,
 * otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_video_interfaces
video_interfaces__msg__Kmf *
video_interfaces__msg__Kmf__create();

/// Destroy msg/Kmf message.
/**
 * It calls
 * video_interfaces__msg__Kmf__fini()
 * and frees the memory of the message.
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_video_interfaces
void
video_interfaces__msg__Kmf__destroy(video_interfaces__msg__Kmf * msg);

/// Check for msg/Kmf message equality.
/**
 * \param[in] lhs The message on the left hand size of the equality operator.
 * \param[in] rhs The message on the right hand size of the equality operator.
 * \return true if messages are equal, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_video_interfaces
bool
video_interfaces__msg__Kmf__are_equal(const video_interfaces__msg__Kmf * lhs, const video_interfaces__msg__Kmf * rhs);

/// Copy a msg/Kmf message.
/**
 * This functions performs a deep copy, as opposed to the shallow copy that
 * plain assignment yields.
 *
 * \param[in] input The source message pointer.
 * \param[out] output The target message pointer, which must
 *   have been initialized before calling this function.
 * \return true if successful, or false if either pointer is null
 *   or memory allocation fails.
 */
ROSIDL_GENERATOR_C_PUBLIC_video_interfaces
bool
video_interfaces__msg__Kmf__copy(
  const video_interfaces__msg__Kmf * input,
  video_interfaces__msg__Kmf * output);

/// Initialize array of msg/Kmf messages.
/**
 * It allocates the memory for the number of elements and calls
 * video_interfaces__msg__Kmf__init()
 * for each element of the array.
 * \param[in,out] array The allocated array pointer.
 * \param[in] size The size / capacity of the array.
 * \return true if initialization was successful, otherwise false
 * If the array pointer is valid and the size is zero it is guaranteed
 # to return true.
 */
ROSIDL_GENERATOR_C_PUBLIC_video_interfaces
bool
video_interfaces__msg__Kmf__Sequence__init(video_interfaces__msg__Kmf__Sequence * array, size_t size);

/// Finalize array of msg/Kmf messages.
/**
 * It calls
 * video_interfaces__msg__Kmf__fini()
 * for each element of the array and frees the memory for the number of
 * elements.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_video_interfaces
void
video_interfaces__msg__Kmf__Sequence__fini(video_interfaces__msg__Kmf__Sequence * array);

/// Create array of msg/Kmf messages.
/**
 * It allocates the memory for the array and calls
 * video_interfaces__msg__Kmf__Sequence__init().
 * \param[in] size The size / capacity of the array.
 * \return The pointer to the initialized array if successful, otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_video_interfaces
video_interfaces__msg__Kmf__Sequence *
video_interfaces__msg__Kmf__Sequence__create(size_t size);

/// Destroy array of msg/Kmf messages.
/**
 * It calls
 * video_interfaces__msg__Kmf__Sequence__fini()
 * on the array,
 * and frees the memory of the array.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_video_interfaces
void
video_interfaces__msg__Kmf__Sequence__destroy(video_interfaces__msg__Kmf__Sequence * array);

/// Check for msg/Kmf message array equality.
/**
 * \param[in] lhs The message array on the left hand size of the equality operator.
 * \param[in] rhs The message array on the right hand size of the equality operator.
 * \return true if message arrays are equal in size and content, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_video_interfaces
bool
video_interfaces__msg__Kmf__Sequence__are_equal(const video_interfaces__msg__Kmf__Sequence * lhs, const video_interfaces__msg__Kmf__Sequence * rhs);

/// Copy an array of msg/Kmf messages.
/**
 * This functions performs a deep copy, as opposed to the shallow copy that
 * plain assignment yields.
 *
 * \param[in] input The source array pointer.
 * \param[out] output The target array pointer, which must
 *   have been initialized before calling this function.
 * \return true if successful, or false if either pointer
 *   is null or memory allocation fails.
 */
ROSIDL_GENERATOR_C_PUBLIC_video_interfaces
bool
video_interfaces__msg__Kmf__Sequence__copy(
  const video_interfaces__msg__Kmf__Sequence * input,
  video_interfaces__msg__Kmf__Sequence * output);

#ifdef __cplusplus
}
#endif

#endif  // VIDEO_INTERFACES__MSG__DETAIL__KMF__FUNCTIONS_H_
