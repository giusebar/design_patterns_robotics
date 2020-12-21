// robotic_hands_builder.hpp

#ifndef ROBOTIC_HANDS_BUILDER_HPP
#define ROBOTIC_HANDS_BUILDER_HPP

#include <iostream>
#include <string>
#include "robotic_hand.hpp"
#include "robotic_hand_manual.hpp"


class RoboticHandsBuilder
{
  public:
    virtual void set_number_of_fingers(int number_of_fingers) = 0;
    virtual void set_number_of_motors(int number_of_motors) = 0;
    virtual void set_sensor_type(std::string sensor_type) = 0;
};

class DexterousHandBuilder : public RoboticHandsBuilder
{
  public:
    DexterousHandBuilder();
    ~DexterousHandBuilder();

    void set_number_of_fingers(int number_of_fingers) override;
    void set_number_of_motors(int number_of_motors) override;
    void set_sensor_type(std::string sensor_type) override;
    RoboticHand* get_product();
  private:
    RoboticHand* robotic_hand;
};

class DexterousHandManualBuilder : public RoboticHandsBuilder
{
  public:
    DexterousHandManualBuilder();
    ~DexterousHandManualBuilder();

    void set_number_of_fingers(int number_of_fingers) override;
    void set_number_of_motors(int number_of_motors) override;
    void set_sensor_type(std::string sensor_type) override;
    RoboticHandManual* get_product();
  private:
    RoboticHandManual* robotic_hand_manual;
};

#endif  // BUILDER_HPP
