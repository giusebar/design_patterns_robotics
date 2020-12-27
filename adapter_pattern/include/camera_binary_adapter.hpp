// "camera_binary_adapter.hpp"

#ifndef CAMERA_BINARY_ADAPTER_HPP
#define CAMERA_BINARY_ADAPTER_HPP

#include <iostream>
#include "ascii_camera_driver.hpp"
#include "binary_camera_driver.hpp"
#include <bitset>

class CameraBinaryAdapter : public BinaryCameraDriver
{
  public:
    CameraBinaryAdapter(AsciiCameraDriver* ascii_point_cloud_camera);
    ~CameraBinaryAdapter();

    std::string transmit_point_cloud_data() override;
  private:
    AsciiCameraDriver* ascii_point_cloud_camera;
};

#endif  // CAMERA_BINARY_ADAPTER_HPP