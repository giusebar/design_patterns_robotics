// robot_arms.hpp

#ifndef ROBOT_ARMS_HPP
#define ROBOT_ARMS_HPP

#include <iostream>
#include "robot_arm_interface.hpp"

class UniversalRobot: public RobotArm
{
  public:
    UniversalRobot();
    ~UniversalRobot();

    void set_joints_position(double command[]);
    double* get_joints_position();
    int get_number_of_joints();
  private:
    const static int number_of_joints = 4;
    double joint_states[number_of_joints];
};

class Kuka: public RobotArm
{
  public:
    Kuka();
    ~Kuka();
    
    void set_joints_position(double command[]);
    double* get_joints_position();
    int get_number_of_joints();
  private:
    const static int number_of_joints = 3;
    double joint_states[number_of_joints];
};

#endif  // ROBOT_ARMS_HPP