#include "camera_binary_adapter.hpp"
#include "ascii_camera_driver.hpp"

CameraBinaryAdapter::CameraBinaryAdapter(AsciiCameraDriver* ascii_point_cloud_camera)
    : ascii_point_cloud_camera(ascii_point_cloud_camera)
{
    std::cout<<"WRAPPER";
};

CameraBinaryAdapter::~CameraBinaryAdapter()
{};

std::string CameraBinaryAdapter::transmit_point_cloud_data()
{
  std::cout<<"Using adapter\n";
  int data_from_camera = ascii_point_cloud_camera->transmit_point_cloud_data();
  std::string binary = std::bitset<8>(data_from_camera).to_string();
  return binary;
}
