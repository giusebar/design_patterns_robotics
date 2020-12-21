#include "director.hpp"

int main()
{
  DexterousHandBuilder* dexterous_hand_builder = new DexterousHandBuilder();

  Director* director = new Director();

  director->set_builder(dexterous_hand_builder);

  // building super dexterous hand
  std::cout<<"Building super dexterous hand object\n";
  director->build_super_dexterous_hand();

  RoboticHand* dexterous_robotic_hand = dexterous_hand_builder->get_product();
  std::cout<<"Super dexterous hand features: \n";
  dexterous_robotic_hand->list_features();
  delete dexterous_robotic_hand;

  // building lite hand
  std::cout<<"Building lite dexterous hand object\n";
  director->build_lite_hand();

  RoboticHand* lite_robotic_hand = dexterous_hand_builder->get_product();
  std::cout<<"Lite dexterous hand features: \n";
  lite_robotic_hand->list_features();
  delete lite_robotic_hand;


  // changing builder to create dexterous hand manual
  DexterousHandManualBuilder* dexterous_hand_manual_builder = new DexterousHandManualBuilder();

  director->set_builder(dexterous_hand_manual_builder);

  std::cout<<"Building manual for dexterous hand\n";
  // build manual for dexterous hand no sensors
  director->build_super_dexterous_hand_no_sensors();

  RoboticHand* robotic_hand_manual = dexterous_hand_builder->get_product();
  std::cout<<"The super dexterous hand with no sensors has the following features: \n";
  robotic_hand_manual->list_features();
  delete robotic_hand_manual;
}