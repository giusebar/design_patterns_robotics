#include "sensor_products.hpp"

BlankSensor::BlankSensor(){};
BlankSensor::~BlankSensor(){};

void BlankSensor::read_sensor_value()
{
  std::cout<<"Using blank sensors, no reading available"<<std::endl;
}

PressureSensor::PressureSensor(){};
PressureSensor::~PressureSensor(){};

void PressureSensor::read_sensor_value()
{
  std::cout<<"Reading pressure from pressure sensor"<<std::endl;
}

TemperatureSensor::TemperatureSensor(){};
TemperatureSensor::~TemperatureSensor(){};

void TemperatureSensor::read_sensor_value()
{
  std::cout<<"Reading temperature from temperature sensor"<<std::endl;
}
