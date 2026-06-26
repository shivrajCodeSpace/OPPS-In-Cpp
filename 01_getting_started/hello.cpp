#include <iostream>
#include <string>
using namespace std;
int main() {
    string name;
    cout << "Welcome to Object-Oriented Programming in C++!\n";
    cout << "Enter your name: ";
    getline(cin, name);
    cout << "Hello, " << name << ". Let's learn classes and objects.\n";
    return 0;
}