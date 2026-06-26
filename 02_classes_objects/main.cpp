#include "Person.h"

int main() {
    Person alice("Alice", 20);
    Person bob("Bob", 22);

    alice.introduce();
    bob.introduce();

    alice.celebrateBirthday();
    alice.introduce();

    return 0;
}
