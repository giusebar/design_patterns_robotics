// director.hpp

#ifndef DIRECTOR_HPP
#define DIRECTOR_HPP

#include <iostream>
#include "robotic_hands_builder.hpp"

class Director
{
  public:
    Director();
    ~Director();

    void set_builder(RoboticHandsBuilder* builder);
    void build_super_dexterous_hand();
    void build_super_dexterous_hand_no_sensors();
    void build_lite_hand();

  private:
    RoboticHandsBuilder* builder;
};

#endif  //  DIRECTOR_HPP