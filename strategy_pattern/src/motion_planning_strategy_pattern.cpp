#include "motion_planning_strategy_pattern.hpp"

RRTPlanner::RRTPlanner()
{};

RRTPlanner::~RRTPlanner()
{};

bool RRTPlanner::plan()
{
  std::cout<<"Planning to goal with RRTPlanner\n";
  return true;
};

RRTConnectPlanner::RRTConnectPlanner()
{};

RRTConnectPlanner::~RRTConnectPlanner()
{};

bool RRTConnectPlanner::plan()
{
  std::cout<<"Planning to goal with RRTConnectPlanner\n";
  return true;
};

PRMPlanner::PRMPlanner()
{};

PRMPlanner::~PRMPlanner()
{};

bool PRMPlanner::plan()
{
  std::cout<<"Planning to goal with PRMPlanner\n";
  return true;
};

ArmMotionPlanner::ArmMotionPlanner(MotionPlanningStrategy& planning_strategy)
    : planning_strategy(planning_strategy)
{};

ArmMotionPlanner::~ArmMotionPlanner()
{};

bool ArmMotionPlanner::plan_to_cartesian_target()
{
  planning_strategy.plan();
  return true;
};

int main()
{
  // using rrt_planner
  RRTPlanner rrt_planner = RRTPlanner();
  ArmMotionPlanner arm_motion_planner = ArmMotionPlanner(rrt_planner);
  arm_motion_planner.plan_to_cartesian_target();

  // using prm_planner
  PRMPlanner prm_planner = PRMPlanner();
  ArmMotionPlanner arm_motion_planner_2 = ArmMotionPlanner(prm_planner);
  arm_motion_planner_2.plan_to_cartesian_target();
}