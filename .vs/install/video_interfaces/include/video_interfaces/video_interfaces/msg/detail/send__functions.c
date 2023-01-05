// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from video_interfaces:msg/Send.idl
// generated code does not contain a copyright notice
#include "video_interfaces/msg/detail/send__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"


bool
video_interfaces__msg__Send__init(video_interfaces__msg__Send * msg)
{
  if (!msg) {
    return false;
  }
  // dist
  // rvec
  // tvec
  // pitch
  // roll
  return true;
}

void
video_interfaces__msg__Send__fini(video_interfaces__msg__Send * msg)
{
  if (!msg) {
    return;
  }
  // dist
  // rvec
  // tvec
  // pitch
  // roll
}

bool
video_interfaces__msg__Send__are_equal(const video_interfaces__msg__Send * lhs, const video_interfaces__msg__Send * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // dist
  if (lhs->dist != rhs->dist) {
    return false;
  }
  // rvec
  for (size_t i = 0; i < 3; ++i) {
    if (lhs->rvec[i] != rhs->rvec[i]) {
      return false;
    }
  }
  // tvec
  for (size_t i = 0; i < 3; ++i) {
    if (lhs->tvec[i] != rhs->tvec[i]) {
      return false;
    }
  }
  // pitch
  if (lhs->pitch != rhs->pitch) {
    return false;
  }
  // roll
  if (lhs->roll != rhs->roll) {
    return false;
  }
  return true;
}

bool
video_interfaces__msg__Send__copy(
  const video_interfaces__msg__Send * input,
  video_interfaces__msg__Send * output)
{
  if (!input || !output) {
    return false;
  }
  // dist
  output->dist = input->dist;
  // rvec
  for (size_t i = 0; i < 3; ++i) {
    output->rvec[i] = input->rvec[i];
  }
  // tvec
  for (size_t i = 0; i < 3; ++i) {
    output->tvec[i] = input->tvec[i];
  }
  // pitch
  output->pitch = input->pitch;
  // roll
  output->roll = input->roll;
  return true;
}

video_interfaces__msg__Send *
video_interfaces__msg__Send__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  video_interfaces__msg__Send * msg = (video_interfaces__msg__Send *)allocator.allocate(sizeof(video_interfaces__msg__Send), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(video_interfaces__msg__Send));
  bool success = video_interfaces__msg__Send__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
video_interfaces__msg__Send__destroy(video_interfaces__msg__Send * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    video_interfaces__msg__Send__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
video_interfaces__msg__Send__Sequence__init(video_interfaces__msg__Send__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  video_interfaces__msg__Send * data = NULL;

  if (size) {
    data = (video_interfaces__msg__Send *)allocator.zero_allocate(size, sizeof(video_interfaces__msg__Send), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = video_interfaces__msg__Send__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        video_interfaces__msg__Send__fini(&data[i - 1]);
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
video_interfaces__msg__Send__Sequence__fini(video_interfaces__msg__Send__Sequence * array)
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
      video_interfaces__msg__Send__fini(&array->data[i]);
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

video_interfaces__msg__Send__Sequence *
video_interfaces__msg__Send__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  video_interfaces__msg__Send__Sequence * array = (video_interfaces__msg__Send__Sequence *)allocator.allocate(sizeof(video_interfaces__msg__Send__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = video_interfaces__msg__Send__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
video_interfaces__msg__Send__Sequence__destroy(video_interfaces__msg__Send__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    video_interfaces__msg__Send__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
video_interfaces__msg__Send__Sequence__are_equal(const video_interfaces__msg__Send__Sequence * lhs, const video_interfaces__msg__Send__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!video_interfaces__msg__Send__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
video_interfaces__msg__Send__Sequence__copy(
  const video_interfaces__msg__Send__Sequence * input,
  video_interfaces__msg__Send__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(video_interfaces__msg__Send);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    video_interfaces__msg__Send * data =
      (video_interfaces__msg__Send *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!video_interfaces__msg__Send__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          video_interfaces__msg__Send__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!video_interfaces__msg__Send__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
