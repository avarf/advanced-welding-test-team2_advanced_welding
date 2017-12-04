cmake_minimum_required(VERSION 2.8.3)
project(advanced_welding_test)
#find_package(catkin REQUIRED)
catkin_metapackage()
find_package(catkin REQUIRED COMPONENTS
  geometry_msgs
  kdl_parser
  roscpp
  rospy
  std_msgs
)

