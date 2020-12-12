// motion_planners.hpp

#ifndef MOTION_PLANNERS_HPP
#define MOTION_PLANNERS_HPP

#include <iostream>
#include "motion_planner_interface.hpp"


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

#endif   //  MOTION_PLANNERS_HPP
