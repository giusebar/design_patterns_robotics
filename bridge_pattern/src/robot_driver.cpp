#include "robot_arm_interface.hpp"
#include "robot_arms.hpp"
#include "robot_driver_abstraction.hpp"


RobotDriver::RobotDriver(RobotArm &robot_arm)
    : robot_arm(robot_arm)
{};

RobotDriver::~RobotDriver(){};

int RobotDriver::get_number_of_robot_arm_joints()
{
  return robot_arm.get_number_of_joints();
}

void RobotDriver::send_commands_to_robot_arm(double command[])
{
  robot_arm.set_joints_position(command);
}

double* RobotDriver::get_current_robot_arm_state()
{
  return robot_arm.get_joints_position();
}
