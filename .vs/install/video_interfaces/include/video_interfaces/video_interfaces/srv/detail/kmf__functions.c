// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from video_interfaces:srv/Kmf.idl
// generated code does not contain a copyright notice
#include "video_interfaces/srv/detail/kmf__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"

bool
video_interfaces__srv__Kmf_Request__init(video_interfaces__srv__Kmf_Request * msg)
{
  if (!msg) {
    return false;
  }
  // x1
  // y1
  // x2
  // y2
  return true;
}

void
video_interfaces__srv__Kmf_Request__fini(video_interfaces__srv__Kmf_Request * msg)
{
  if (!msg) {
    return;
  }
  // x1
  // y1
  // x2
  // y2
}

bool
video_interfaces__srv__Kmf_Request__are_equal(const video_interfaces__srv__Kmf_Request * lhs, const video_interfaces__srv__Kmf_Request * rhs)
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
  return true;
}

bool
video_interfaces__srv__Kmf_Request__copy(
  const video_interfaces__srv__Kmf_Request * input,
  video_interfaces__srv__Kmf_Request * output)
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
  return true;
}

video_interfaces__srv__Kmf_Request *
video_interfaces__srv__Kmf_Request__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  video_interfaces__srv__Kmf_Request * msg = (video_interfaces__srv__Kmf_Request *)allocator.allocate(sizeof(video_interfaces__srv__Kmf_Request), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(video_interfaces__srv__Kmf_Request));
  bool success = video_interfaces__srv__Kmf_Request__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
video_interfaces__srv__Kmf_Request__destroy(video_interfaces__srv__Kmf_Request * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    video_interfaces__srv__Kmf_Request__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
video_interfaces__srv__Kmf_Request__Sequence__init(video_interfaces__srv__Kmf_Request__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  video_interfaces__srv__Kmf_Request * data = NULL;

  if (size) {
    data = (video_interfaces__srv__Kmf_Request *)allocator.zero_allocate(size, sizeof(video_interfaces__srv__Kmf_Request), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = video_interfaces__srv__Kmf_Request__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        video_interfaces__srv__Kmf_Request__fini(&data[i - 1]);
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
video_interfaces__srv__Kmf_Request__Sequence__fini(video_interfaces__srv__Kmf_Request__Sequence * array)
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
      video_interfaces__srv__Kmf_Request__fini(&array->data[i]);
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

video_interfaces__srv__Kmf_Request__Sequence *
video_interfaces__srv__Kmf_Request__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  video_interfaces__srv__Kmf_Request__Sequence * array = (video_interfaces__srv__Kmf_Request__Sequence *)allocator.allocate(sizeof(video_interfaces__srv__Kmf_Request__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = video_interfaces__srv__Kmf_Request__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
video_interfaces__srv__Kmf_Request__Sequence__destroy(video_interfaces__srv__Kmf_Request__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    video_interfaces__srv__Kmf_Request__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
video_interfaces__srv__Kmf_Request__Sequence__are_equal(const video_interfaces__srv__Kmf_Request__Sequence * lhs, const video_interfaces__srv__Kmf_Request__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!video_interfaces__srv__Kmf_Request__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
video_interfaces__srv__Kmf_Request__Sequence__copy(
  const video_interfaces__srv__Kmf_Request__Sequence * input,
  video_interfaces__srv__Kmf_Request__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(video_interfaces__srv__Kmf_Request);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    video_interfaces__srv__Kmf_Request * data =
      (video_interfaces__srv__Kmf_Request *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!video_interfaces__srv__Kmf_Request__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          video_interfaces__srv__Kmf_Request__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!video_interfaces__srv__Kmf_Request__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}


bool
video_interfaces__srv__Kmf_Response__init(video_interfaces__srv__Kmf_Response * msg)
{
  if (!msg) {
    return false;
  }
  // x1
  // y1
  // x2
  // y2
  return true;
}

void
video_interfaces__srv__Kmf_Response__fini(video_interfaces__srv__Kmf_Response * msg)
{
  if (!msg) {
    return;
  }
  // x1
  // y1
  // x2
  // y2
}

bool
video_interfaces__srv__Kmf_Response__are_equal(const video_interfaces__srv__Kmf_Response * lhs, const video_interfaces__srv__Kmf_Response * rhs)
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
  return true;
}

bool
video_interfaces__srv__Kmf_Response__copy(
  const video_interfaces__srv__Kmf_Response * input,
  video_interfaces__srv__Kmf_Response * output)
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
  return true;
}

video_interfaces__srv__Kmf_Response *
video_interfaces__srv__Kmf_Response__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  video_interfaces__srv__Kmf_Response * msg = (video_interfaces__srv__Kmf_Response *)allocator.allocate(sizeof(video_interfaces__srv__Kmf_Response), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(video_interfaces__srv__Kmf_Response));
  bool success = video_interfaces__srv__Kmf_Response__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
video_interfaces__srv__Kmf_Response__destroy(video_interfaces__srv__Kmf_Response * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    video_interfaces__srv__Kmf_Response__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
video_interfaces__srv__Kmf_Response__Sequence__init(video_interfaces__srv__Kmf_Response__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  video_interfaces__srv__Kmf_Response * data = NULL;

  if (size) {
    data = (video_interfaces__srv__Kmf_Response *)allocator.zero_allocate(size, sizeof(video_interfaces__srv__Kmf_Response), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = video_interfaces__srv__Kmf_Response__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        video_interfaces__srv__Kmf_Response__fini(&data[i - 1]);
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
video_interfaces__srv__Kmf_Response__Sequence__fini(video_interfaces__srv__Kmf_Response__Sequence * array)
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
      video_interfaces__srv__Kmf_Response__fini(&array->data[i]);
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

video_interfaces__srv__Kmf_Response__Sequence *
video_interfaces__srv__Kmf_Response__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  video_interfaces__srv__Kmf_Response__Sequence * array = (video_interfaces__srv__Kmf_Response__Sequence *)allocator.allocate(sizeof(video_interfaces__srv__Kmf_Response__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = video_interfaces__srv__Kmf_Response__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
video_interfaces__srv__Kmf_Response__Sequence__destroy(video_interfaces__srv__Kmf_Response__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    video_interfaces__srv__Kmf_Response__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
video_interfaces__srv__Kmf_Response__Sequence__are_equal(const video_interfaces__srv__Kmf_Response__Sequence * lhs, const video_interfaces__srv__Kmf_Response__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!video_interfaces__srv__Kmf_Response__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
video_interfaces__srv__Kmf_Response__Sequence__copy(
  const video_interfaces__srv__Kmf_Response__Sequence * input,
  video_interfaces__srv__Kmf_Response__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(video_interfaces__srv__Kmf_Response);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    video_interfaces__srv__Kmf_Response * data =
      (video_interfaces__srv__Kmf_Response *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!video_interfaces__srv__Kmf_Response__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          video_interfaces__srv__Kmf_Response__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!video_interfaces__srv__Kmf_Response__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
