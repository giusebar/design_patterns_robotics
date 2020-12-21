#include "teleop_factory.hpp"

SimpleTeleopFactory::SimpleTeleopFactory(){};
SimpleTeleopFactory::~SimpleTeleopFactory(){};

Glove* SimpleTeleopFactory::create_glove()
{
  std::cout<<"Instantiating simple glove"<<std::endl;
  Glove* simple_glove = new SimpleGlove();
  return simple_glove;
}

Sensor* SimpleTeleopFactory::create_sensor()
{
  std::cout<<"Instantiating blank sensors"<<std::endl;
  BlankSensor* blank_sensors = new BlankSensor();
  return blank_sensors;
}

TactileTeleopFactory::TactileTeleopFactory(){};
TactileTeleopFactory::~TactileTeleopFactory(){};

Glove* TactileTeleopFactory::create_glove()
{
  std::cout<<"Instantiating Tactile glove"<<std::endl;
  Glove* tactile_glove = new TactileGlove();
  return tactile_glove;
}

Sensor* TactileTeleopFactory::create_sensor()
{
  std::cout<<"Instantiating pressure sensors"<<std::endl;
  PressureSensor* pressure_sensors = new PressureSensor();
  return pressure_sensors;
}

TemperatureTeleopFactory::TemperatureTeleopFactory(){};
TemperatureTeleopFactory::~TemperatureTeleopFactory(){};

Glove* TemperatureTeleopFactory::create_glove()
{
  std::cout<<"Instantiating Temperature glove"<<std::endl;
  TemperatureGlove* temperature_glove = new TemperatureGlove();
  return temperature_glove;
}

Sensor* TemperatureTeleopFactory::create_sensor()
{
  std::cout<<"Instantiating Temperature sensors"<<std::endl;
  TemperatureSensor* temperature_sensors = new TemperatureSensor();
  return temperature_sensors;
}
