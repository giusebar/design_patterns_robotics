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
   virtual Glove* create_glove() = 0;
   virtual Sensor* create_sensor() = 0;
};

class SimpleTeleopFactory : public TeleopFactory
{
  public:
   SimpleTeleopFactory();
   ~SimpleTeleopFactory();

   Glove* create_glove() override;
   Sensor* create_sensor() override;
};

class TactileTeleopFactory : public TeleopFactory
{
  public:
   TactileTeleopFactory();
   ~TactileTeleopFactory();

   Glove* create_glove() override;
   Sensor* create_sensor() override;
};

class TemperatureTeleopFactory : public TeleopFactory
{
  public:
   TemperatureTeleopFactory();
   ~TemperatureTeleopFactory();

   Glove* create_glove() override;
   Sensor* create_sensor() override;
};

#endif  //  TELEOP_FACTORY_HPP
