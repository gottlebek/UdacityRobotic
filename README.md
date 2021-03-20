# UdacityRobotic
Repository for the Udacity course "become a robotics software engineer"

# Project: Build My World
## Prepare gazebo plugins
Before starting gazebo with a world the *.cpp script must build first.
1. Go into the build directory and run:
* cmake ..
* make

2. After this the build directory must added to the gazebo plugin path:
* export GAZEBO_PLUGIN_PATH=${GAZEBO_PLUGIN_PATH}:~/Documents/workspace/UdacityRobotic/myrobot/build

3. Now the world can be opened with gazebo (you need to be in the world directory with the terminal):
* gazebo ApartmentWorld
