#include "motion_planner_context.hpp"

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
