# generated from rosidl_cmake/cmake/rosidl_cmake_aggregate_target-extras.cmake.in

# Create a convenience aggregate target sensoray826_msgs::sensoray826_msgs
# that links all generated interface targets, so downstream packages can use
# a single modern CMake target name instead of ${sensoray826_msgs_TARGETS}.
if(sensoray826_msgs_TARGETS AND NOT TARGET sensoray826_msgs::sensoray826_msgs)
  add_library(sensoray826_msgs::sensoray826_msgs INTERFACE IMPORTED)
  set_target_properties(sensoray826_msgs::sensoray826_msgs PROPERTIES
    INTERFACE_LINK_LIBRARIES "${sensoray826_msgs_TARGETS}")
endif()
