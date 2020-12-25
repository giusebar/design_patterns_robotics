// "binary_camera_driver.hpp"

#ifndef BINARY_CAMERA_DRIVER_HPP
#define BINARY_CAMERA_DRIVER_HPP

#include <iostream>
#include <bitset>

class BinaryCameraDriver
{
  public:
    BinaryCameraDriver();
    ~BinaryCameraDriver();
  
    virtual std::string transmit_point_cloud_data();
};

#endif  //  BINARY_CAMERA_DRIVER_HPP