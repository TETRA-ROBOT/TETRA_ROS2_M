#include <memory>
#include "rclcpp/rclcpp.hpp"
#include "../include/laser_line_extraction/line_extraction_ros.h"


int main(int argc, char ** argv)
{
  rclcpp::init(argc, argv);
  
  auto node = std::make_shared<line_extraction::LineExtractionROS2>();
  rclcpp::spin(node->get_node_base_interface());
  rclcpp::shutdown();

  return 0;
}