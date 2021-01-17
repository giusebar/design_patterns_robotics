// control_manager.hpp

#ifndef CONTROL_MANAGER_HPP
#define CONTROL_MANAGER_HPP

#include <iostream>
#include "components.hpp"
#include "mediator.hpp"

class ControlManager : public Mediator
{
  public:
    ControlManager(PedalComponent* pedal, ControllerComponent* controller,
                   TrackerComponent* tracker, JoystickComponent* joystick);
    ~ControlManager();

    void notify(std::string component_name, std::string event) override;
  protected:
    PedalComponent* pedal;
    ControllerComponent* controller;
    TrackerComponent* tracker;
    JoystickComponent* joystick;
};

#endif  // CONTROL_MANAGER_HPP
