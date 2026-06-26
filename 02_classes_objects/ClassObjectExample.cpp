#include <iostream>
#include <string>

using namespace std;

// A class is a blueprint for creating objects.
// It defines what data each object will store and what actions the object can perform.
class Car {
public:
    // Data members (attributes)
    string make;
    string model;
    int year;
    double fuelLevel;

    // Member function: show car details
    void displayInfo() const {
        cout << "Car details:\n";
        cout << "Make: " << make << "\n";
        cout << "Model: " << model << "\n";
        cout << "Year: " << year << "\n";
        cout << "Fuel level: " << fuelLevel << " liters\n";
    }

    // Member function: add fuel to the car
    void refuel(double amount) {
        if (amount > 0) {
            fuelLevel += amount;
        }
    }
};

int main() {
    // Create two objects from the Car class.
    // Each object is an instance with its own data.
    Car car1;
    Car car2;

    car1.make = "Toyota";
    car1.model = "Corolla";
    car1.year = 2020;
    car1.fuelLevel = 25.0;

    car2.make = "Honda";
    car2.model = "Civic";
    car2.year = 2022;
    car2.fuelLevel = 15.5;

    // Use the dot operator to access object members.
    cout << "Using car1 object:\n";
    car1.displayInfo();

    cout << "\nUsing car2 object:\n";
    car2.displayInfo();

    // Modify one object without affecting the other.
    car1.refuel(10.0);
    cout << "\nAfter refueling car1:\n";
    car1.displayInfo();

    cout << "\ncar2 remains unchanged:\n";
    car2.displayInfo();

    return 0;
}
