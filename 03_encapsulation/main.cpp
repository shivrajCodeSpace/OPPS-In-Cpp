#include "BankAccount.h"
#include <iostream>

BankAccount::BankAccount(const std::string &owner, double balance)
    : owner_(owner), balance_(balance) {}

void BankAccount::deposit(double amount) {
    if (amount > 0) {
        balance_ += amount;
    }
}

bool BankAccount::withdraw(double amount) {
    if (amount > 0 && amount <= balance_) {
        balance_ -= amount;
        return true;
    }
    return false;
}

double BankAccount::getBalance() const {
    return balance_;
}

std::string BankAccount::getOwner() const {
    return owner_;
}

int main() {
    BankAccount account("Sanjay", 1500.0);
    std::cout << account.getOwner() << "'s starting balance: " << account.getBalance() << "\n";
    account.deposit(500);
    std::cout << "After deposit: " << account.getBalance() << "\n";

    if (account.withdraw(700)) {
        std::cout << "Withdrawal successful. Remaining balance: " << account.getBalance() << "\n";
    } else {
        std::cout << "Withdrawal failed. Not enough funds.\n";
    }

    return 0;
}
