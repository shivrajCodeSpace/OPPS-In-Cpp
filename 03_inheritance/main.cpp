#include "Animal.h"
#include <iostream>

class Dog : public Animal {
public:
    Dog(const std::string &name) : Animal(name) {}
    void bark() const {
        std::cout << name_ << " says: Woof!\n";
    }
};

class Cat : public Animal {
public:
    Cat(const std::string &name) : Animal(name) {}
    void meow() const {
        std::cout << name_ << " says: Meow!\n";
    }
};

Animal::Animal(const std::string &name) : name_(name) {}

void Animal::speak() const {
    std::cout << name_ << " is an animal.\n";
}

std::string Animal::getName() const {
    return name_;
}

int main() {
    Dog rover("Rover");
    Cat whiskers("Whiskers");

    rover.speak();
    rover.bark();

    whiskers.speak();
    whiskers.meow();

    return 0;
}
