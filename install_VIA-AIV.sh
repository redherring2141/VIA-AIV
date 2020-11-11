
### Install Intel RealSense2 SDK
sudo apt-key adv --keyserver keys.gnupg.net --recv-key F6E65AC044F831AC80A06380C8B3A55A6F3EFCDE || sudo apt-key adv --keyserver hkp://keyserver.ubuntu.com:80 --recv-key F6E65AC044F831AC80A06380C8B3A55A6F3EFCDE

sudo add-apt-repository "deb http://realsense-hw-public.s3.amazonaws.com/Debian/apt-repo bionic main" -u

sudo apt-get install librealsense2-utils librealsense2-dev


### Install ROS-melodic distro
sudo sh -c 'echo "deb http://packages.ros.org/ros/ubuntu $(lsb_release -sc) main" > /etc/apt/sources.list.d/ros-latest.list'

sudo apt-key adv --keyserver 'hkp://keyserver.ubuntu.com:80' --recv-key C1CF6E31E6BADE8868B172B4F42ED6FBAB17C654

sudo apt update

sudo apt install ros-melodic-desktop-full

echo "source /opt/ros/melodic/setup.bash" >> ~/.bashrc

source ~/.bashrc

sudo apt install python-rosdep python-rosinstall python-rosinstall-generator python-wstool build-essential

sudo rosdep init

rosdep update

./setupCatkinWorkspace.sh

sudo apt-get install qt4-qmake libqt4-dev

sudo cp cv_bridgeConfig.cmake /opt/ros/melodic/share/cv_bridge/cmake/cv_bridgeConfig.cmake # for OpenCV4 use case

## Additionally required ROS packages
sudo apt-get install ros-melodic-ackermann-msgs ros-melodic-cv-bridge ros-melodic-ddynamic-reconfigure ros-melodic-serial ros-melodic-joy ros-melodic-joy-teleop


### Source build
sudo cp -r ./racecar_ws/src/* ~/catkin_ws/src/
cd ~/catkin_ws
catkin_make

### install BLDCTool
./installBLDCToolJetson.sh




