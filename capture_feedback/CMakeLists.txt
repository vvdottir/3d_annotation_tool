cmake_minimum_required(VERSION 2.8.3)
project(capture_feedback)

find_package(catkin REQUIRED COMPONENTS roscpp rospy std_msgs cv_bridge)
find_package( OpenCV REQUIRED )
find_package(cv_bridge REQUIRED)

#PCL
find_package(PCL 1.5 REQUIRED)
include_directories(${PCL_INCLUDE_DIRS})
link_directories(${PCL_LIBRARY_DIRS})

#SDL
include_directories(/usr/include)
link_directories(/usr/lib/x86_64-linux-gnu)

#ROS opencv
include_directories(/opt/ros/groovy/include/opencv)
include_directories(/opt/ros/groovy/include/opencv2)

set(CMAKE_CXX_FLAGS "-fpermissive -O3 -g -fPIC -std=c++0x")

## System dependencies are found with CMake's conventions
# find_package(Boost REQUIRED COMPONENTS system)

catkin_package(
#   INCLUDE_DIRS include
#  LIBRARIES compression_node
#  CATKIN_DEPENDS roscpp rospy std_msgs
#  DEPENDS system_lib
)

include_directories(include${catkin_INCLUDE_DIRS})

add_executable(capture_feedback src/main.cpp)

target_link_libraries(capture_feedback ${catkin_LIBRARIES} ${OpenCV_LIBS}  ${PCL_LIBRARIES} SDL)

