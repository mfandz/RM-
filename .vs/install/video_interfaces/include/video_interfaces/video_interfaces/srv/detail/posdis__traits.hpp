// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from video_interfaces:srv/Posdis.idl
// generated code does not contain a copyright notice

#ifndef VIDEO_INTERFACES__SRV__DETAIL__POSDIS__TRAITS_HPP_
#define VIDEO_INTERFACES__SRV__DETAIL__POSDIS__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "video_interfaces/srv/detail/posdis__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

namespace video_interfaces
{

namespace srv
{

inline void to_flow_style_yaml(
  const Posdis_Request & msg,
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
    out << ", ";
  }

  // member: open
  {
    out << "open: ";
    rosidl_generator_traits::value_to_yaml(msg.open, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const Posdis_Request & msg,
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

  // member: open
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "open: ";
    rosidl_generator_traits::value_to_yaml(msg.open, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const Posdis_Request & msg, bool use_flow_style = false)
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
  const video_interfaces::srv::Posdis_Request & msg,
  std::ostream & out, size_t indentation = 0)
{
  video_interfaces::srv::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use video_interfaces::srv::to_yaml() instead")]]
inline std::string to_yaml(const video_interfaces::srv::Posdis_Request & msg)
{
  return video_interfaces::srv::to_yaml(msg);
}

template<>
inline const char * data_type<video_interfaces::srv::Posdis_Request>()
{
  return "video_interfaces::srv::Posdis_Request";
}

template<>
inline const char * name<video_interfaces::srv::Posdis_Request>()
{
  return "video_interfaces/srv/Posdis_Request";
}

template<>
struct has_fixed_size<video_interfaces::srv::Posdis_Request>
  : std::integral_constant<bool, true> {};

template<>
struct has_bounded_size<video_interfaces::srv::Posdis_Request>
  : std::integral_constant<bool, true> {};

template<>
struct is_message<video_interfaces::srv::Posdis_Request>
  : std::true_type {};

}  // namespace rosidl_generator_traits

namespace video_interfaces
{

namespace srv
{

inline void to_flow_style_yaml(
  const Posdis_Response & msg,
  std::ostream & out)
{
  out << "{";
  // member: x1_predict
  {
    out << "x1_predict: ";
    rosidl_generator_traits::value_to_yaml(msg.x1_predict, out);
    out << ", ";
  }

  // member: y1_predict
  {
    out << "y1_predict: ";
    rosidl_generator_traits::value_to_yaml(msg.y1_predict, out);
    out << ", ";
  }

  // member: x2_predict
  {
    out << "x2_predict: ";
    rosidl_generator_traits::value_to_yaml(msg.x2_predict, out);
    out << ", ";
  }

  // member: y2_predict
  {
    out << "y2_predict: ";
    rosidl_generator_traits::value_to_yaml(msg.y2_predict, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const Posdis_Response & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: x1_predict
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "x1_predict: ";
    rosidl_generator_traits::value_to_yaml(msg.x1_predict, out);
    out << "\n";
  }

  // member: y1_predict
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "y1_predict: ";
    rosidl_generator_traits::value_to_yaml(msg.y1_predict, out);
    out << "\n";
  }

  // member: x2_predict
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "x2_predict: ";
    rosidl_generator_traits::value_to_yaml(msg.x2_predict, out);
    out << "\n";
  }

  // member: y2_predict
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "y2_predict: ";
    rosidl_generator_traits::value_to_yaml(msg.y2_predict, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const Posdis_Response & msg, bool use_flow_style = false)
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
  const video_interfaces::srv::Posdis_Response & msg,
  std::ostream & out, size_t indentation = 0)
{
  video_interfaces::srv::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use video_interfaces::srv::to_yaml() instead")]]
inline std::string to_yaml(const video_interfaces::srv::Posdis_Response & msg)
{
  return video_interfaces::srv::to_yaml(msg);
}

template<>
inline const char * data_type<video_interfaces::srv::Posdis_Response>()
{
  return "video_interfaces::srv::Posdis_Response";
}

template<>
inline const char * name<video_interfaces::srv::Posdis_Response>()
{
  return "video_interfaces/srv/Posdis_Response";
}

template<>
struct has_fixed_size<video_interfaces::srv::Posdis_Response>
  : std::integral_constant<bool, true> {};

template<>
struct has_bounded_size<video_interfaces::srv::Posdis_Response>
  : std::integral_constant<bool, true> {};

template<>
struct is_message<video_interfaces::srv::Posdis_Response>
  : std::true_type {};

}  // namespace rosidl_generator_traits

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<video_interfaces::srv::Posdis>()
{
  return "video_interfaces::srv::Posdis";
}

template<>
inline const char * name<video_interfaces::srv::Posdis>()
{
  return "video_interfaces/srv/Posdis";
}

template<>
struct has_fixed_size<video_interfaces::srv::Posdis>
  : std::integral_constant<
    bool,
    has_fixed_size<video_interfaces::srv::Posdis_Request>::value &&
    has_fixed_size<video_interfaces::srv::Posdis_Response>::value
  >
{
};

template<>
struct has_bounded_size<video_interfaces::srv::Posdis>
  : std::integral_constant<
    bool,
    has_bounded_size<video_interfaces::srv::Posdis_Request>::value &&
    has_bounded_size<video_interfaces::srv::Posdis_Response>::value
  >
{
};

template<>
struct is_service<video_interfaces::srv::Posdis>
  : std::true_type
{
};

template<>
struct is_service_request<video_interfaces::srv::Posdis_Request>
  : std::true_type
{
};

template<>
struct is_service_response<video_interfaces::srv::Posdis_Response>
  : std::true_type
{
};

}  // namespace rosidl_generator_traits

#endif  // VIDEO_INTERFACES__SRV__DETAIL__POSDIS__TRAITS_HPP_
