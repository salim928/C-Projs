#ifndef BANK_H
#define BANK_H

#include <string>

using namespace std;


class BankAccount
{
private:
    string owner;
    int balance;

public:
    BankAccount(string owner);
    BankAccount(string owner, int balance);
    void deposit(int amount);
    void withdraw(int amount);
    string getOwner() const;
    int getBalance() const;
};

#endif // BANK_H
