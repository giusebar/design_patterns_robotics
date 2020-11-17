// motion_planning_strategy_pattern.hpp

#ifndef MOTION_PLANNING_STRATEGY_PATTERN_HPP
#define MOTION_PLANNING_STRATEGY_PATTERN_HPP

#include <iostream>

class MotionPlanningStrategy
{
  public:
    virtual bool plan() = 0;
};

class RRTPlanner: public MotionPlanningStrategy
{
  public:
    RRTPlanner();
    ~RRTPlanner();
    
    bool plan();
};

class PRMPlanner: public MotionPlanningStrategy
{
  public:
    PRMPlanner();
    ~PRMPlanner();
    
    bool plan();
};

class RRTConnectPlanner: public MotionPlanningStrategy
{
  public:
    RRTConnectPlanner();
    ~RRTConnectPlanner();

    bool plan();
};


class ArmMotionPlanner
{
  public:
    ArmMotionPlanner(MotionPlanningStrategy& motion_planner);
    ~ArmMotionPlanner();


   bool plan_to_cartesian_target();
  private:
   MotionPlanningStrategy& planning_strategy;
};

#endif  // MOTION_PLANNING_STRATEGY_PATTERN_HPP