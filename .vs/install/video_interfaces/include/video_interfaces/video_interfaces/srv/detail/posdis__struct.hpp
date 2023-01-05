// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from video_interfaces:srv/Posdis.idl
// generated code does not contain a copyright notice

#ifndef VIDEO_INTERFACES__SRV__DETAIL__POSDIS__STRUCT_HPP_
#define VIDEO_INTERFACES__SRV__DETAIL__POSDIS__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


#ifndef _WIN32
# define DEPRECATED__video_interfaces__srv__Posdis_Request __attribute__((deprecated))
#else
# define DEPRECATED__video_interfaces__srv__Posdis_Request __declspec(deprecated)
#endif

namespace video_interfaces
{

namespace srv
{

// message struct
template<class ContainerAllocator>
struct Posdis_Request_
{
  using Type = Posdis_Request_<ContainerAllocator>;

  explicit Posdis_Request_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
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

  explicit Posdis_Request_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
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
    video_interfaces::srv::Posdis_Request_<ContainerAllocator> *;
  using ConstRawPtr =
    const video_interfaces::srv::Posdis_Request_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<video_interfaces::srv::Posdis_Request_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<video_interfaces::srv::Posdis_Request_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      video_interfaces::srv::Posdis_Request_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<video_interfaces::srv::Posdis_Request_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      video_interfaces::srv::Posdis_Request_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<video_interfaces::srv::Posdis_Request_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<video_interfaces::srv::Posdis_Request_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<video_interfaces::srv::Posdis_Request_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__video_interfaces__srv__Posdis_Request
    std::shared_ptr<video_interfaces::srv::Posdis_Request_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__video_interfaces__srv__Posdis_Request
    std::shared_ptr<video_interfaces::srv::Posdis_Request_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const Posdis_Request_ & other) const
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
  bool operator!=(const Posdis_Request_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct Posdis_Request_

// alias to use template instance with default allocator
using Posdis_Request =
  video_interfaces::srv::Posdis_Request_<std::allocator<void>>;

// constant definitions

}  // namespace srv

}  // namespace video_interfaces


#ifndef _WIN32
# define DEPRECATED__video_interfaces__srv__Posdis_Response __attribute__((deprecated))
#else
# define DEPRECATED__video_interfaces__srv__Posdis_Response __declspec(deprecated)
#endif

namespace video_interfaces
{

namespace srv
{

// message struct
template<class ContainerAllocator>
struct Posdis_Response_
{
  using Type = Posdis_Response_<ContainerAllocator>;

  explicit Posdis_Response_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->x1_predict = 0.0f;
      this->y1_predict = 0.0f;
      this->x2_predict = 0.0f;
      this->y2_predict = 0.0f;
    }
  }

  explicit Posdis_Response_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    (void)_alloc;
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->x1_predict = 0.0f;
      this->y1_predict = 0.0f;
      this->x2_predict = 0.0f;
      this->y2_predict = 0.0f;
    }
  }

  // field types and members
  using _x1_predict_type =
    float;
  _x1_predict_type x1_predict;
  using _y1_predict_type =
    float;
  _y1_predict_type y1_predict;
  using _x2_predict_type =
    float;
  _x2_predict_type x2_predict;
  using _y2_predict_type =
    float;
  _y2_predict_type y2_predict;

  // setters for named parameter idiom
  Type & set__x1_predict(
    const float & _arg)
  {
    this->x1_predict = _arg;
    return *this;
  }
  Type & set__y1_predict(
    const float & _arg)
  {
    this->y1_predict = _arg;
    return *this;
  }
  Type & set__x2_predict(
    const float & _arg)
  {
    this->x2_predict = _arg;
    return *this;
  }
  Type & set__y2_predict(
    const float & _arg)
  {
    this->y2_predict = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    video_interfaces::srv::Posdis_Response_<ContainerAllocator> *;
  using ConstRawPtr =
    const video_interfaces::srv::Posdis_Response_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<video_interfaces::srv::Posdis_Response_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<video_interfaces::srv::Posdis_Response_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      video_interfaces::srv::Posdis_Response_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<video_interfaces::srv::Posdis_Response_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      video_interfaces::srv::Posdis_Response_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<video_interfaces::srv::Posdis_Response_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<video_interfaces::srv::Posdis_Response_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<video_interfaces::srv::Posdis_Response_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__video_interfaces__srv__Posdis_Response
    std::shared_ptr<video_interfaces::srv::Posdis_Response_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__video_interfaces__srv__Posdis_Response
    std::shared_ptr<video_interfaces::srv::Posdis_Response_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const Posdis_Response_ & other) const
  {
    if (this->x1_predict != other.x1_predict) {
      return false;
    }
    if (this->y1_predict != other.y1_predict) {
      return false;
    }
    if (this->x2_predict != other.x2_predict) {
      return false;
    }
    if (this->y2_predict != other.y2_predict) {
      return false;
    }
    return true;
  }
  bool operator!=(const Posdis_Response_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct Posdis_Response_

// alias to use template instance with default allocator
using Posdis_Response =
  video_interfaces::srv::Posdis_Response_<std::allocator<void>>;

// constant definitions

}  // namespace srv

}  // namespace video_interfaces

namespace video_interfaces
{

namespace srv
{

struct Posdis
{
  using Request = video_interfaces::srv::Posdis_Request;
  using Response = video_interfaces::srv::Posdis_Response;
};

}  // namespace srv

}  // namespace video_interfaces

#endif  // VIDEO_INTERFACES__SRV__DETAIL__POSDIS__STRUCT_HPP_
