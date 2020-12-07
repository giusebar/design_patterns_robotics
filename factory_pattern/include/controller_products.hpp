// controller_products.hpp

#ifndef CONTROLLER_PRODUCTS_HPP
#define CONTROLLER_PRODUCTS_HPP

#include <iostream>

class Controller
{
  public:
    virtual void init() = 0;
    virtual void update() = 0;
};

class VelocityController : public Controller
{
  public:
    VelocityController();
    ~VelocityController();

    void init();
    void update();
    
};

class PositionController : public Controller
{
  public:
    PositionController();
    ~PositionController();

    void init();
    void update();
};

class TorqueController : public Controller
{
  public:
    TorqueController();
    ~TorqueController();

    void init();
    void update();
};

#endif  //  CONTROLLER_PRODUCTS_HPP