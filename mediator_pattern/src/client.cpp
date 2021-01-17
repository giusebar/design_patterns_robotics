#include "control_manager.hpp"
#include "components.hpp"
#include "base_component.hpp"
#include "mediator.hpp"

#define BOLDWHITE   "\033[1m\033[37m"
#define RESET   "\033[0m"

int main()
{
  PedalComponent* pedal = new PedalComponent();
  TrackerComponent* tracker = new TrackerComponent();
  ControllerComponent* controller = new ControllerComponent();
  JoystickComponent* joystick = new JoystickComponent();

  ControlManager* control_manager = new ControlManager(pedal, controller, tracker, joystick);
 
  std::cout<< BOLDWHITE << "Testing pedal press and release\n" << RESET;
  pedal->key_pressed();
  pedal->release();

  std::cout<< BOLDWHITE << "\nTesting controller key press\n" << RESET;
  controller->key_pressed();
}
