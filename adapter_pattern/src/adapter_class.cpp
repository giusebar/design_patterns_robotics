#include "adapter_class.hpp"
#include "ascii_camera_driver.hpp"

CameraRosWrapper::CameraRosWrapper(AsciiCameraDriver* ascii_point_cloud_camera)
    : ascii_point_cloud_camera(ascii_point_cloud_camera)
{
    std::cout<<"WRAPPER";
};

CameraRosWrapper::~CameraRosWrapper()
{};

std::string CameraRosWrapper::transmit_point_cloud_data()
{
  std::cout<<"Using adapter\n";
  int data_from_camera = ascii_point_cloud_camera->transmit_point_cloud_data();
  std::string binary = std::bitset<8>(data_from_camera).to_string();
  return binary;
}
