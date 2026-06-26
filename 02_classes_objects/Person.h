#ifndef PERSON_H
#define PERSON_H

#include <string>

class Person {
public:
    Person(const std::string &name, int age);
    void introduce() const;
    void celebrateBirthday();

private:
    std::string name_;
    int age_;
};

#endif // PERSON_H
