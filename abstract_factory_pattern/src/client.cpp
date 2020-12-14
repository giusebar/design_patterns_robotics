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
  SimpleTeleopFactory teleop_system = SimpleTeleopFactory();

//   TactileTeleopFactory teleop_system = TactileTeleopFactory();

//   TemperatureTeleopFactory teleop_system = TemperatureTeleopFactory();

  TeleopApplication(teleop_system);
}