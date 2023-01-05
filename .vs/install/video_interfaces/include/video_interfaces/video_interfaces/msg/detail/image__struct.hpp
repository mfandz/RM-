// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from video_interfaces:msg/Image.idl
// generated code does not contain a copyright notice

#ifndef VIDEO_INTERFACES__MSG__DETAIL__IMAGE__STRUCT_HPP_
#define VIDEO_INTERFACES__MSG__DETAIL__IMAGE__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


// Include directives for member types
// Member 'img_pre'
// Member 'img_th1'
#include "sensor_msgs/msg/detail/image__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__video_interfaces__msg__Image __attribute__((deprecated))
#else
# define DEPRECATED__video_interfaces__msg__Image __declspec(deprecated)
#endif

namespace video_interfaces
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct Image_
{
  using Type = Image_<ContainerAllocator>;

  explicit Image_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : img_pre(_init),
    img_th1(_init)
  {
    (void)_init;
  }

  explicit Image_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : img_pre(_alloc, _init),
    img_th1(_alloc, _init)
  {
    (void)_init;
  }

  // field types and members
  using _img_pre_type =
    sensor_msgs::msg::Image_<ContainerAllocator>;
  _img_pre_type img_pre;
  using _img_th1_type =
    sensor_msgs::msg::Image_<ContainerAllocator>;
  _img_th1_type img_th1;

  // setters for named parameter idiom
  Type & set__img_pre(
    const sensor_msgs::msg::Image_<ContainerAllocator> & _arg)
  {
    this->img_pre = _arg;
    return *this;
  }
  Type & set__img_th1(
    const sensor_msgs::msg::Image_<ContainerAllocator> & _arg)
  {
    this->img_th1 = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    video_interfaces::msg::Image_<ContainerAllocator> *;
  using ConstRawPtr =
    const video_interfaces::msg::Image_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<video_interfaces::msg::Image_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<video_interfaces::msg::Image_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      video_interfaces::msg::Image_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<video_interfaces::msg::Image_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      video_interfaces::msg::Image_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<video_interfaces::msg::Image_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<video_interfaces::msg::Image_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<video_interfaces::msg::Image_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__video_interfaces__msg__Image
    std::shared_ptr<video_interfaces::msg::Image_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__video_interfaces__msg__Image
    std::shared_ptr<video_interfaces::msg::Image_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const Image_ & other) const
  {
    if (this->img_pre != other.img_pre) {
      return false;
    }
    if (this->img_th1 != other.img_th1) {
      return false;
    }
    return true;
  }
  bool operator!=(const Image_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct Image_

// alias to use template instance with default allocator
using Image =
  video_interfaces::msg::Image_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace video_interfaces

#endif  // VIDEO_INTERFACES__MSG__DETAIL__IMAGE__STRUCT_HPP_
