#include "teleop_factory.hpp"

void TeleopApplication(TeleopFactory& teleop_system)
{
  Glove* glove = teleop_system.create_glove();
  Sensor* sensor = teleop_system.create_sensor();

  glove->get_fingertip_position();
  glove->set_sensor_feedback();

  sensor->read_sensor_value();
}

int main()
{
  std::string teleop_type;
  std::cout << "Select teleop type Simple(S) / Tactile (T) / Temperature (C): " << teleop_type;
  std::cin >> teleop_type; // get user input from the keyboard

  if ("S" == teleop_type)
  {
    SimpleTeleopFactory teleop_system = SimpleTeleopFactory();
    TeleopApplication(teleop_system);
  }
  else if ("T" == teleop_type)
  {
    TactileTeleopFactory teleop_system = TactileTeleopFactory();
    TeleopApplication(teleop_system);
  }
  else if ("C" == teleop_type)
  {
    TemperatureTeleopFactory teleop_system = TemperatureTeleopFactory();
    TeleopApplication(teleop_system);
  }
  else
  {
    std::cout<<"Invalid teleop system type selected\n";
  }
}