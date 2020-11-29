#include "controller_switch_factory_pattern.hpp"

PositionController::PositionController()
{};

void PositionController::init()
{
   std::cout<<"Initializing position controller\n";
}

void PositionController::update()
{
   std::cout<<"Updating position controller according to position inputs\n";
}

ComplianceController::ComplianceController()
{};

void ComplianceController::init()
{
   std::cout<<"Initializing compliance controller\n";
}

void ComplianceController::update()
{
    std::cout<<"Updating compliance controller according to velocity inputs\n";
}

ControllerManager::ControllerManager()
{
}

ControllerManager::~ControllerManager()
{
}

void ControllerManager::go_to_goal(Controller& controller_type)
{
    controller_type.init();
    controller_type.update();
}

Controller* ControllerManager::select_controller(std::string controller_name)
{
    if (controller_name == "position")
    {
        PositionController* position_controller = new PositionController();
        return position_controller;
    }
    else if (controller_name == "compliance")
    {
        ComplianceController* compliance_controller = new ComplianceController();
        return compliance_controller;
    }
    else
    {
        return NULL;
    }
}

int main()
{
    ControllerManager controller_manager = ControllerManager();
    
    int proximity_sensor_reading = 25;
    std::string controller_name = "";
    Controller* controller = NULL;

    if (proximity_sensor_reading > 50)
    {
        std::string controller_name = "position";
        controller = controller_manager.select_controller(controller_name);
    }
    else
    {
        std::string controller_name = "compliance";
        controller = controller_manager.select_controller(controller_name);
    }

    controller_manager.go_to_goal(*controller);
}