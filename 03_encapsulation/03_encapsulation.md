# 03 Encapsulation

Encapsulation is one of the main ideas of object-oriented programming. It means wrapping data and the functions that work with that data inside a class so the data is protected and only changed in a controlled way.

## How encapsulation works

In encapsulation:
- the data (also called properties or attributes) is stored inside the class
- the class provides member functions to access or change that data
- direct access from outside the class is restricted

This helps keep the program safe, organized, and easier to maintain.

## Which properties are used in encapsulation?

Properties are the variables that describe the state of an object. For example, in a bank account class, the properties may include:
- `balance`
- `accountNumber`
- `ownerName`

These properties usually represent the internal data of the object.

## Access modifiers

Access modifiers decide who can access class members:

- `public`: accessible from anywhere
- `private`: accessible only inside the class
- `protected`: accessible inside the class and in derived classes

In most encapsulation examples, properties are declared as `private` and methods are declared as `public`.

## Setter and getter methods

Setter and getter methods are used to control access to private data.

- A `set` method is used to assign or update a value
- A `get` method is used to read a value

Example:

```cpp
class BankAccount {
private:
    double balance;

public:
    void setBalance(double amount) {
        if (amount >= 0) {
            balance = amount;
        }
    }

    double getBalance() {
        return balance;
    }
};
```

In this example:
- `balance` is a private property
- `setBalance()` allows controlled modification
- `getBalance()` allows safe reading

This is the basic idea of encapsulation: protect data and allow access only through member functions.

## Files in this module

- `BankAccount.h` — encapsulated account example
- `main.cpp` — deposit, withdraw, and show balance
