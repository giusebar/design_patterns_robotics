#include "control_manager.hpp"

ControlManager::ControlManager(PedalComponent* pedal,
                               ControllerComponent* controller,
                               TrackerComponent* tracker,
                               JoystickComponent* joystick)
    : pedal(pedal), controller(controller), tracker(tracker), joystick(joystick)
{
  this->pedal->set_mediator(this);
  this->controller->set_mediator(this);
  this->tracker->set_mediator(this);
  this->joystick->set_mediator(this);
}

void ControlManager::notify(std::string component_name, std::string event)
{
  // with the pedal we move the robot via the tracker
  if (component_name == "pedal")
  {
    if (event == "pressed")
    {
      tracker->move_robot();
      if (event == "move")
      {
        std::cout<<"moving robot\n";
      }
    }
    else if (event == "released")
    {
      if (event == "stop")
      {
        std::cout<<"stopping robot\n";
      }
      tracker->stop_robot();
    }
  }

  // with the controller we allow the user to home the robot using the joystick
  if (component_name == "controller")
  {
    if (event == "pressed")
    {
      joystick->home_robot();
      if (event == "home")
      {
        std::cout<<"homing robot with joystick";
      }
    }
    else if (event == "release")
    {
      joystick->stop_robot();
    }
  }
}

