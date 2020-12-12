// robot_driver_abstraction.hpp

#ifndef ROBOT_DRIVER_ABSTRACTION_HPP
#define ROBOT_DRIVER_ABSTRACTION_HPP

#include <iostream>
#include "robot_arm_interface.hpp"

// here we define the abstraction of the driver for the whole robot. The constructor will take in a arm type,
// and that will define the implementation for the set and get joint position for the arm.
class RobotDriver
{
  public:
    RobotDriver(RobotArm& robot_arm);
    ~RobotDriver();
    int get_number_of_robot_arm_joints();
    void send_commands_to_robot_arm(double command[]);
    double* get_current_robot_arm_state();
  private:
    RobotArm &robot_arm;
};

#endif  // ROBOT_DRIVER_ABSTRACTION_HPP