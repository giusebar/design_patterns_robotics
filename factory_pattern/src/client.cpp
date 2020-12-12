#include "controller_products.hpp"
#include "controller_manager_factory.hpp"

int main()
{
    ProximitySensorControllerManager proximity_controller_manager = ProximitySensorControllerManager();
    
    std::string goal_proximity = "go to proximity target";
    int proximity_sensor_reading = 25;
    proximity_controller_manager.go_to_goal(goal_proximity, proximity_sensor_reading);

    HybridControllerManager hybrid_controller_manager = HybridControllerManager();
    
    std::string goal_hybrid = "go to hybrid target";
    int touch_sensor_reading = 25;
    hybrid_controller_manager.go_to_goal(goal_hybrid, touch_sensor_reading);
}