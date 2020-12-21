// glove_products.hpp

#ifndef GLOVE_PRODUCTS_HPP
#define GLOVE_PRODUCTS_HPP

#include <iostream>
#include "glove_products.hpp"

class Glove
{
  public:
    virtual void get_fingertip_position() = 0;
    virtual void set_sensor_feedback() = 0;
};

class SimpleGlove : public Glove
{
  public:
    SimpleGlove();
    ~SimpleGlove();

    void get_fingertip_position() override;
    void set_sensor_feedback() override;
};

class TactileGlove : public Glove
{
  public:
    TactileGlove();
    ~TactileGlove();

    void get_fingertip_position() override;
    void set_sensor_feedback() override;
};

class TemperatureGlove : public Glove
{
  public:
    TemperatureGlove();
    ~TemperatureGlove();

    void get_fingertip_position();
    void set_sensor_feedback();
};

#endif  //  GLOVE_PRODUCTS_HPP
