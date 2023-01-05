// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from video_interfaces:srv/Kmf.idl
// generated code does not contain a copyright notice

#ifndef VIDEO_INTERFACES__SRV__DETAIL__KMF__STRUCT_HPP_
#define VIDEO_INTERFACES__SRV__DETAIL__KMF__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


#ifndef _WIN32
# define DEPRECATED__video_interfaces__srv__Kmf_Request __attribute__((deprecated))
#else
# define DEPRECATED__video_interfaces__srv__Kmf_Request __declspec(deprecated)
#endif

namespace video_interfaces
{

namespace srv
{

// message struct
template<class ContainerAllocator>
struct Kmf_Request_
{
  using Type = Kmf_Request_<ContainerAllocator>;

  explicit Kmf_Request_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->x1 = 0.0f;
      this->y1 = 0.0f;
      this->x2 = 0.0f;
      this->y2 = 0.0f;
    }
  }

  explicit Kmf_Request_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    (void)_alloc;
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->x1 = 0.0f;
      this->y1 = 0.0f;
      this->x2 = 0.0f;
      this->y2 = 0.0f;
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

  // constant declarations

  // pointer types
  using RawPtr =
    video_interfaces::srv::Kmf_Request_<ContainerAllocator> *;
  using ConstRawPtr =
    const video_interfaces::srv::Kmf_Request_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<video_interfaces::srv::Kmf_Request_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<video_interfaces::srv::Kmf_Request_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      video_interfaces::srv::Kmf_Request_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<video_interfaces::srv::Kmf_Request_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      video_interfaces::srv::Kmf_Request_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<video_interfaces::srv::Kmf_Request_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<video_interfaces::srv::Kmf_Request_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<video_interfaces::srv::Kmf_Request_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__video_interfaces__srv__Kmf_Request
    std::shared_ptr<video_interfaces::srv::Kmf_Request_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__video_interfaces__srv__Kmf_Request
    std::shared_ptr<video_interfaces::srv::Kmf_Request_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const Kmf_Request_ & other) const
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
    return true;
  }
  bool operator!=(const Kmf_Request_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct Kmf_Request_

// alias to use template instance with default allocator
using Kmf_Request =
  video_interfaces::srv::Kmf_Request_<std::allocator<void>>;

// constant definitions

}  // namespace srv

}  // namespace video_interfaces


#ifndef _WIN32
# define DEPRECATED__video_interfaces__srv__Kmf_Response __attribute__((deprecated))
#else
# define DEPRECATED__video_interfaces__srv__Kmf_Response __declspec(deprecated)
#endif

namespace video_interfaces
{

namespace srv
{

// message struct
template<class ContainerAllocator>
struct Kmf_Response_
{
  using Type = Kmf_Response_<ContainerAllocator>;

  explicit Kmf_Response_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->x1 = 0.0f;
      this->y1 = 0.0f;
      this->x2 = 0.0f;
      this->y2 = 0.0f;
    }
  }

  explicit Kmf_Response_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    (void)_alloc;
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->x1 = 0.0f;
      this->y1 = 0.0f;
      this->x2 = 0.0f;
      this->y2 = 0.0f;
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

  // constant declarations

  // pointer types
  using RawPtr =
    video_interfaces::srv::Kmf_Response_<ContainerAllocator> *;
  using ConstRawPtr =
    const video_interfaces::srv::Kmf_Response_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<video_interfaces::srv::Kmf_Response_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<video_interfaces::srv::Kmf_Response_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      video_interfaces::srv::Kmf_Response_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<video_interfaces::srv::Kmf_Response_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      video_interfaces::srv::Kmf_Response_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<video_interfaces::srv::Kmf_Response_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<video_interfaces::srv::Kmf_Response_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<video_interfaces::srv::Kmf_Response_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__video_interfaces__srv__Kmf_Response
    std::shared_ptr<video_interfaces::srv::Kmf_Response_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__video_interfaces__srv__Kmf_Response
    std::shared_ptr<video_interfaces::srv::Kmf_Response_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const Kmf_Response_ & other) const
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
    return true;
  }
  bool operator!=(const Kmf_Response_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct Kmf_Response_

// alias to use template instance with default allocator
using Kmf_Response =
  video_interfaces::srv::Kmf_Response_<std::allocator<void>>;

// constant definitions

}  // namespace srv

}  // namespace video_interfaces

namespace video_interfaces
{

namespace srv
{

struct Kmf
{
  using Request = video_interfaces::srv::Kmf_Request;
  using Response = video_interfaces::srv::Kmf_Response;
};

}  // namespace srv

}  // namespace video_interfaces

#endif  // VIDEO_INTERFACES__SRV__DETAIL__KMF__STRUCT_HPP_
