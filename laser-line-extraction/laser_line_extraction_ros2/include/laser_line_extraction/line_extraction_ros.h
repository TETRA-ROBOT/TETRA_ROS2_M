#ifndef LINE_EXTRACTION_ROS2_H
#define LINE_EXTRACTION_ROS2_H

#include <vector>
#include <string>
#include "rclcpp/rclcpp.hpp"
#include "./line_extraction.h"
#include "./line.h"
#include "sensor_msgs/msg/laser_scan.hpp"
#include "visualization_msgs/msg/marker.hpp"
#include "geometry_msgs/msg/point.hpp"
#include "laser_line_extraction_msgs/msg/line_segment.hpp"
#include "laser_line_extraction_msgs/msg/line_segment_list.hpp"


namespace line_extraction
{

class LineExtractionROS2 : public rclcpp::Node
{

public:
  // Constructor / destructor
  LineExtractionROS2();
  ~LineExtractionROS2();

  // Running
  void run();

private:
  // ROS2
  rclcpp::Subscription<sensor_msgs::msg::LaserScan>::SharedPtr scan_subscriber_;
  rclcpp::Publisher<laser_line_extraction_msgs::msg::LineSegmentList>::SharedPtr line_publisher_;
  rclcpp::Publisher<visualization_msgs::msg::Marker>::SharedPtr marker_publisher_;
  // Parameters
  std::string frame_id_;
  std::string scan_topic_;
  bool pub_markers_;
  // Line extraction
  LineExtraction line_extraction_;
  bool data_cached_; // true after first scan used to cache data

  rclcpp::TimerBase::SharedPtr timer_;
  // Members
  void loadParameters();
  void populateLineSegListMsg(const std::vector<Line> &lines,
                                                laser_line_extraction_msgs::msg::LineSegmentList &line_list_msg);

  void populateMarkerMsg(const std::vector<Line> &lines, 
                                           visualization_msgs::msg::Marker &marker_msg);

  void cacheData(const sensor_msgs::msg::LaserScan::SharedPtr scan_msg);
  void laserScanCallback(const sensor_msgs::msg::LaserScan::SharedPtr scan_msg);
};

} // namespace line_extraction

#endif
