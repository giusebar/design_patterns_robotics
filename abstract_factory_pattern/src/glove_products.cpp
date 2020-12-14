#include "glove_products.hpp"

SimpleGlove::SimpleGlove(){};
SimpleGlove::~SimpleGlove(){};

void SimpleGlove::get_user_fingertip_positions()
{
  std::cout<<"Getting fingertip data from Simple glove"<<std::endl;
}

TactileGlove::TactileGlove(){};
TactileGlove::~TactileGlove(){};

void TactileGlove::get_user_fingertip_positions()
{
  std::cout<<"Getting fingertip data from Tactile glove"<<std::endl;
}

void TactileGlove::set_pressure_of_tactile_feedback()
{
  std::cout<<"Setting Tactile glove feedback"<<std::endl;
}

TemperatureGlove::TemperatureGlove(){};
TemperatureGlove::~TemperatureGlove(){};

void TemperatureGlove::get_user_fingertip_positions()
{
  std::cout<<"Getting fingertip data from Temperature glove"<<std::endl;
}

void TemperatureGlove::set_temperature_of_temp_feedback()
{
  std::cout<<"Setting Temperature glove feedback"<<std::endl;
}
