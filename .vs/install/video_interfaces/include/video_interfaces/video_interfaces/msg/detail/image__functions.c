// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from video_interfaces:msg/Image.idl
// generated code does not contain a copyright notice
#include "video_interfaces/msg/detail/image__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"


// Include directives for member types
// Member `img_pre`
// Member `img_th1`
#include "sensor_msgs/msg/detail/image__functions.h"

bool
video_interfaces__msg__Image__init(video_interfaces__msg__Image * msg)
{
  if (!msg) {
    return false;
  }
  // img_pre
  if (!sensor_msgs__msg__Image__init(&msg->img_pre)) {
    video_interfaces__msg__Image__fini(msg);
    return false;
  }
  // img_th1
  if (!sensor_msgs__msg__Image__init(&msg->img_th1)) {
    video_interfaces__msg__Image__fini(msg);
    return false;
  }
  return true;
}

void
video_interfaces__msg__Image__fini(video_interfaces__msg__Image * msg)
{
  if (!msg) {
    return;
  }
  // img_pre
  sensor_msgs__msg__Image__fini(&msg->img_pre);
  // img_th1
  sensor_msgs__msg__Image__fini(&msg->img_th1);
}

bool
video_interfaces__msg__Image__are_equal(const video_interfaces__msg__Image * lhs, const video_interfaces__msg__Image * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // img_pre
  if (!sensor_msgs__msg__Image__are_equal(
      &(lhs->img_pre), &(rhs->img_pre)))
  {
    return false;
  }
  // img_th1
  if (!sensor_msgs__msg__Image__are_equal(
      &(lhs->img_th1), &(rhs->img_th1)))
  {
    return false;
  }
  return true;
}

bool
video_interfaces__msg__Image__copy(
  const video_interfaces__msg__Image * input,
  video_interfaces__msg__Image * output)
{
  if (!input || !output) {
    return false;
  }
  // img_pre
  if (!sensor_msgs__msg__Image__copy(
      &(input->img_pre), &(output->img_pre)))
  {
    return false;
  }
  // img_th1
  if (!sensor_msgs__msg__Image__copy(
      &(input->img_th1), &(output->img_th1)))
  {
    return false;
  }
  return true;
}

video_interfaces__msg__Image *
video_interfaces__msg__Image__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  video_interfaces__msg__Image * msg = (video_interfaces__msg__Image *)allocator.allocate(sizeof(video_interfaces__msg__Image), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(video_interfaces__msg__Image));
  bool success = video_interfaces__msg__Image__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
video_interfaces__msg__Image__destroy(video_interfaces__msg__Image * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    video_interfaces__msg__Image__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
video_interfaces__msg__Image__Sequence__init(video_interfaces__msg__Image__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  video_interfaces__msg__Image * data = NULL;

  if (size) {
    data = (video_interfaces__msg__Image *)allocator.zero_allocate(size, sizeof(video_interfaces__msg__Image), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = video_interfaces__msg__Image__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        video_interfaces__msg__Image__fini(&data[i - 1]);
      }
      allocator.deallocate(data, allocator.state);
      return false;
    }
  }
  array->data = data;
  array->size = size;
  array->capacity = size;
  return true;
}

void
video_interfaces__msg__Image__Sequence__fini(video_interfaces__msg__Image__Sequence * array)
{
  if (!array) {
    return;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();

  if (array->data) {
    // ensure that data and capacity values are consistent
    assert(array->capacity > 0);
    // finalize all array elements
    for (size_t i = 0; i < array->capacity; ++i) {
      video_interfaces__msg__Image__fini(&array->data[i]);
    }
    allocator.deallocate(array->data, allocator.state);
    array->data = NULL;
    array->size = 0;
    array->capacity = 0;
  } else {
    // ensure that data, size, and capacity values are consistent
    assert(0 == array->size);
    assert(0 == array->capacity);
  }
}

video_interfaces__msg__Image__Sequence *
video_interfaces__msg__Image__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  video_interfaces__msg__Image__Sequence * array = (video_interfaces__msg__Image__Sequence *)allocator.allocate(sizeof(video_interfaces__msg__Image__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = video_interfaces__msg__Image__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
video_interfaces__msg__Image__Sequence__destroy(video_interfaces__msg__Image__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    video_interfaces__msg__Image__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
video_interfaces__msg__Image__Sequence__are_equal(const video_interfaces__msg__Image__Sequence * lhs, const video_interfaces__msg__Image__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!video_interfaces__msg__Image__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
video_interfaces__msg__Image__Sequence__copy(
  const video_interfaces__msg__Image__Sequence * input,
  video_interfaces__msg__Image__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(video_interfaces__msg__Image);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    video_interfaces__msg__Image * data =
      (video_interfaces__msg__Image *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!video_interfaces__msg__Image__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          video_interfaces__msg__Image__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!video_interfaces__msg__Image__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
