# Copilot Instructions for TETRA_ROS2_M

## Overview
This repository is a ROS2 (Jazzy) workspace for the Tetra mobile robot platform, integrating multiple sensors (LiDAR, IMU, camera) and providing navigation, SLAM, and robot control capabilities. The workspace is organized as a meta-project with each major function in its own ROS2 package.

## Architecture & Key Components
- **Core Packages:**
  - `tetra`: Main robot control node. Handles velocity commands, odometry, and robot state services. See `src/tetra.cpp` and `launch/tetra.launch.py`.
  - `tetra_bringup`: System bringup and configuration. Launches all essential nodes, including localization, joystick, and robot state publisher. See `launch/tetra_bringup.launch.py`.
  - `tetra_navigation2`: Navigation stack integration. Provides launch files and configs for navigation, mapping, and RViz. See `launch/` and `params/`.
  - `tetra_cartographer`: SLAM using Cartographer. See `launch/cartographer.launch.py` and `config/`.
  - `tetra_service`: Service node for docking, map management, and robot commands. See `src/` and `launch/`.
  - `tetra_description`: URDF/Xacro robot model and visualization assets. See `urdf/`, `meshes/`, and `launch/`.
- **Sensor Drivers:**
  - `cyglidar_d1-ROS2-v0.3.0`, `cyglidar_d2`, `sick_scan_xd-develop`, `realsense-ros`, `iahrs_driver`, `apriltag_ros2`.
- **Interfaces:**
  - `interfaces`: Custom ROS2 messages and services for cross-package communication. See `msg/` and `srv/`.

## Developer Workflows
- **Build:**
  - Use `colcon build` from the workspace root. To build a specific package: `colcon build --packages-select <package>`.
- **Run:**
  - Launch main robot: `ros2 launch tetra tetra.launch.py`
  - Bringup system: `ros2 launch tetra_bringup tetra_bringup.launch.py`
  - Navigation: `ros2 launch tetra_navigation2 tetra_navigation.launch.py`
  - SLAM: `ros2 launch tetra_cartographer cartographer.launch.py`
- **Testing/Debugging:**
  - Use `ros2 topic echo`, `ros2 service call`, and `ros2 topic pub` for introspection and manual testing.
  - RViz configs are in each package's `rviz/` folder.

## Project Conventions
- **Launch files** are in each package's `launch/` directory, using Python (`.py`) or XML (`.xml`).
- **Parameters/configs** are in `params/` or `config/` directories.
- **Custom messages/services** are defined in the `interfaces` package and used across nodes.
- **URDF/Xacro** files for robot description are in `tetra_description/urdf/`.
- **All code is C++ unless otherwise noted.**

## Integration & Communication
- Nodes communicate via standard and custom ROS2 topics/services.
- Sensor drivers publish to standard topics (e.g., `/scan`, `/imu/data`, `/camera/depth`), consumed by navigation, SLAM, and control nodes.
- Service calls (e.g., `/param_read_cmd`, `/docking_cmd`) are used for robot configuration and actions.

## Examples
- Publish velocity: `ros2 topic pub /cmd_vel geometry_msgs/msg/Twist "{linear: {x: 0.5}, angular: {z: 0.1}}"`
- Call parameter read: `ros2 service call /param_read_cmd interfaces/srv/ParameterRead "{num: 1}"`
- Launch navigation: `ros2 launch tetra_navigation2 tetra_navigation.launch.py`

## References
- See each package's `README.md` for detailed usage, topics, and configuration.
- For custom message/service definitions, see `interfaces/msg/` and `interfaces/srv/`.

---
For new code, follow the structure and conventions of existing packages. Reference launch/config files and message/service usage for integration. If unclear, check the relevant package's `README.md` or ask for clarification.
