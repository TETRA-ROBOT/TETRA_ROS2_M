cmake_minimum_required(VERSION 3.5)
project(laser_line_extraction_ros2)

find_package(ament_cmake REQUIRED)
find_package(rclcpp REQUIRED)
find_package(geometry_msgs REQUIRED)
find_package(sensor_msgs REQUIRED)
find_package(visualization_msgs REQUIRED)
find_package(builtin_interfaces REQUIRED)
find_package(laser_line_extraction_msgs REQUIRED)

find_package(Eigen3 REQUIRED)

include_directories(
  ${PROJECT_SOURCE_DIR}/include
)

add_executable(line_extraction_node 
  src/line_extraction_node.cpp
  src/line_extraction_ros.cpp
  src/line_extraction.cpp
  src/line.cpp)

ament_target_dependencies(line_extraction_node rclcpp geometry_msgs sensor_msgs visualization_msgs laser_line_extraction_msgs Eigen3)

install(TARGETS line_extraction_node
  DESTINATION lib/${PROJECT_NAME})

install(
  DIRECTORY include launch src
  DESTINATION share/${PROJECT_NAME}
)

ament_package()