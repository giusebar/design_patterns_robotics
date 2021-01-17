// base_component.hpp

#ifndef BASE_COMPONENT_HPP
#define BASE_COMPONENT_HPP

#include <iostream>
#include "mediator.hpp"

class BaseComponent
{
  public:
    BaseComponent(Mediator *mediator = nullptr);
    ~BaseComponent();

    void set_mediator(Mediator *mediator);
    void enable_robot();
    void disable_robot();

    std::string component_name = "";
  protected:
    Mediator* mediator;
};

#endif  // BASE_COMPONENT_HPP
