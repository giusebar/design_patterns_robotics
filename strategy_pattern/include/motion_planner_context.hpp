// motion_planner_context.hpp

#ifndef MOTION_PLANNER_CONTEXT_HPP
#define MOTION_PLANNER_CONTEXT_HPP

#include <iostream>
#include "motion_planners.hpp"
#include "motion_planner_interface.hpp"

// here we define the context for the motion planning strategy. Here we maintain
// a reference to one of the concrete strategies and communicate
// with this object only via the strategy interface.
class ArmMotionPlanner
{
  public:
    ArmMotionPlanner(MotionPlanningStrategy& motion_planner);
    ~ArmMotionPlanner();

   bool plan_to_cartesian_target();
  private:
   MotionPlanningStrategy& planning_strategy;
};

#endif  // MOTION_PLANNER_CONTEXT_HPP