#include "Person.h"
#include <iostream>

Person::Person(const std::string &name, int age)
    : name_(name), age_(age) {}

void Person::introduce() const {
    std::cout << "My name is " << name_ << " and I am " << age_ << " years old.\n";
}

void Person::celebrateBirthday() {
    ++age_;
    std::cout << "Happy birthday, " << name_ << "! You are now " << age_ << ".\n";
}
