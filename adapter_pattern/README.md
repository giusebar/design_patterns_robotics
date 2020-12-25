# Adapter Pattern

## Introduction
The Adapter Pattern is a Structural Pattern.

The goal of the adapter pattern is to allow objects with incompatible interfaces to collaborate.

More information and example on the Adapter Pattern can be found [here](https://refactoring.guru/design-patterns/adapter).

## A Practical Robotic Example
Imagine to be working with a vision application. When integrating a new third-party library to get data from a sensor, it might happen that the data are given in a different format. In this case it is possible to create an adapter class (e.g. ros-wrapper), that converts the interface of one object so that the other objects in the application can understand it.

## A Practical Robotic Example: UML Diagram
![image](images/adapter_pattern.png)
