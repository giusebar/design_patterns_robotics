#include "robot_arm_interface.hpp"
#include "robot_arms.hpp"
#include "robot_driver_abstraction.hpp"


int main()
{
  Kuka kuka_arm = Kuka();
  UniversalRobot universal_robot_arm = UniversalRobot();

  // here we pass to the robot driver the instance of the arm we want to control
  RobotDriver robot_driver = RobotDriver(kuka_arm);
  int number_of_joints = robot_driver.get_number_of_robot_arm_joints();
  double *joint_states = robot_driver.get_current_robot_arm_state();

  for (int j = 0; j < number_of_joints; ++j)
  {
    std::cout<<"Joint "<<j<<": "<<joint_states[j]<<"\n";
  }

  double command[number_of_joints] = {1.0, 2.0, 3.0};
  robot_driver.send_commands_to_robot_arm(command);
}
