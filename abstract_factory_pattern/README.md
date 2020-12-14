# Abstract Factory Pattern

## Introduction
The abstract factory pattern is a creational design pattern.
It is conceptually similar to the Factory Pattern, the difference is that the Abstract Factory Pattern allows to create families of related objects instead of just creating one object.

Hence the main advantage of this Design Pattern is to increase flexibility when we need to select multiple objects that are related without having to specify their concrete classes. This allows to ease up future extensibility.

More information and example on the Abstract Factory Pattern can be found [here](https://refactoring.guru/design-patterns/abstract-factory).

## A Practical Robotic Example
Suppose you have a system that can be made of various components. For instance, a teleoperated robot. The robot can be teleoperated with a tactile feedback glove or with a more simple version of the glove.
Depending on the glove that we need to use, we need different sensors on the end of the hand fingertips. One that allows for receiving detailed tactile feedback or blank ones when feedback is not needed.

We want our code structure to be flexible enough to easily create FAMILIES of related objects (type of glove and type of sensore).

In this sense the Abstract Factory will offer to interface to create a glove and a sensor object. The Tactile teleoperated robot will be the concrete Factory that will require a tactile glove and touch sensors, while the Simple Teleoperated robot will be another concrete Factory that will require the concrete object of simple glove and blank sensors.

## A Practical Robotic Example: UML Diagram
![image](images/factory_pattern.png)
