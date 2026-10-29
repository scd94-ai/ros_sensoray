
cmake_minimum_required(VERSION 3.16)

project(sensoray826_ros LANGUAGES CXX)

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED ON)
set(CMAKE_EXPORT_COMPILE_COMMANDS ON)

# --------------------------------------------------
# Find ROS dependencies
# --------------------------------------------------

find_package(ament_cmake REQUIRED)
find_package(rclcpp REQUIRED)
find_package(soft_actuator_msgs REQUIRED)

# --------------------------------------------------
# Find standalone C++ libraries
# --------------------------------------------------

find_package(sensoray826_driver CONFIG REQUIRED)
find_package(soft_actuator_core CONFIG REQUIRED)

# --------------------------------------------------
# Build ROS node
# --------------------------------------------------

add_executable(sensoray_node
    src/sensoray_node.cpp
)

target_include_directories(sensoray_node PRIVATE
    "${CMAKE_CURRENT_SOURCE_DIR}/include"
)

# ROS dependencies
ament_target_dependencies(sensoray_node
    rclcpp
    soft_actuator_msgs
)

# Standalone C++ libraries
target_link_libraries(sensoray_node
    sensoray826::driver
    soft_actuator::core
)

# --------------------------------------------------
# Install ROS executable
# --------------------------------------------------

install(TARGETS sensoray_node
    DESTINATION lib/${PROJECT_NAME}
)

if(BUILD_TESTING)
    find_package(ament_cmake_gtest REQUIRED)
    ament_add_gtest(test_pressure_write_guard
        test/test_pressure_write_guard.cpp
    )
    target_include_directories(test_pressure_write_guard PRIVATE
        "${CMAKE_CURRENT_SOURCE_DIR}/include"
    )
endif()

ament_package()
