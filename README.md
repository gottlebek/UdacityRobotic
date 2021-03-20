# UdacityRobotic
Repository for the Udacity course "become a robotics software engineer"

# Project: Build My World
## Pictures of the world and the robot
This is the ApartmentWorld in gazebo:
![ApartmentWorld](https://user-images.githubusercontent.com/80584914/111225133-b113d400-85df-11eb-8d93-d04a77f4d82e.PNG)

This is the devrobot (like a develop plattform) in gazebo:
![devrobot](https://user-images.githubusercontent.com/80584914/111225139-b2dd9780-85df-11eb-9a63-376b5d88e5e4.PNG)

## Prepare gazebo plugins
Before starting gazebo with a world the *.cpp script must build first.
1. Go into the build directory and run:
* cmake ..
* make

2. After this the build directory must added to the gazebo plugin path:
* export GAZEBO_PLUGIN_PATH=${GAZEBO_PLUGIN_PATH}:~/Documents/workspace/UdacityRobotic/myrobot/build

3. Now the world can be opened with gazebo (you need to be in the world directory with the terminal):
* gazebo ApartmentWorld



