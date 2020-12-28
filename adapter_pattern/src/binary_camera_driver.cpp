#include "binary_camera_driver.hpp"

BinaryCameraDriver::BinaryCameraDriver()
{};

BinaryCameraDriver::~BinaryCameraDriver()
{};

std::string BinaryCameraDriver::transmit_point_cloud_data()
{
  std::cout<<"Send point cloud data in format in BINARY format\n";
  srand (time(NULL));
  int random = rand() % 26;
  std::string binary = std::bitset<8>(random).to_string();
  std::cout<<"Binary char: "<<binary<<"\n";
  return binary;
}
