// controller_manager_factory.hpp

#ifndef CONTROLLER_MANAGER_FACTORY_HPP
#define CONTROLLER_MANAGER_FACTORY_HPP

#include <iostream>
#include "controller_products.hpp"


// the controller manager is the controller "factory", it will produce the required controller
// depending on what is requested by the client.
class ControllerManager
{
  public:
    virtual Controller* select_controller(std::string controller_name);
    virtual void go_to_goal(std::string goal);
};

class ProximitySensorControllerManager
{
  public:
    ProximitySensorControllerManager();
    virtual ~ProximitySensorControllerManager();
    Controller* select_controller(std::string controller_name);
    void go_to_goal(std::string goal, int proximity_sensor_reading);
};

class HybridControllerManager
{
  public:
    HybridControllerManager();
    virtual ~HybridControllerManager();
    Controller* select_controller(std::string controller_name);
    void go_to_goal(std::string goal, int touch_sensor_reading);
};

#endif  //  CONTROLLER_MANAGER_FACTORY_HPP