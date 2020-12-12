#include "motion_planner_interface.hpp"
#include "motion_planners.hpp"


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
