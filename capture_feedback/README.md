capture_feedback
============

This node gives feedback when capturing rgbd data.

Red circles are keypoints without depth values and green are keepoints with depth values.
The system controlls the volume of a beeping signal such that if there are few keypoints with depth values the volume increases.

Install:

sudo apt-get install sdlbasic
sudo apt-get install ros-groovy-perception-pcl
sudo apt-get install ros-groovy-opencv2

capture_feedback
