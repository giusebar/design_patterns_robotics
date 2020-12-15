#include "glove_products.hpp"

SimpleGlove::SimpleGlove(){};
SimpleGlove::~SimpleGlove(){};

void SimpleGlove::get_fingertip_position()
{
  std::cout<<"Getting fingertip data from Simple glove"<<std::endl;
}

void SimpleGlove::set_sensor_feedback()
{
  std::cout<<"SimpleGlove in use, no sensor feedback available"<<std::endl;
}


TactileGlove::TactileGlove(){};
TactileGlove::~TactileGlove(){};

void TactileGlove::get_fingertip_position()
{
  std::cout<<"Getting fingertip data from Tactile glove"<<std::endl;
}

void TactileGlove::set_sensor_feedback()
{
  std::cout<<"Setting Tactile glove feedback"<<std::endl;
}

TemperatureGlove::TemperatureGlove(){};
TemperatureGlove::~TemperatureGlove(){};

void TemperatureGlove::get_fingertip_position()
{
  std::cout<<"Getting fingertip data from Temperature glove"<<std::endl;
}

void TemperatureGlove::set_sensor_feedback()
{
  std::cout<<"Setting Temperature glove feedback"<<std::endl;
}
