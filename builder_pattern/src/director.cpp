#include "director.hpp"

Director::Director()
{};

Director::~Director()
{};

void Director::set_builder(RoboticHandsBuilder* builder)
{
  this->builder = builder;
}

void Director::build_super_dexterous_hand()
{
  builder->set_number_of_fingers(5);
  builder->set_number_of_motors(20);
  builder->set_sensor_type("tactile");
}

void Director::build_super_dexterous_hand_no_sensors()
{
  builder->set_number_of_fingers(5);
  builder->set_number_of_motors(20);
}

void Director::build_lite_hand()
{
  builder->set_number_of_fingers(3);
  builder->set_number_of_motors(10);
  builder->set_sensor_type("temperature");
}
