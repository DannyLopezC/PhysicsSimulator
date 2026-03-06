# 🏀 Physics Simulation -- OpenGL Implementation

This project is a physics simulation developed with **C++ and OpenGL**.\
The goal of the project is to simulate **projectile motion and collision
behavior** while applying clean architecture and object-oriented
programming principles.

------------------------------------------------------------------------

## 🎯 Project Objective

Develop an interactive physics simulation that demonstrates:

-   Projectile motion under gravity.
-   Collision and bouncing behavior.
-   Real-time parameter experimentation.
-   Clean and maintainable C++ architecture.

The project focuses on separating **simulation logic, rendering, input
handling, and UI systems**.

------------------------------------------------------------------------

## 📌 Features

-   Projectile motion simulation.
-   Ball collision with floor and wall.
-   Adjustable physics parameters.
-   Trajectory trail visualization.
-   Interactive UI system.
-   Restart button to reset the simulation.

------------------------------------------------------------------------

## 🖼️ Preview

![Simulation](https://github.com/DannyLopezC/OpenGLCourseAPP/blob/main/demo_video.gif)

------------------------------------------------------------------------

## 🔧 Requirements

This project requires:

-   C++17 or newer
-   OpenGL 3.3+
-   GLFW
-   GLM

------------------------------------------------------------------------

## ▶️ How to run the project

1.  Clone this repository:

git clone https://github.com/DannyLopezC/PhysicsSimulator.git cd
PhysicsSimulator

2.  Open the project with your **C++ IDE (Visual Studio recommended)**.

3.  Build the project.

4.  Run the executable.

------------------------------------------------------------------------

## 🎮 Controls

Restart Simulation → Mouse click on **Reset button**

*(More controls may be added as UI features grow.)*

------------------------------------------------------------------------

## 🧠 Concepts Used

-   Object-Oriented Programming
-   Real-time physics simulation
-   Projectile motion mathematics
-   Collision response
-   OpenGL rendering pipeline
-   Custom UI system
-   Input management

------------------------------------------------------------------------

## 🏗 Architecture

The project follows a modular architecture that separates the physics
simulation, rendering pipeline, input handling, and user interface
systems. This structure helps keep the simulation logic independent from
the graphics layer.

### Simulation System

The **simulation module** contains the physics logic responsible for the
projectile behavior.

Responsibilities include:

-   Updating object position using time integration
-   Applying gravitational acceleration
-   Handling collisions with floor and walls
-   Applying bounce response using restitution

This layer is independent from OpenGL rendering, allowing the physics
model to remain clear and testable.

------------------------------------------------------------------------

### Rendering System

Rendering is handled using **OpenGL**, responsible for drawing the
simulation objects and visual elements.

Responsibilities include:

-   Drawing the projectile and environment
-   Rendering trajectory trails
-   Managing shader programs
-   Handling transformation matrices

The rendering layer only visualizes the current simulation state.

------------------------------------------------------------------------

### Input System

The input system handles user interaction with the simulation.

Responsibilities include:

-   Detecting mouse input
-   Handling UI button interactions
-   Restarting the simulation
-   Passing input events to the application controller

Separating input logic prevents UI interactions from interfering with
simulation logic.

------------------------------------------------------------------------

### UI System

A simple UI system is implemented to allow runtime interaction with the
simulation.

Features include:

-   Reset button to restart the simulation
-   Parameter interaction through UI elements
-   Visual feedback for user actions

The UI layer is designed to remain independent from both the physics and
rendering systems.

------------------------------------------------------------------------

### Application Controller

The main application acts as the central coordinator of the program.

Responsibilities include:

-   Initializing systems
-   Updating the physics simulation
-   Triggering rendering
-   Processing user input
-   Managing application state

This structure ensures that each subsystem remains modular and
maintainable.

------------------------------------------------------------------------

## 📚 Credits

Project developed as a programming exercise focused on **physics
simulation and graphics programming with OpenGL**.

Author: **DannyLopezC**\
GitHub: https://github.com/DannyLopezC
