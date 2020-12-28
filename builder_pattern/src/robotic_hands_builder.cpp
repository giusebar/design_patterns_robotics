#include "robotic_hands_builder.hpp"

DexterousHandBuilder::DexterousHandBuilder()
{
  this->robotic_hand = new RoboticHand();
};

DexterousHandBuilder::~DexterousHandBuilder()
{
  delete robotic_hand;
};

void DexterousHandBuilder::set_number_of_fingers(int number_of_fingers)
{
  robotic_hand->number_of_fingers = number_of_fingers;
}

void DexterousHandBuilder::set_number_of_motors(int number_of_motors)
{
  robotic_hand->number_of_motors = number_of_motors;
}

void DexterousHandBuilder::set_sensor_type(std::string sensor_type)
{
  robotic_hand->sensor_type = sensor_type;
}

RoboticHand* DexterousHandBuilder::get_product()
{
  RoboticHand* robotic_hand_product = this->robotic_hand;
  return robotic_hand_product;
}

DexterousHandManualBuilder::DexterousHandManualBuilder()
{
  this->robotic_hand_manual = new RoboticHandManual();
};

DexterousHandManualBuilder::~DexterousHandManualBuilder()
{
  delete robotic_hand_manual;
};

void DexterousHandManualBuilder::set_number_of_fingers(int number_of_fingers)
{
  robotic_hand_manual->number_of_fingers = number_of_fingers;
}

void DexterousHandManualBuilder::set_number_of_motors(int number_of_motors)
{
  robotic_hand_manual->number_of_motors = number_of_motors;
}

void DexterousHandManualBuilder::set_sensor_type(std::string sensor_type)
{
  robotic_hand_manual->sensor_type = sensor_type;
}

RoboticHandManual* DexterousHandManualBuilder::get_product()
{
  RoboticHandManual* robotic_hand_manual_product = this->robotic_hand_manual;
  return robotic_hand_manual_product;
}
