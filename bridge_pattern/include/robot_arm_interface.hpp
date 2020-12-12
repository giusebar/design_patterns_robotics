// robot_arm_interface.hpp

#ifndef ROBOT_ARM_INTERFACE_HPP
#define ROBOT_ARM_INTERFACE_HPP

#include <iostream>

// this is the interface for the robot arms
class RobotArm
{
  public:
    virtual void set_joints_position(double command[]) = 0;
    virtual double* get_joints_position() = 0;
    virtual int get_number_of_joints() = 0;
};

#endif  // ROBOT_ARM_INTERFACE_HPP