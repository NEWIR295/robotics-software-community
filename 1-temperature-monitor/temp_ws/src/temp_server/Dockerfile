# pull our base image : osrf/ros:humble-desktop-full for ROS2 Humble GUI usage
FROM osrf/ros:humble-desktop-full

# use bash as default shell
SHELL ["/bin/bash", "-c"]

# download and install dependencies
RUN apt-get update && apt-get install -y \
    nano \
    python3-pip \
    python3-rosdep \
    python3-colcon-common-extensions \
    python3-argcomplete 

# create a workspace
WORKDIR /ros_ws

# copy temp_server, temp_interface and packages into workspace
COPY temp_server ./src/temp_server
COPY temp_interface ./src/temp_interface
COPY temp_bringups ./src/temp_bringups

#build the workspace and source the setup file
RUN source /opt/ros/humble/setup.sh && \
    colcon build

# run the temperature server node
CMD ["/bin/bash", "-c", "source /opt/ros/humble/setup.sh && \
                        source install/setup.sh && \                            
                        ros2 run temp_server temp_sub"]
