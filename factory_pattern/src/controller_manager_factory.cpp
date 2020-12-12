#include "controller_manager_factory.hpp"
#include "controller_products.hpp"


ProximitySensorControllerManager::ProximitySensorControllerManager()
{
}

ProximitySensorControllerManager::~ProximitySensorControllerManager()
{
}

Controller* ProximitySensorControllerManager::select_controller(std::string controller_name)
{
    if (controller_name == "position")
    {
        std::cout<<"Selected position controller\n";
        PositionController* position_controller = new PositionController();
        return position_controller;
    }
    else if (controller_name == "velocity")
    {
        std::cout<<"Selected velocity controller\n";
        VelocityController* velocity_controller = new VelocityController();
        return velocity_controller;
    }
    else
    {
        return NULL;
    }
}

void ProximitySensorControllerManager::go_to_goal(std::string goal, int proximity_sensor_reading)
{
    std::cout<<"GOAL: "<<goal<<"\n";
    Controller* controller = NULL;
    if (proximity_sensor_reading > 50)
    {
        std::string controller_name = "position";
        controller = select_controller(controller_name);
    }
    else
    {
        std::string controller_name = "velocity";
        controller = select_controller(controller_name);
    }
    controller->init();
    controller->update();
}

HybridControllerManager::HybridControllerManager()
{
}

HybridControllerManager::~HybridControllerManager()
{
}

Controller* HybridControllerManager::select_controller(std::string controller_name)
{
    if (controller_name == "position")
    {
        std::cout<<"Selected position controller\n";
        PositionController* position_controller = new PositionController();
        return position_controller;
    }
    else if (controller_name == "torque")
    {
        std::cout<<"Selected torque controller\n";
        TorqueController* torque_controller = new TorqueController();
        return torque_controller;
    }
    else
    {
        return NULL;
    }
}

void HybridControllerManager::go_to_goal(std::string goal, int touch_sensor_reading)
{
    std::cout<<"GOAL: "<<goal<<"\n";
    Controller* controller = NULL;
    if (touch_sensor_reading < 50)
    {
        std::string controller_name = "position";
        controller = select_controller(controller_name);
    }
    else
    {
        std::string controller_name = "torque";
        controller = select_controller(controller_name);
    }
    controller->init();
    controller->update();
}