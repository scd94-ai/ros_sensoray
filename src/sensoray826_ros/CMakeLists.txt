
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
find_package(sensoray826_msgs REQUIRED)
find_package(Threads REQUIRED)
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
    sensoray826_msgs
    soft_actuator_msgs
)

# Standalone C++ libraries
target_link_libraries(sensoray_node
    sensoray826::driver
    soft_actuator::core
    Threads::Threads
)

# --------------------------------------------------
# Install ROS executable
# --------------------------------------------------

install(TARGETS sensoray_node
    DESTINATION lib/${PROJECT_NAME}
)

install(DIRECTORY launch DESTINATION share/${PROJECT_NAME})

if(BUILD_TESTING)
    find_package(ament_cmake_gtest REQUIRED)
    find_package(Python3 REQUIRED COMPONENTS Interpreter)
    set(SENSORAY826_TEST_SOURCE_DIR "${CMAKE_CURRENT_SOURCE_DIR}/../../../sensoray826" CACHE PATH "Native source for SDK-free lifecycle test")
    if(EXISTS "${SENSORAY826_TEST_SOURCE_DIR}/src/sensoray826.cpp")
        add_executable(sensoray_node_fake src/sensoray_node.cpp test/fake_sdk.cpp
            "${SENSORAY826_TEST_SOURCE_DIR}/src/sensoray826.cpp"
            "${SENSORAY826_TEST_SOURCE_DIR}/src/festo.cpp")
        target_include_directories(sensoray_node_fake PRIVATE include "${SENSORAY826_TEST_SOURCE_DIR}/include")
        ament_target_dependencies(sensoray_node_fake rclcpp sensoray826_msgs soft_actuator_msgs)
        target_link_libraries(sensoray_node_fake soft_actuator::core Threads::Threads)
        foreach(mode adc_only pressure_only combined adc_failure combined_failure enabled_refused adc_hangup combined_hangup adc_hangup_startup adc_hangup_cleanup)
            add_test(NAME node_${mode} COMMAND ${Python3_EXECUTABLE}
                "${CMAKE_CURRENT_SOURCE_DIR}/test/test_node_lifecycle.py" $<TARGET_FILE:sensoray_node_fake> ${mode})
            set_tests_properties(node_${mode} PROPERTIES TIMEOUT 20 RUN_SERIAL TRUE)
        endforeach()
    else()
        message(WARNING "Set SENSORAY826_TEST_SOURCE_DIR to run SDK-free node lifecycle tests")
    endif()

    ament_add_gtest(test_hangup_signal test/test_hangup_signal.cpp)
    target_include_directories(test_hangup_signal PRIVATE "${CMAKE_CURRENT_SOURCE_DIR}/include")

    ament_add_gtest(test_pressure_write_guard
        test/test_pressure_write_guard.cpp
    )
    target_include_directories(test_pressure_write_guard PRIVATE
        "${CMAKE_CURRENT_SOURCE_DIR}/include"
    )
endif()

ament_package()
