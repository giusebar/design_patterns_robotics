// mediator.hpp

#ifndef MEDIATOR_HPP
#define MEDIATOR_HPP

#include "base_component.hpp"

class Mediator
{
  public:
    virtual void notify(std::string component_name, std::string event) = 0;
};

#endif  // MEDIATOR_HPP