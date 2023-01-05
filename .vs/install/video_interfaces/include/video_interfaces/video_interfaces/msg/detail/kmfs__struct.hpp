// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from video_interfaces:msg/Kmfs.idl
// generated code does not contain a copyright notice

#ifndef VIDEO_INTERFACES__MSG__DETAIL__KMFS__STRUCT_HPP_
#define VIDEO_INTERFACES__MSG__DETAIL__KMFS__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


#ifndef _WIN32
# define DEPRECATED__video_interfaces__msg__Kmfs __attribute__((deprecated))
#else
# define DEPRECATED__video_interfaces__msg__Kmfs __declspec(deprecated)
#endif

namespace video_interfaces
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct Kmfs_
{
  using Type = Kmfs_<ContainerAllocator>;

  explicit Kmfs_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->x1 = 0.0f;
      this->y1 = 0.0f;
      this->x2 = 0.0f;
      this->y2 = 0.0f;
      this->open = false;
    }
  }

  explicit Kmfs_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    (void)_alloc;
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->x1 = 0.0f;
      this->y1 = 0.0f;
      this->x2 = 0.0f;
      this->y2 = 0.0f;
      this->open = false;
    }
  }

  // field types and members
  using _x1_type =
    float;
  _x1_type x1;
  using _y1_type =
    float;
  _y1_type y1;
  using _x2_type =
    float;
  _x2_type x2;
  using _y2_type =
    float;
  _y2_type y2;
  using _open_type =
    bool;
  _open_type open;

  // setters for named parameter idiom
  Type & set__x1(
    const float & _arg)
  {
    this->x1 = _arg;
    return *this;
  }
  Type & set__y1(
    const float & _arg)
  {
    this->y1 = _arg;
    return *this;
  }
  Type & set__x2(
    const float & _arg)
  {
    this->x2 = _arg;
    return *this;
  }
  Type & set__y2(
    const float & _arg)
  {
    this->y2 = _arg;
    return *this;
  }
  Type & set__open(
    const bool & _arg)
  {
    this->open = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    video_interfaces::msg::Kmfs_<ContainerAllocator> *;
  using ConstRawPtr =
    const video_interfaces::msg::Kmfs_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<video_interfaces::msg::Kmfs_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<video_interfaces::msg::Kmfs_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      video_interfaces::msg::Kmfs_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<video_interfaces::msg::Kmfs_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      video_interfaces::msg::Kmfs_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<video_interfaces::msg::Kmfs_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<video_interfaces::msg::Kmfs_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<video_interfaces::msg::Kmfs_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__video_interfaces__msg__Kmfs
    std::shared_ptr<video_interfaces::msg::Kmfs_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__video_interfaces__msg__Kmfs
    std::shared_ptr<video_interfaces::msg::Kmfs_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const Kmfs_ & other) const
  {
    if (this->x1 != other.x1) {
      return false;
    }
    if (this->y1 != other.y1) {
      return false;
    }
    if (this->x2 != other.x2) {
      return false;
    }
    if (this->y2 != other.y2) {
      return false;
    }
    if (this->open != other.open) {
      return false;
    }
    return true;
  }
  bool operator!=(const Kmfs_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct Kmfs_

// alias to use template instance with default allocator
using Kmfs =
  video_interfaces::msg::Kmfs_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace video_interfaces

#endif  // VIDEO_INTERFACES__MSG__DETAIL__KMFS__STRUCT_HPP_
