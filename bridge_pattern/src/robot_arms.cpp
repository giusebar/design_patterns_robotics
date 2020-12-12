#include "robot_arm_interface.hpp"
#include "robot_arms.hpp"


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
