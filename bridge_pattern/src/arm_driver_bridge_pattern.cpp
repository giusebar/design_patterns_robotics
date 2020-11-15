#include "arm_driver_bridge_pattern.hpp"
#include <stdio.h>

UniversalRobot::UniversalRobot(){};
UniversalRobot::~UniversalRobot(){};

int UniversalRobot::get_number_of_joints()
{
  return number_of_joints;
}

double* UniversalRobot::get_joints_position()
{
  printf("Getting joint position for Universal Robot arm\n");
  for (int j = 0; j < number_of_joints; ++j)
  {
    joint_states[j] = 2.0;
  }
  return joint_states;
  
}

void UniversalRobot::set_joints_position(double command[])
{
  for (int c = 0; c < number_of_joints; ++c)
  {
    printf("Sending command %f to joint %d of UniversalRobot arm\n", command[c], c);
  }
}


Kuka::Kuka(){};
Kuka::~Kuka(){};

int Kuka::get_number_of_joints()
{
  return number_of_joints;
}

double* Kuka::get_joints_position()
{
  printf("Getting joint position for Kuka arm\n");
  for (int j = 0; j < number_of_joints; ++j)
  {
    joint_states[j] = 1.0;
  }
  return joint_states;
}

void Kuka::set_joints_position(double command[])
{
  for (int c = 0; c < number_of_joints; ++c)
  {
    printf("Sending command %f to joint %d of KUKA arm\n", command[c], c);
  }
}

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


int main()
{
  Kuka kuka_arm = Kuka();
  RobotDriver robot_driver = RobotDriver(kuka_arm);
  int number_of_joints = robot_driver.get_number_of_robot_arm_joints();
  double *joint_states = robot_driver.get_current_robot_arm_state();

  for (int j = 0; j < number_of_joints; ++j)
  {
    printf("Joint %d current position: %f \n", j, joint_states[j]);
  }

  double command[number_of_joints] = {1.0, 2.0, 3.0};
  robot_driver.send_commands_to_robot_arm(command);
}
