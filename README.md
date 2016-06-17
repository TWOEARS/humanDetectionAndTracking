This is a GenoM3 module for human Detection and Tracking. Due to copyright, the tracking part cannot be published as open-source. Therefore, this repository contains the binaries of the entire GenoM3 module.

To make it work, the repository has to be cloned in /opt (it might need sudo privileges).

Once is cloned, make sure to:

```
export PATH=$PATH:/opt/humanDetectionAndTracking/bin
export PKG_CONFIG_PATH=$PKG_CONFIG_PATH:/opt/humanDetectionAndTracking/lib/pkgconfig
export ROS_PACKAGE_PATH=$ROS_PACKAGE_PATH:/opt/humanDetectionAndTracking/share
export PYTHONPATH=$PYTHONPATH:/opt/humanDetectionAndTracking/lib/python2.7/site-packages.
```

It was compiled on Ubuntu 14.04 (64 bits).


How to use the module:

T1: Launch the camera drivers and broadcasts the raw images.
```
1. Roscore &
2. source ~/catkin_ws/devel/setup.bash
3. roslaunch ueye_cam stereo.launch
```

T2: Launch the stereo_img_proc node. This rectifies the images and obtaines the disparity image.
```
1. ROS_NAMESPACE=stereo rosrun stereo_image_proc stereo_image_proc
```

T3: Run the human detection module.
```
1. humandetection-ros -b
2. genomixd &
3. eltclsh
4. package require genomix
5. ::genomix::connect
6. genomix1 load humandetection
7. ::humandetection::connect_port MasterCamera /stereo/left/image_rect_color
   ::humandetection::connect_port SlaveCamera /stereo/right/image_rect_color
   ::humandetection::connect_port LeftCameraParameters /stereo/left/camera_info
   ::humandetection::connect_port RightCameraParameters /stereo/right/camera_info
8. ::humandetection::RunDetection {frameRate 7 temporalSlidingWindowSize 11 detectorFrameRatio 2 $
10. ::humandetection::kill
11. pkill genomixd
```
