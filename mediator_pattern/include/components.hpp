// components.hpp

#ifndef COMPONENTS_HPP
#define COMPONENTS_HPP

#include <iostream>
#include "base_component.hpp"

class PedalComponent : public BaseComponent
{
  public:
    void key_pressed();
    void key_released();
    
    const std::string component_name = "pedal";
};

class ControllerComponent : public BaseComponent
{
  public:
    void key_pressed();
    void key_released();

    const std::string component_name = "controller";
};

class TrackerComponent : public BaseComponent
{
  public:
    void move_robot();
    void stop_robot();

    const std::string component_name = "tracker";
};

class JoystickComponent : public BaseComponent
{
  public:
    void home_robot();
    void stop_robot();

    const std::string component_name = "joystick";
};

#endif  // COMPONENTS_HPP
