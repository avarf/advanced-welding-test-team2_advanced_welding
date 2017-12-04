# Advanced Welding Test - [Team 2]
Implementing a cartesian controller for a robot manipulator


## Team members
*   Ravikiran Bhat- [@Ravikiran-Bhat](https://github.com/Ravikiran-Bhat-Git)
*   Peerawad Boonyarittiwong - [@azsembler](https://github.com/azsembler)
*   Mohammadali Varfan- [@avarf](https://github.com/avarf)

## Travis setup:
To setup, perform the following steps:

-   Sign up for [travis-ci.org](https://travis-ci.org/) and enable CI for the repository
-   Create a .travis.yml file in your local repository.
-   Populate the file as described [here](https://github.com/felixduvallet/ros-travis-integration/blob/master/.travis.yml). 
-   The above file sets up continuous integration (through Travis-CI) for any ROS package. For more information refer [this link](https://github.com/felixduvallet/ros-travis-integration)
-   Commit the file and push it to github.

Now for every push , travis does the following:

-   A barebones ROS distribution (indigo by default) is installed on a fresh ubuntu virtual machine.
-   A catkin workspace is created and your repository is put in it.
-   The wstool is used to check out any from-source dependencies (i.e. other repositories).
-   Resolves package dependencies using rosdep (i.e. install packages using apt-get).
-   Compiles the catkin workspace
-   Runs all available unit tests

Including the above, more information can be found at [this link](https://answers.ros.org/question/220305/how-can-i-integrate-my-ros-package-with-travis-continuous-integration/)

Successful travis build status can be seen at this link : [![Build Status](https://travis-ci.org/Ravikiran-Bhat-Git/advanced-welding-test-team2_advanced_welding.svg?branch=develop)](https://travis-ci.org/Ravikiran-Bhat-Git/advanced-welding-test-team2_advanced_welding)

## Known Issues / Todo's

-   Creating a node for working with the arm


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
