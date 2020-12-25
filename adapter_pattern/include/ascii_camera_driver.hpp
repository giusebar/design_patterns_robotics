// "ascii_camera_driver.hpp"

#ifndef ASCII_CAMERA_DRIVER_HPP
#define ASCII_CAMERA_DRIVER_HPP

#include <iostream>

class AsciiCameraDriver
{
  public:
    AsciiCameraDriver();
    ~AsciiCameraDriver();
  
    int transmit_point_cloud_data();
};

#endif  //  ASCII_CAMERA_CLASS_HPP