# Strategy Pattern

## Introduction
The strategy pattern is a behavioural design pattern. The aim of the Strategy Pattern is to allow the definition of a family of algorithms in separate classes and allow to make their objects interchangeable.

If there is a class that does something specific in a lot of different ways, the Strategy patterns allows to define a lot of different strategies. The context (the original class that deploys the strategies) stores a reference to the strategy that needs to be deployed.

More information and example on the Strategy Pattern can be found [here](https://refactoring.guru/design-patterns/strategy).

## Example explanation
In the robotic field this pattern is useful for a variety of use-cases. For instance in a vision system depending on the goal of what needs to be identified there might be the need for different algorithms. Another example is a motion planner, there are various algorithms that might be used depending on requirements such as speed, efficiency and complexity of the environment. Also when grasping an object the strategy to grasp a certain object might depend on the shape or the obstacles.

## Example structure
![image](https://github.com/giusebar/design_patterns_robotics/blob/master/bridge_pattern/images/strategy_pattern.png?raw=true)