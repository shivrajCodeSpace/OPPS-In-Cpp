#include <iostream>
#include <string>
using namespace std;
class Teacher {
public:
    // Properties and attributes
    string name;
    string department;
    string subject;
    double salary = 0.0;

    // Method to change department
    void changeDepartment(const string &newDepartment) {
        department = newDepartment;
    }

    // Method to display teacher details
    void display() const {
        cout << "Teacher details:\n";
        cout << "Name: " << name << "\n";
        cout << "Department: " << department << "\n";
        cout << "Subject: " << subject << "\n";
        cout << "Salary: " << salary << "\n";
    }
};

int main() {
    Teacher t1;
    t1.name = "Shivraj";
    t1.department = "Computer Science and Technology";
    t1.subject = "OOPs";
    t1.salary = 45000.0;

    t1.display();

    t1.changeDepartment("Information Technology");
    cout << "\nAfter department change:\n";
    t1.display();

    return 0;
}