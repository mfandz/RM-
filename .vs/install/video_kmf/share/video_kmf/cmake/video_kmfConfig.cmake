# generated from ament/cmake/core/templates/nameConfig.cmake.in

# prevent multiple inclusion
if(_video_kmf_CONFIG_INCLUDED)
  # ensure to keep the found flag the same
  if(NOT DEFINED video_kmf_FOUND)
    # explicitly set it to FALSE, otherwise CMake will set it to TRUE
    set(video_kmf_FOUND FALSE)
  elseif(NOT video_kmf_FOUND)
    # use separate condition to avoid uninitialized variable warning
    set(video_kmf_FOUND FALSE)
  endif()
  return()
endif()
set(_video_kmf_CONFIG_INCLUDED TRUE)

# output package information
if(NOT video_kmf_FIND_QUIETLY)
  message(STATUS "Found video_kmf: 0.0.0 (${video_kmf_DIR})")
endif()

# warn when using a deprecated package
if(NOT "" STREQUAL "")
  set(_msg "Package 'video_kmf' is deprecated")
  # append custom deprecation text if available
  if(NOT "" STREQUAL "TRUE")
    set(_msg "${_msg} ()")
  endif()
  # optionally quiet the deprecation message
  if(NOT ${video_kmf_DEPRECATED_QUIET})
    message(DEPRECATION "${_msg}")
  endif()
endif()

# flag package as ament-based to distinguish it after being find_package()-ed
set(video_kmf_FOUND_AMENT_PACKAGE TRUE)

# include all config extra files
set(_extras "ament_cmake_export_dependencies-extras.cmake;ament_cmake_export_include_directories-extras.cmake")
foreach(_extra ${_extras})
  include("${video_kmf_DIR}/${_extra}")
endforeach()
