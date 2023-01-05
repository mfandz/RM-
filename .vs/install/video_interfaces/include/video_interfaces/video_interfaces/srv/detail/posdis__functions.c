// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from video_interfaces:srv/Posdis.idl
// generated code does not contain a copyright notice
#include "video_interfaces/srv/detail/posdis__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"

bool
video_interfaces__srv__Posdis_Request__init(video_interfaces__srv__Posdis_Request * msg)
{
  if (!msg) {
    return false;
  }
  // x1
  // y1
  // x2
  // y2
  // open
  return true;
}

void
video_interfaces__srv__Posdis_Request__fini(video_interfaces__srv__Posdis_Request * msg)
{
  if (!msg) {
    return;
  }
  // x1
  // y1
  // x2
  // y2
  // open
}

bool
video_interfaces__srv__Posdis_Request__are_equal(const video_interfaces__srv__Posdis_Request * lhs, const video_interfaces__srv__Posdis_Request * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // x1
  if (lhs->x1 != rhs->x1) {
    return false;
  }
  // y1
  if (lhs->y1 != rhs->y1) {
    return false;
  }
  // x2
  if (lhs->x2 != rhs->x2) {
    return false;
  }
  // y2
  if (lhs->y2 != rhs->y2) {
    return false;
  }
  // open
  if (lhs->open != rhs->open) {
    return false;
  }
  return true;
}

bool
video_interfaces__srv__Posdis_Request__copy(
  const video_interfaces__srv__Posdis_Request * input,
  video_interfaces__srv__Posdis_Request * output)
{
  if (!input || !output) {
    return false;
  }
  // x1
  output->x1 = input->x1;
  // y1
  output->y1 = input->y1;
  // x2
  output->x2 = input->x2;
  // y2
  output->y2 = input->y2;
  // open
  output->open = input->open;
  return true;
}

video_interfaces__srv__Posdis_Request *
video_interfaces__srv__Posdis_Request__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  video_interfaces__srv__Posdis_Request * msg = (video_interfaces__srv__Posdis_Request *)allocator.allocate(sizeof(video_interfaces__srv__Posdis_Request), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(video_interfaces__srv__Posdis_Request));
  bool success = video_interfaces__srv__Posdis_Request__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
video_interfaces__srv__Posdis_Request__destroy(video_interfaces__srv__Posdis_Request * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    video_interfaces__srv__Posdis_Request__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
video_interfaces__srv__Posdis_Request__Sequence__init(video_interfaces__srv__Posdis_Request__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  video_interfaces__srv__Posdis_Request * data = NULL;

  if (size) {
    data = (video_interfaces__srv__Posdis_Request *)allocator.zero_allocate(size, sizeof(video_interfaces__srv__Posdis_Request), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = video_interfaces__srv__Posdis_Request__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        video_interfaces__srv__Posdis_Request__fini(&data[i - 1]);
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
video_interfaces__srv__Posdis_Request__Sequence__fini(video_interfaces__srv__Posdis_Request__Sequence * array)
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
      video_interfaces__srv__Posdis_Request__fini(&array->data[i]);
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

video_interfaces__srv__Posdis_Request__Sequence *
video_interfaces__srv__Posdis_Request__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  video_interfaces__srv__Posdis_Request__Sequence * array = (video_interfaces__srv__Posdis_Request__Sequence *)allocator.allocate(sizeof(video_interfaces__srv__Posdis_Request__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = video_interfaces__srv__Posdis_Request__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
video_interfaces__srv__Posdis_Request__Sequence__destroy(video_interfaces__srv__Posdis_Request__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    video_interfaces__srv__Posdis_Request__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
video_interfaces__srv__Posdis_Request__Sequence__are_equal(const video_interfaces__srv__Posdis_Request__Sequence * lhs, const video_interfaces__srv__Posdis_Request__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!video_interfaces__srv__Posdis_Request__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
video_interfaces__srv__Posdis_Request__Sequence__copy(
  const video_interfaces__srv__Posdis_Request__Sequence * input,
  video_interfaces__srv__Posdis_Request__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(video_interfaces__srv__Posdis_Request);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    video_interfaces__srv__Posdis_Request * data =
      (video_interfaces__srv__Posdis_Request *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!video_interfaces__srv__Posdis_Request__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          video_interfaces__srv__Posdis_Request__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!video_interfaces__srv__Posdis_Request__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}


bool
video_interfaces__srv__Posdis_Response__init(video_interfaces__srv__Posdis_Response * msg)
{
  if (!msg) {
    return false;
  }
  // x1_predict
  // y1_predict
  // x2_predict
  // y2_predict
  return true;
}

void
video_interfaces__srv__Posdis_Response__fini(video_interfaces__srv__Posdis_Response * msg)
{
  if (!msg) {
    return;
  }
  // x1_predict
  // y1_predict
  // x2_predict
  // y2_predict
}

bool
video_interfaces__srv__Posdis_Response__are_equal(const video_interfaces__srv__Posdis_Response * lhs, const video_interfaces__srv__Posdis_Response * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // x1_predict
  if (lhs->x1_predict != rhs->x1_predict) {
    return false;
  }
  // y1_predict
  if (lhs->y1_predict != rhs->y1_predict) {
    return false;
  }
  // x2_predict
  if (lhs->x2_predict != rhs->x2_predict) {
    return false;
  }
  // y2_predict
  if (lhs->y2_predict != rhs->y2_predict) {
    return false;
  }
  return true;
}

bool
video_interfaces__srv__Posdis_Response__copy(
  const video_interfaces__srv__Posdis_Response * input,
  video_interfaces__srv__Posdis_Response * output)
{
  if (!input || !output) {
    return false;
  }
  // x1_predict
  output->x1_predict = input->x1_predict;
  // y1_predict
  output->y1_predict = input->y1_predict;
  // x2_predict
  output->x2_predict = input->x2_predict;
  // y2_predict
  output->y2_predict = input->y2_predict;
  return true;
}

video_interfaces__srv__Posdis_Response *
video_interfaces__srv__Posdis_Response__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  video_interfaces__srv__Posdis_Response * msg = (video_interfaces__srv__Posdis_Response *)allocator.allocate(sizeof(video_interfaces__srv__Posdis_Response), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(video_interfaces__srv__Posdis_Response));
  bool success = video_interfaces__srv__Posdis_Response__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
video_interfaces__srv__Posdis_Response__destroy(video_interfaces__srv__Posdis_Response * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    video_interfaces__srv__Posdis_Response__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
video_interfaces__srv__Posdis_Response__Sequence__init(video_interfaces__srv__Posdis_Response__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  video_interfaces__srv__Posdis_Response * data = NULL;

  if (size) {
    data = (video_interfaces__srv__Posdis_Response *)allocator.zero_allocate(size, sizeof(video_interfaces__srv__Posdis_Response), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = video_interfaces__srv__Posdis_Response__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        video_interfaces__srv__Posdis_Response__fini(&data[i - 1]);
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
video_interfaces__srv__Posdis_Response__Sequence__fini(video_interfaces__srv__Posdis_Response__Sequence * array)
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
      video_interfaces__srv__Posdis_Response__fini(&array->data[i]);
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

video_interfaces__srv__Posdis_Response__Sequence *
video_interfaces__srv__Posdis_Response__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  video_interfaces__srv__Posdis_Response__Sequence * array = (video_interfaces__srv__Posdis_Response__Sequence *)allocator.allocate(sizeof(video_interfaces__srv__Posdis_Response__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = video_interfaces__srv__Posdis_Response__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
video_interfaces__srv__Posdis_Response__Sequence__destroy(video_interfaces__srv__Posdis_Response__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    video_interfaces__srv__Posdis_Response__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
video_interfaces__srv__Posdis_Response__Sequence__are_equal(const video_interfaces__srv__Posdis_Response__Sequence * lhs, const video_interfaces__srv__Posdis_Response__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!video_interfaces__srv__Posdis_Response__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
video_interfaces__srv__Posdis_Response__Sequence__copy(
  const video_interfaces__srv__Posdis_Response__Sequence * input,
  video_interfaces__srv__Posdis_Response__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(video_interfaces__srv__Posdis_Response);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    video_interfaces__srv__Posdis_Response * data =
      (video_interfaces__srv__Posdis_Response *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!video_interfaces__srv__Posdis_Response__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          video_interfaces__srv__Posdis_Response__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!video_interfaces__srv__Posdis_Response__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
