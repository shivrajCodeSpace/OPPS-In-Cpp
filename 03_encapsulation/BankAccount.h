#ifndef BANK_ACCOUNT_H
#define BANK_ACCOUNT_H

#include <string>

class BankAccount {
public:
    BankAccount(const std::string &owner, double balance);
    void deposit(double amount);
    bool withdraw(double amount);
    double getBalance() const;
    std::string getOwner() const;

private:
    std::string owner_;
    double balance_;
};

#endif // BANK_ACCOUNT_H
