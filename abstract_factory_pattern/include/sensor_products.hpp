// sensor_products.hpp

#ifndef SENSOR_PRODUCTS_HPP
#define SENSOR_PRODUCTS_HPP

#include <iostream>

class Sensor
{
  public:
    virtual void read_sensor_value() = 0;
};

class BlankSensor : public Sensor
{
  public:
    BlankSensor();
    ~BlankSensor();

    void read_sensor_value() override;
};

class PressureSensor : public Sensor
{
  public:
    PressureSensor();
    ~PressureSensor();

    void read_sensor_value() override;
};

class TemperatureSensor : public Sensor
{
  public:
    TemperatureSensor();
    ~TemperatureSensor();

    void read_sensor_value() override;
};

#endif  // SENSOR_PRODUCTS_HPP
