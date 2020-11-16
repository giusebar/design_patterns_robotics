#include "arm_driver_bridge_pattern.hpp"

UniversalRobot::UniversalRobot(){};
UniversalRobot::~UniversalRobot(){};

int UniversalRobot::get_number_of_joints()
{
  return number_of_joints;
}

double* UniversalRobot::get_joints_position()
{
  std::cout<<"Getting joint position for Universal Robot arm\n";
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
    std::cout<<"Sending command: "<<command[c]<<" to joint "<< c <<" of UniversalRobot arm\n";
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
  std::cout<<"Getting joint position for KUKA arm\n";
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
    std::cout<<"Sending command: "<<command[c]<<" to joint "<<c<<" of KUKA arm\n";
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
  UniversalRobot universal_robot_arm = UniversalRobot();
  RobotDriver robot_driver = RobotDriver(universal_robot_arm);
  int number_of_joints = robot_driver.get_number_of_robot_arm_joints();
  double *joint_states = robot_driver.get_current_robot_arm_state();

  for (int j = 0; j < number_of_joints; ++j)
  {
    std::cout<<"Joint "<<j<<": "<<joint_states[j]<<"\n";
  }

  double command[number_of_joints] = {1.0, 2.0, 3.0};
  robot_driver.send_commands_to_robot_arm(command);
}
