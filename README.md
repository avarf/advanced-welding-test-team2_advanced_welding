# Advanced Welding Test - [Team 2]
Implementing a cartesian controller for a robot manipulator


## Team members
*   Ravikiran Bhat- [@Ravikiran-Bhat](https://github.com/Ravikiran-Bhat-Git)
*   Peerawad Boonyarittiwong - [@azsembler](https://github.com/azsembler)
*   Mohammadali Varfan- [@avarf](https://github.com/avarf)


## Known Issues / Todo's

-   Creating a node for working with the arm
-   Start using Travis

## Introduction
The goal of this project is the implementation of a catesian controller that can control a manipulator smoothly and pass the welding task of the robocup competition.
The manipulator that will be used for this project is the arm installed on a Kuka Youbot.
When a user wants to move the end effector of a manipulator to a desired position the user needs the joint displacements that are required so the end effector reaches the goal position. A cartesian controller will answer this problem by using different mathematical methods and using forward and backward kinematic solvers.

## Packages
Below packages are being used for implementing this project:

*   ROS - Robot Operating System which enables different packages and nodes to communicate
*   Rviz - 3D visualization tool for ROS
*   KDL - A framework for modelling and implementation of kinematic chains
*   Mas_common_robotic
*   Mas_industrial_robotic


## Getting Started

These instructions will get you a copy of the project up and running on your local machine for development and testing purposes.

### Prerequisites

For installing the required softwares and packeges the documentaion of each software should be followed.

*   Ubuntu 14.04 [Instaliation Guid](https://tutorials.ubuntu.com/tutorial/tutorial-install-ubuntu-desktop#0)
*   Ros Indigo [Installiation Guid](http://wiki.ros.org/indigo/Installation/Ubuntu)
*   Orocos KDL [Installiation Guid](https://github.com/orocos/orocos_kinematics_dynamics/blob/master/orocos_kdl/INSTALL)
*   Mas_common_robotic [Access Link](https://mas.b-it-center.de/gitgate/mas-group/mas_common_robotics)
*   Mas_industrial_robotic [Access Link](https://mas.b-it-center.de/gitgate/mas-group/mas_industrial_robotics)
