// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from video_interfaces:msg/Send.idl
// generated code does not contain a copyright notice

#ifndef VIDEO_INTERFACES__MSG__DETAIL__SEND__STRUCT_HPP_
#define VIDEO_INTERFACES__MSG__DETAIL__SEND__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


#ifndef _WIN32
# define DEPRECATED__video_interfaces__msg__Send __attribute__((deprecated))
#else
# define DEPRECATED__video_interfaces__msg__Send __declspec(deprecated)
#endif

namespace video_interfaces
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct Send_
{
  using Type = Send_<ContainerAllocator>;

  explicit Send_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->dist = 0.0f;
      std::fill<typename std::array<float, 3>::iterator, float>(this->rvec.begin(), this->rvec.end(), 0.0f);
      std::fill<typename std::array<float, 3>::iterator, float>(this->tvec.begin(), this->tvec.end(), 0.0f);
      this->pitch = 0.0f;
      this->roll = 0.0f;
    }
  }

  explicit Send_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : rvec(_alloc),
    tvec(_alloc)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->dist = 0.0f;
      std::fill<typename std::array<float, 3>::iterator, float>(this->rvec.begin(), this->rvec.end(), 0.0f);
      std::fill<typename std::array<float, 3>::iterator, float>(this->tvec.begin(), this->tvec.end(), 0.0f);
      this->pitch = 0.0f;
      this->roll = 0.0f;
    }
  }

  // field types and members
  using _dist_type =
    float;
  _dist_type dist;
  using _rvec_type =
    std::array<float, 3>;
  _rvec_type rvec;
  using _tvec_type =
    std::array<float, 3>;
  _tvec_type tvec;
  using _pitch_type =
    float;
  _pitch_type pitch;
  using _roll_type =
    float;
  _roll_type roll;

  // setters for named parameter idiom
  Type & set__dist(
    const float & _arg)
  {
    this->dist = _arg;
    return *this;
  }
  Type & set__rvec(
    const std::array<float, 3> & _arg)
  {
    this->rvec = _arg;
    return *this;
  }
  Type & set__tvec(
    const std::array<float, 3> & _arg)
  {
    this->tvec = _arg;
    return *this;
  }
  Type & set__pitch(
    const float & _arg)
  {
    this->pitch = _arg;
    return *this;
  }
  Type & set__roll(
    const float & _arg)
  {
    this->roll = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    video_interfaces::msg::Send_<ContainerAllocator> *;
  using ConstRawPtr =
    const video_interfaces::msg::Send_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<video_interfaces::msg::Send_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<video_interfaces::msg::Send_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      video_interfaces::msg::Send_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<video_interfaces::msg::Send_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      video_interfaces::msg::Send_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<video_interfaces::msg::Send_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<video_interfaces::msg::Send_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<video_interfaces::msg::Send_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__video_interfaces__msg__Send
    std::shared_ptr<video_interfaces::msg::Send_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__video_interfaces__msg__Send
    std::shared_ptr<video_interfaces::msg::Send_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const Send_ & other) const
  {
    if (this->dist != other.dist) {
      return false;
    }
    if (this->rvec != other.rvec) {
      return false;
    }
    if (this->tvec != other.tvec) {
      return false;
    }
    if (this->pitch != other.pitch) {
      return false;
    }
    if (this->roll != other.roll) {
      return false;
    }
    return true;
  }
  bool operator!=(const Send_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct Send_

// alias to use template instance with default allocator
using Send =
  video_interfaces::msg::Send_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace video_interfaces

#endif  // VIDEO_INTERFACES__MSG__DETAIL__SEND__STRUCT_HPP_
