// glove_products.hpp

#ifndef GLOVE_PRODUCTS_HPP
#define GLOVE_PRODUCTS_HPP

#include <iostream>

class Glove
{
  public:
    virtual void get_user_fingertip_positions() = 0;
};

class SimpleGlove : public Glove
{
  public:
    SimpleGlove();
    ~SimpleGlove();

    void get_user_fingertip_positions();
};

class TactileGlove : public Glove
{
  public:
    TactileGlove();
    ~TactileGlove();

    void get_user_fingertip_positions();
    void set_pressure_of_tactile_feedback();
};

class TemperatureGlove : public Glove
{
  public:
    TemperatureGlove();
    ~TemperatureGlove();

    void get_user_fingertip_positions();
    void set_temperature_of_temp_feedback();
};

#endif  //  GLOVE_PRODUCTS_HPP
