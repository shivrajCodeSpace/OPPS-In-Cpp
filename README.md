# OPPS-In-Cpp

A complete C++ Object-Oriented Programming (OOP) learning path from scratch.

## What is Object-Oriented Programming?

Object-Oriented Programming is a programming paradigm built around the concept of objects.
Each object combines data and the operations that work on that data, enabling developers to model real-world things, organize code clearly, and build systems that are easier to maintain.

## Purpose of this course

This repository is designed to teach C++ OOP from the ground up.
It starts with basic C++ syntax and moves step by step through classes, inheritance, polymorphism, encapsulation, abstraction, and advanced features.
The goal is to make OOP concepts practical and to help you build reusable, modular C++ programs.

## Applications of OOP in C++

Object-oriented design is widely used in many C++ domains:
- Game development
- Finance and banking systems
- Graphic user interfaces
- Simulation and modeling
- Embedded systems and device drivers

## Advantages of OOP

Using OOP in C++ gives you:
- Code reuse through classes and inheritance
- Better organization with clear object boundaries
- Easier maintenance by hiding implementation details
- Improved extensibility for adding new behavior
- Stronger program structure for complex software

## What this repository includes

- `01_getting_started/` — basic C++ setup and hello-world introduction
- `02_classes_objects/` — classes, objects, constructors, and member functions
- `03_inheritance/` — base/derived classes and simple inheritance
- `04_polymorphism/` — runtime polymorphism with virtual functions
- `05_encapsulation/` — access control and safe object design
- `06_abstraction/` — abstract classes and interfaces
- `07_advanced/` — static members, operator overloading, templates
- `08_project/` — a simple student management system project to practice OOP

## How to use

1. Open a module folder.
2. Read the module `README.md`.
3. Compile the example with `g++ -std=c++17` or use the `Makefile` targets.

Example:

```bash
make run-01
```

## Course flow

1. Start with `01_getting_started/` to set up C++ basics.
2. Learn object creation in `02_classes_objects/`.
3. Continue to inheritance in `03_inheritance/`.
4. Study polymorphism in `04_polymorphism/`.
5. Practice encapsulation in `05_encapsulation/`.
6. Understand abstraction in `06_abstraction/`.
7. Explore advanced concepts in `07_advanced/`.
8. Finish by building the `08_project/` application.

## Build support

Use the `Makefile` targets:

- `make all` — compile all examples
- `make run-01` through `make run-08` — compile and run each module
- `make clean` — remove generated binaries

## Notes

This repository is designed as a learning resource for Object-Oriented Programming in C++.
Each module includes sample code and an explanation of core concepts.
