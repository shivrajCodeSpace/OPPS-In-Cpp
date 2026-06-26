# 03 Inheritance

Inheritance is an object-oriented programming feature that lets one class reuse another class's members.
A derived class inherits data and behavior from a base class, then adds its own specialized features.

## Purpose of inheritance

- Reuse existing code and avoid duplication.
- Represent real-world relationships, such as "a dog is an animal." 
- Organize program structure using general and specialized classes.

## Advantages of inheritance

- Code reuse: common behavior is written once in the base class.
- Easier maintenance: changes in the base class apply to all derived classes.
- Extensibility: new derived classes can be created without modifying existing code.
- Clear design: classes form a hierarchy that models real-world relationships.

## Applications of inheritance

Inheritance is commonly used in:
- Animal hierarchies in simulations and games
- User interface controls (buttons, windows, text fields)
- Vehicle or shape hierarchies in graphics programs
- Business domain models (employee, manager, consultant)
- Software frameworks and reusable libraries

## Types of inheritance

C++ supports several inheritance forms:

- Single inheritance: one derived class inherits from one base class.
- Multiple inheritance: one derived class inherits from more than one base class.
- Multilevel inheritance: a class derives from a derived class, forming a chain.
- Hierarchical inheritance: multiple derived classes inherit from the same base class.
- Hybrid inheritance: a combination of two or more of the above types.

## Modes of inheritance

C++ also supports inheritance access modes, which control base class member visibility in the derived class:

- `public` inheritance: public and protected members of the base class keep their access levels in the derived class.
- `protected` inheritance: public and protected members of the base class become `protected` in the derived class.
- `private` inheritance: public and protected members of the base class become `private` in the derived class.

Public inheritance is the most common and models an "is-a" relationship.

## Example in this module

- `Animal.h` defines a base class with shared animal behavior.
- `main.cpp` creates derived objects and shows how inherited members are used.

## Summary

Inheritance helps you build class hierarchies, reuse code, and create specialized versions of a base concept. 
Using inheritance properly leads to cleaner, more maintainable C++ programs.
