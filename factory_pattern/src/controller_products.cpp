#include "controller_products.hpp"

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

VelocityController::VelocityController()
{};

void VelocityController::init()
{
   std::cout<<"Initializing compliance controller\n";
}

void VelocityController::update()
{
    std::cout<<"Updating compliance controller according to velocity inputs\n";
}

TorqueController::TorqueController()
{};

void TorqueController::init()
{
   std::cout<<"Initializing torque controller\n";
}

void TorqueController::update()
{
    std::cout<<"Updating torque controller according to velocity inputs\n";
}