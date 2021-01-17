#include "components.hpp"

BaseComponent::BaseComponent(Mediator *mediator)
    : mediator(mediator)
{}

BaseComponent::~BaseComponent()
{}

void BaseComponent::set_mediator(Mediator *mediator)
{
  this->mediator = mediator;
}

void BaseComponent::enable_robot()
{
  std::cout<<"Enable robot\n";
}

void BaseComponent::disable_robot()
{
  std::cout<<"Disable robot\n";
}

void PedalComponent::key_pressed()
{
  std::cout<<"Pedal pressed\n";
  enable_robot();
  mediator->notify(component_name, "pressed");
}

void PedalComponent::key_released()
{
  std::cout<<"Pedal released\n";
  disable_robot();
  mediator->notify(component_name, "release");
}

void ControllerComponent::key_pressed()
{
  std::cout<<"Controller pressed\n";
  enable_robot();
  mediator->notify(component_name, "pressed");
}

void ControllerComponent::key_released()
{
  std::cout<<"Controller released\n";
  disable_robot();
  mediator->notify(component_name, "release");
}

void TrackerComponent::move_robot()
{
  std::cout<<"Sending data from tracker to robot\n";
  mediator->notify(component_name, "move");
}

void TrackerComponent::stop_robot()
{
  std::cout<<"Stop sending data from tracker to robot\n";
  mediator->notify(component_name, "stop");
}

void JoystickComponent::home_robot()
{
  std::cout<<"Sending data from joystick to home robot\n";
  mediator->notify(component_name, "home");
}

void JoystickComponent::stop_robot()
{
  std::cout<<"Stop sending data from joystick to robot\n";
  mediator->notify(component_name, "stop");
}
