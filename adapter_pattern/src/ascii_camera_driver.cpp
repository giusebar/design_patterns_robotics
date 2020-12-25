#include "ascii_camera_driver.hpp"

AsciiCameraDriver::AsciiCameraDriver()
{};

AsciiCameraDriver::~AsciiCameraDriver()
{};

int AsciiCameraDriver::transmit_point_cloud_data()
{
  std::cout<<"Send point cloud data in format in ASCII format\n";
  srand (time(NULL));
  int random = rand() % 26;
  char character = 'a' + random;
  std::cout<<"ASCII char: "<<character<<"\n";
  return int(character);
}
