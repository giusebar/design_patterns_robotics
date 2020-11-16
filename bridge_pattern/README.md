# Bridge Pattern

## Introduction
The bridge pattern is a structural design pattern. The aim of the Bridge Pattern is to decouple an abstraction from its implementation so that the two can vary independently.

The abstraction is the representation of some entity (also called interface). This layer is not supposed to do any work on its own, but it should delegate the work to the implementation layer (also called platform).

More information and example on the Bridge Pattern can be found [here](https://refactoring.guru/design-patterns/bridge).


## Example explanation

The example I choose to implement helps to divide the monolithic code of a RobotDriver and the different robots it may have to run. Suppose you have an end-effector (gripper or robot hand), and you want to make the driver flexible enough to run with any robotic arm. Ideally you should avoid changing the driver every time you mount the end-effector on a different robot. Thanks to the Bridge Pattern, it is possible to define the driver implementation based on the type of arm that it gets initialized with. This increases robustness to changes. Consider the use-case in which a certain version of a Robotic Arm suddenly becomes obsolete because a better model gets released. If the firmware changes accordingly, thanks to the Bridge Pattern, you will have to modify only the part of the code that defines the implementation of the driver for that specific arm. In the same way, if you want to develop a more complex driver, you will have to change only the driver without having to re-implement it for every different arm.

## Example structure

![image](https://github.com/giusebar/design_patterns_robotics/blob/F_bridge_pattern/bridge_pattern/images/bridge_pattern.png?raw=true)
