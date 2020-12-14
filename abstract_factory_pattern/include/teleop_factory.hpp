// teleop_factory.hpp

#ifndef TELEOP_FACTORY_HPP
#define TELEOP_FACTORY_HPP

#include <iostream>
#include "glove_products.hpp"
#include "sensor_products.hpp"


// here we define the Abstract Factory
class TeleopFactory
{
  public:
   virtual Glove* create_glove();
   virtual Sensor* create_sensor();
};

class SimpleTeleopFactory : public TeleopFactory
{
  public:
   SimpleTeleopFactory();
   ~SimpleTeleopFactory();

   Glove* create_glove();
   Sensor* create_sensor();
};

class TactileTeleopFactory : public TeleopFactory
{
  public:
   Glove* create_glove();
   Sensor* create_sensor();
};

class TemperatureTeleopFactory : public TeleopFactory
{
  public:
   Glove* create_glove();
   Sensor* create_sensor();
};

#endif  //  TELEOP_FACTORY_HPP
