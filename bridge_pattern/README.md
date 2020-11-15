# Bridge Pattern

## Introduction
The bridge pattern is a structural design pattern. The aim of the Bridge Pattern is to decouple an abstraction from its implementation so that the two can vary independently.

The abstraction is the representation of some entity (also called interface). This layer is not supposed to do any work on its own, but it should delegate the work to the implementation layer (also called platform).

More information and example of the Bridge Pattern can be found [here](https://refactoring.guru/design-patterns/bridge).


## Example explanation

The example I choose to implement helps devide the monolithic code of a RobotDriver and the different robots it may have to run. Suppose you have an end-effector (gripper or robot hand), and you want to make the driver flexible enough to run with any robotic arm. Ideally you would not like to change the driver for every different arm you might need to use. Thanks to the Bridge Pattern if an arm changes (e.g. new model gets released), you will only have to change the implementation for that specific arm. In the same way, if you want to develop a more complex driver, you will have to change only the driver without having to re-implement it for every different arm.

## Example structure

![alt text](https://github.com/giusebar/design_patterns_robotics/tree/F_bridge_pattern/bridge_pattern/images/bridge_pattern.png "Bridge Pattern Example Structure")