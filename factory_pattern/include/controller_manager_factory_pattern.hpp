// controller_switch_factory_pattern.hpp

#ifndef CONTROLLER_SWITCH_FACTORY_PATTERN_HPP
#define CONTROLLER_SWITCH_FACTORY_PATTERN_HPP

#include <iostream>

class Controller
{
  public:
    virtual void init() = 0;
    virtual void update() = 0;
};

class ComplianceController : public Controller
{
  public:
    ComplianceController();
    ~ComplianceController();

    void init();
    void update();
    
};

class PositionController : public Controller
{
  public:
    PositionController();
    ~PositionController();

    void init();
    void update();
};


class ControllerManager
{
  public:
    ControllerManager();
    virtual ~ControllerManager();
    Controller* select_controller(std::string controller_name);
    void go_to_goal(Controller& controller_type);
};


#endif  //  CONTROLLER_SWITCH_FACTORY_PATTERN_HPP