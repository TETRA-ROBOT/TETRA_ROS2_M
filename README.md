# 🌟 TETRA-DS5_ROS2-jazzy 버전 M모델

![Tetra 로봇 사진](./etc/img/m.gif)

## 🛠️ 개요
TETRA-DS5 ROS2 패키지는 다양한 센서와 ROS2 기반의 기능을 통합하여 로봇 관제 및 제어를 지원합니다. 이 패키지는 ROS2 Jazzy 버전을 기반으로 하며, 다음과 같은 센서를 지원합니다:

- **SICK Tim571**: 2D LiDAR ([🔗 GitHub 링크](https://github.com/SICKAG/sick_scan_xd))
- **Cygbot D1**: 소형 2D/3D LiDAR ([🔗 GitHub 링크](https://github.com/CygLiDAR-ROS/cyglidar_d1))
- **Cygbot D2**: 고성능 2D/3D LiDAR
- **Realsense D455**: 3D Depth Camera ([🔗 GitHub 링크](https://github.com/IntelRealSense/realsense-ros))
- **IAHRS**: IMU ([🔗 GitHub 링크](https://github.com/wookbin/iahrs_driver_ros2))

## 📦 패키지 구성

### 1. 🏷️ apriltag_ros2 [🔗 상세 설명](./apriltag_ros2/README.md)
- **기능**: AprilTag 기반의 태그 감지 및 위치 추정.
- **주요 파일**:
  - 📄 `apriltag_detection.launch.py`: 태그 감지 실행을 위한 launch 파일.
  - 📂 `src/`: 태그 감지 및 위치 추정 관련 소스 코드.

### 2. 📡 cyglidar_d1-ROS2-v0.3.0 [🔗 상세 설명](./cyglidar_d1-ROS2-v0.3.0/README.md)
- **기능**: Cygbot D1 LiDAR 데이터 수집 및 처리.
- **주요 파일**:
  - 📄 `D1_Publisher.cpp`: LiDAR 데이터 퍼블리싱.
  - 🚀 `cyglidar.launch.py`: LiDAR 실행을 위한 launch 파일.

### 3. 📡 cyglidar_d2 [🔗 상세 설명](./cyglidar_d2/README.md)
- **기능**: Cygbot D2 LiDAR 데이터 수집 및 처리.
- **주요 파일**:
  - 📄 `main.cpp`: LiDAR 데이터 처리 메인 코드.
  - 🚀 `cyglidar.launch.py`: LiDAR 실행을 위한 launch 파일.

### 4. 🧭 iahrs_driver [🔗 상세 설명](./iahrs_driver/README.md)
- **기능**: IAHRS IMU 데이터 수집 및 퍼블리싱.
- **주요 파일**:
  - 📄 `iahrs_driver.cpp`: IMU 데이터 처리.
  - 🚀 `iahrs_driver.launch.py`: IMU 실행을 위한 launch 파일.

### 5. 🧩 interfaces [🔗 상세 설명](./interfaces/README.md)
- **기능**: ROS2 메시지 및 서비스 정의.
- **주요 파일**:
  - 📂 `msg/`: ROS2 메시지 정의.
  - 📂 `srv/`: ROS2 서비스 정의.

### 6. 🎥 realsense-ros [🔗 상세 설명](./realsense-ros/README.md)
- **기능**: Realsense D455 카메라 데이터 수집 및 처리.
- **주요 파일**:
  - 🚀 `rs_launch.py`: 카메라 실행을 위한 launch 파일.
  - 📂 `src/`: 카메라 데이터 처리 소스 코드.

### 7. 📡 sick_scan_xd-develop [🔗 상세 설명](./sick_scan_xd-develop/README.md)
- **기능**: SICK LiDAR 데이터 수집 및 처리.
- **주요 파일**:
  - ⚙️ `SickScan.cfg`: LiDAR 설정 파일.
  - 🚀 `launch/`: LiDAR 실행을 위한 launch 파일.

### 8. 🤖 tetra [🔗 상세 설명](./tetra/README.md)
- **기능**: Tetra 로봇의 기본 제어 기능 제공.
- **주요 파일**:
  - 📄 `tetra.cpp`: 로봇 제어 메인 코드.
  - 🚀 `tetra.launch.py`: 로봇 실행을 위한 launch 파일.

### 9. 🔧 tetra_bringup [🔗 상세 설명](./tetra_bringup/README.md)
- **기능**: Tetra 로봇의 초기화 및 설정.
- **주요 파일**:
  - 🚀 `tetra_bringup.launch.py`: 초기화 실행 파일.
  - ⚙️ `ekf.yaml`: EKF 설정 파일.

### 10. 🗺️ tetra_cartographer [🔗 상세 설명](./tetra_cartographer/README.md)
- **기능**: SLAM 및 지도 생성.
- **주요 파일**:
  - 🚀 `cartographer.launch.py`: SLAM 실행 파일.
  - 🖼️ `tetra_cartographer.rviz`: RViz 설정 파일.

### 11. 🛠️ tetra_description [🔗 상세 설명](./tetra_description/README.md)
- **기능**: Tetra 로봇의 URDF 및 시뮬레이션 설정.
- **주요 파일**:
  - 📝 `tetra.xacro`: 로봇 URDF 파일.
  - 🚀 `tetra_description.launch.py`: 시뮬레이션 실행 파일.

### 12. 🔌 tetra_interface [🔗 상세 설명](./tetra_interface/README.md)
- **기능**: Tetra 로봇의 인터페이스 제어.
- **주요 파일**:
  - 📄 `tetra_interface.cpp`: 인터페이스 제어 코드.
  - 🚀 `tetra_interface.launch.py`: 실행 파일.

### 13. 🗺️ tetra_navigation2 [🔗 상세 설명](./tetra_navigation2/README.md)
- **기능**: 네비게이션 및 경로 계획.
- **주요 파일**:
  - 🚀 `navigation_launch.py`: 네비게이션 실행 파일.
  - 🖼️ `tetra_navigation2.rviz`: RViz 설정 파일.

### 14. 🛠️ tetra_service [🔗 상세 설명](./tetra_service/README.md)
- **기능**: Tetra 로봇의 서비스 관리.
- **주요 파일**:
  - 📄 `tetra_service.cpp`: 서비스 처리 코드.
  - 🚀 `tetra_service.launch.py`: 실행 파일.

### 15. 🎥 usb_cam-ros2 [🔗 상세 설명](./usb_cam-ros2/README.md)
- **기능**: USB 카메라 데이터 수집 및 처리.
- **주요 파일**:
  - 📄 `usb_cam_node.cpp`: 카메라 데이터 처리 코드.
  - 🚀 `camera.launch.py`: 실행 파일.

### 16. 🧱 virtual_wall [🔗 상세 설명](./virtual_wall/README.md)
- **기능**: 가상 벽 생성 및 관리.
- **주요 파일**:
  - 📄 `virtual_wall.cpp`: 가상 벽 처리 코드.
  - 🚀 `virtual_wall.launch.py`: 실행 파일.

## 🛠️ 설치 방법

### 1. ROS2 Jazzy 설치
Ubuntu 24.04(noble) 기준, [공식 ROS2 설치 가이드](https://docs.ros.org/en/ros2/Installation.html)를 참고하세요.

### 2. 시스템 의존성 패키지 설치
아래 명령으로 필수 시스템 패키지를 설치하세요:
```bash
sudo apt update
sudo apt install -y python3-colcon-common-extensions python3-rosdep python3-vcstool build-essential cmake git libglfw3-dev libusb-1.0-0-dev pkg-config libgtk-3-dev
```

### 3. ROS2 의존성 설치
워크스페이스 루트에서 다음을 실행하세요:
```bash
rosdep update
rosdep install --from-paths src --ignore-src -r -y
```

### 4. RealSense SDK (librealsense2) 설치
Ubuntu 24.04에서는 apt 패키지가 제공되지 않으므로, 소스 빌드가 필요합니다:
```bash
# 홈 디렉토리에 소스 다운로드 및 빌드
cd ~
git clone https://github.com/IntelRealSense/librealsense.git librealsense2_src
cd librealsense2_src
mkdir build && cd build
cmake .. -DBUILD_EXAMPLES=OFF -DBUILD_GRAPHICAL_EXAMPLES=OFF
make -j$(nproc)
sudo make install
sudo ldconfig
```

### 5. 워크스페이스 빌드
```bash
cd ~/ros2_ws
colcon build --symlink-install
```

빌드 후, 환경설정 적용:
```bash
source install/setup.bash
```

## 🚀 실행 방법
1. 각 패키지의 launch 파일 실행:
   ```bash
   ros2 launch <패키지명> <launch 파일명>
   ```
2. 예시:
   ```bash
   ros2 launch tetra_service tetra_service.launch.py
   ```

