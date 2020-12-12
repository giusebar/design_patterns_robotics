// motion_planner_interface.hpp

#ifndef MOTION_PLANNER_INTERFACE_HPP
#define MOTION_PLANNER_INTERFACE_HPP

#include <iostream>

class MotionPlanningStrategy
{
  public:
    virtual bool plan() = 0;
};

#endif  // MOTION_PLANNER_INTERFACE_HPP