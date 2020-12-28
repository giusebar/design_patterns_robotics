// robotic_hand.hpp

#ifndef ROBOTIC_HAND_HPP
#define ROBOTIC_HAND_HPP

#include <iostream>


class RoboticHand
{
  public:
    int number_of_fingers;
    int number_of_motors;
    std::string sensor_type;
    void list_features(){
      std::cout<<"number of fingers: "<<number_of_fingers<<"\n";
      std::cout<<"number of motors: "<<number_of_motors<<"\n";
      std::cout<<"sensor_type: "<<sensor_type<<"\n\n";
    };
};

#endif  // ROBOTIC_HAND_HPP
