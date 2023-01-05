// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from video_interfaces:srv/Kmf.idl
// generated code does not contain a copyright notice

#ifndef VIDEO_INTERFACES__SRV__DETAIL__KMF__TRAITS_HPP_
#define VIDEO_INTERFACES__SRV__DETAIL__KMF__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "video_interfaces/srv/detail/kmf__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

namespace video_interfaces
{

namespace srv
{

inline void to_flow_style_yaml(
  const Kmf_Request & msg,
  std::ostream & out)
{
  out << "{";
  // member: x1
  {
    out << "x1: ";
    rosidl_generator_traits::value_to_yaml(msg.x1, out);
    out << ", ";
  }

  // member: y1
  {
    out << "y1: ";
    rosidl_generator_traits::value_to_yaml(msg.y1, out);
    out << ", ";
  }

  // member: x2
  {
    out << "x2: ";
    rosidl_generator_traits::value_to_yaml(msg.x2, out);
    out << ", ";
  }

  // member: y2
  {
    out << "y2: ";
    rosidl_generator_traits::value_to_yaml(msg.y2, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const Kmf_Request & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: x1
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "x1: ";
    rosidl_generator_traits::value_to_yaml(msg.x1, out);
    out << "\n";
  }

  // member: y1
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "y1: ";
    rosidl_generator_traits::value_to_yaml(msg.y1, out);
    out << "\n";
  }

  // member: x2
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "x2: ";
    rosidl_generator_traits::value_to_yaml(msg.x2, out);
    out << "\n";
  }

  // member: y2
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "y2: ";
    rosidl_generator_traits::value_to_yaml(msg.y2, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const Kmf_Request & msg, bool use_flow_style = false)
{
  std::ostringstream out;
  if (use_flow_style) {
    to_flow_style_yaml(msg, out);
  } else {
    to_block_style_yaml(msg, out);
  }
  return out.str();
}

}  // namespace srv

}  // namespace video_interfaces

namespace rosidl_generator_traits
{

[[deprecated("use video_interfaces::srv::to_block_style_yaml() instead")]]
inline void to_yaml(
  const video_interfaces::srv::Kmf_Request & msg,
  std::ostream & out, size_t indentation = 0)
{
  video_interfaces::srv::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use video_interfaces::srv::to_yaml() instead")]]
inline std::string to_yaml(const video_interfaces::srv::Kmf_Request & msg)
{
  return video_interfaces::srv::to_yaml(msg);
}

template<>
inline const char * data_type<video_interfaces::srv::Kmf_Request>()
{
  return "video_interfaces::srv::Kmf_Request";
}

template<>
inline const char * name<video_interfaces::srv::Kmf_Request>()
{
  return "video_interfaces/srv/Kmf_Request";
}

template<>
struct has_fixed_size<video_interfaces::srv::Kmf_Request>
  : std::integral_constant<bool, true> {};

template<>
struct has_bounded_size<video_interfaces::srv::Kmf_Request>
  : std::integral_constant<bool, true> {};

template<>
struct is_message<video_interfaces::srv::Kmf_Request>
  : std::true_type {};

}  // namespace rosidl_generator_traits

namespace video_interfaces
{

namespace srv
{

inline void to_flow_style_yaml(
  const Kmf_Response & msg,
  std::ostream & out)
{
  out << "{";
  // member: x1
  {
    out << "x1: ";
    rosidl_generator_traits::value_to_yaml(msg.x1, out);
    out << ", ";
  }

  // member: y1
  {
    out << "y1: ";
    rosidl_generator_traits::value_to_yaml(msg.y1, out);
    out << ", ";
  }

  // member: x2
  {
    out << "x2: ";
    rosidl_generator_traits::value_to_yaml(msg.x2, out);
    out << ", ";
  }

  // member: y2
  {
    out << "y2: ";
    rosidl_generator_traits::value_to_yaml(msg.y2, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const Kmf_Response & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: x1
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "x1: ";
    rosidl_generator_traits::value_to_yaml(msg.x1, out);
    out << "\n";
  }

  // member: y1
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "y1: ";
    rosidl_generator_traits::value_to_yaml(msg.y1, out);
    out << "\n";
  }

  // member: x2
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "x2: ";
    rosidl_generator_traits::value_to_yaml(msg.x2, out);
    out << "\n";
  }

  // member: y2
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "y2: ";
    rosidl_generator_traits::value_to_yaml(msg.y2, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const Kmf_Response & msg, bool use_flow_style = false)
{
  std::ostringstream out;
  if (use_flow_style) {
    to_flow_style_yaml(msg, out);
  } else {
    to_block_style_yaml(msg, out);
  }
  return out.str();
}

}  // namespace srv

}  // namespace video_interfaces

namespace rosidl_generator_traits
{

[[deprecated("use video_interfaces::srv::to_block_style_yaml() instead")]]
inline void to_yaml(
  const video_interfaces::srv::Kmf_Response & msg,
  std::ostream & out, size_t indentation = 0)
{
  video_interfaces::srv::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use video_interfaces::srv::to_yaml() instead")]]
inline std::string to_yaml(const video_interfaces::srv::Kmf_Response & msg)
{
  return video_interfaces::srv::to_yaml(msg);
}

template<>
inline const char * data_type<video_interfaces::srv::Kmf_Response>()
{
  return "video_interfaces::srv::Kmf_Response";
}

template<>
inline const char * name<video_interfaces::srv::Kmf_Response>()
{
  return "video_interfaces/srv/Kmf_Response";
}

template<>
struct has_fixed_size<video_interfaces::srv::Kmf_Response>
  : std::integral_constant<bool, true> {};

template<>
struct has_bounded_size<video_interfaces::srv::Kmf_Response>
  : std::integral_constant<bool, true> {};

template<>
struct is_message<video_interfaces::srv::Kmf_Response>
  : std::true_type {};

}  // namespace rosidl_generator_traits

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<video_interfaces::srv::Kmf>()
{
  return "video_interfaces::srv::Kmf";
}

template<>
inline const char * name<video_interfaces::srv::Kmf>()
{
  return "video_interfaces/srv/Kmf";
}

template<>
struct has_fixed_size<video_interfaces::srv::Kmf>
  : std::integral_constant<
    bool,
    has_fixed_size<video_interfaces::srv::Kmf_Request>::value &&
    has_fixed_size<video_interfaces::srv::Kmf_Response>::value
  >
{
};

template<>
struct has_bounded_size<video_interfaces::srv::Kmf>
  : std::integral_constant<
    bool,
    has_bounded_size<video_interfaces::srv::Kmf_Request>::value &&
    has_bounded_size<video_interfaces::srv::Kmf_Response>::value
  >
{
};

template<>
struct is_service<video_interfaces::srv::Kmf>
  : std::true_type
{
};

template<>
struct is_service_request<video_interfaces::srv::Kmf_Request>
  : std::true_type
{
};

template<>
struct is_service_response<video_interfaces::srv::Kmf_Response>
  : std::true_type
{
};

}  // namespace rosidl_generator_traits

#endif  // VIDEO_INTERFACES__SRV__DETAIL__KMF__TRAITS_HPP_
