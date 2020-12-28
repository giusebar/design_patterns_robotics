# Builder Pattern

## Introduction
The Builder pattern is a creational design pattern.

This patterns facilitates the construction of complex objects. It's based on the creation of a builder class that allows to produce different types and representation of an object using the same construction code.

When constructing complex objects it might happen that the constructor ends up having
too many parameters. This results in hard-to-read code and can lead to mistakes.

The Builder pattern allows to encapsulate the construction code in common functionalities, extracting it from its own class into separate objects called builders.

You can go further and extract a series of calls to the builder steps you use to construct a product into a separate class called director. The director class defines the order in which to execute the building steps, while the builder provides the implementation for those steps.

More information and example on the Builder Pattern can be found [here](https://refactoring.guru/design-patterns/builder).

## A Practical Robotic Example
This pattern can be really useful in allowing for flexible construction of a robotic system. Suppose to have a robotic hand. This hand can be built with different characteristics. It can have a certain numbers of fingers, a certain numbers of motors depending on the degrees of freedom required, a certain type of tactile sensors and so on.

We could construct a hand object by defining the parameters in the constructor as shown here:

```
RobotHand::RobotHand(int number_of_fingers, int number_of_motors, std::string sensor_type)
```

If we apply the Builder Pattern we can create instead a Builder interface that encapsulates the construction code. For instance:

```
class RobotHandBuilder
{
  setNumberOfFingers()
  setNumberOfMotors()
  setSensorType
}
```

The concrete implementation of the builder class will construct the objects with the specific features and return the required object. We can define a different concrete builder with the goal of writing a hand manual. Although hand and manual are two completely different objects we can use the same building interface to create them.

Then through the director we can use the builder steps to build the objects we need, We can have for instance a super dexterous hand with 5 fingers and 20 motors, and a lite hand with only 3 fingers and 10 motors. At the same time, we can easily add or remove sensors. Thanks to the flexibility of this pattern, the director will only need to know the type of builder in order to construct correctly either the hand or the manual.

## A Practical Robotic Example: UML Diagram
![image](images/builder_pattern.png)
