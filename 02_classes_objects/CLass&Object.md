# Class and Object in C++

## What is a class?

A class is a blueprint for creating objects. It defines the structure and behavior that the objects will have.
A class contains data members (attributes) and member functions (methods).

Example syntax:

```cpp
class Person {
public:
    std::string name;
    int age;

    void introduce() {
        std::cout << "My name is " << name << " and I am " << age << " years old." << std::endl;
    }
};
```

## What is an object?

An object is an instance of a class. It is created based on the class blueprint and has its own values for the class members.
Each object can use the member functions defined in the class.

Example syntax:

```cpp
Person alice;
alice.name = "Alice";
alice.age = 20;
alice.introduce();
```

## What is the dot operator?

The dot operator `.` is used to access a member of an object.
It connects an object to its data members or member functions.

Example:

```cpp
alice.name = "Alice";
std::cout << alice.age << std::endl;
alice.introduce();
```

Here, `alice.name` and `alice.age` access the fields of the `alice` object, and `alice.introduce()` calls the method for that object.

## Class as a blueprint

The class is like an architectural plan for a house. It defines what details each object should include, but it is not the actual house.
When you create an object from the class, you are building a concrete instance with real data.

## Object as an instance

Each object created from the class stores its own data. For example, two `Person` objects can have different names and ages.
Objects allow you to work with real values and use the methods defined in the class.

## Class and Object Architecture

A class defines the structure and behavior, while an object is the concrete instance.

Example architecture:

- Class: `Person`
  - Data members: `name`, `age`
  - Member functions: `introduce()`

- Object: `alice`
  - `name = "Alice"`
  - `age = 20`
  - can call `alice.introduce()`

Visual representation:

```
+----------------------+
|        Person        |  <-- class blueprint
|----------------------|
| - name              |
| - age               |
|----------------------|
| + introduce()       |
+----------------------+
           |
           v
+----------------------+
|        alice         |  <-- object instance
|----------------------|
| name = "Alice"      |
| age = 20             |
+----------------------+
```

You can create many objects from the same class, each with its own data values.

## Summary

- Class: blueprint or template that describes an object.
- Object: instance of the class with real data.
- Syntax of class: use the `class` keyword, then define attributes and methods inside curly braces.
- Syntax of object: declare a variable of the class type and use the dot operator to access members.
