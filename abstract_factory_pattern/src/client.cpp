#include "teleop_factory.hpp"

void TeleopApplication(TeleopFactory& teleop_system)
{
   Glove* glove = teleop_system.create_glove();
   Sensor* sensor = teleop_system.create_sensor();

   glove->get_user_fingertip_positions();
   sensor->read_sensor_value();
}

int main()
{
  std::string teleop_product = "simple_teleop";

  TeleopFactory teleop_system;

  if (teleop_product == "simple_teleop")
  {
    SimpleTeleopFactory teleop_system = SimpleTeleopFactory();
  }
  else if (teleop_product == "tactile_teleop")
  {
    TactileTeleopFactory teleop_system = TactileTeleopFactory();
  }
  else if (teleop_product == "temperature_teleop")
  {
    TemperatureTeleopFactory teleop_system = TemperatureTeleopFactory();
  }
  else
  {
    return;
  }

  TeleopApplication(teleop_system);
   
}