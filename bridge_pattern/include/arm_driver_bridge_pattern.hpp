// arm_driver_bridge_pattern.hpp

#ifndef ARM_DRIVER_BRIDGE_PATTERN_HPP
#define ARM_DRIVER_BRIDGE_PATTERN_HPP

#include <stdio.h>

// this is the interface for the robot arms
class RobotArm
{
  public:   
    virtual void set_joints_position(double command[]) = 0;
    virtual double* get_joints_position() = 0;
    virtual int get_number_of_joints() = 0;
};

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

#endif  // ARM_DRIVER_BRIDGE_PATTERN_HPP