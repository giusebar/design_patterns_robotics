#include "motion_planner_context.hpp"
#include "motion_planners.hpp"


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
