#include "Bank.h"
#include <iostream>

using namespace std;


BankAccount::BankAccount(string owner)
{
    this-> owner = owner;
    this-> balance = 0;
}
BankAccount::BankAccount(string owner, int balance)
{
    this-> owner = owner;
    if(balance <= 0)
    {
        cout <<"You must enter a balance > 0"<< endl;
    }
    else
    {
        this->balance =  balance;//if there is a balance then <-
    }
}

void BankAccount::deposit(int amount)
{
    if(amount > 0 )
    {
        balance+= amount;// balance = balance + amount
    }
    else
    {
        cout << "The amount to deposit must be greater zero" << endl;
    }
}

void BankAccount::withdraw(int amount)
{
    if(amount > 0 && amount <= balance)
    {
        balance -= amount; // balance  =  balance - amount
    }
    else
    {
        cout << "Invalid value, it must be either > 0 or less than your balance"<<endl;
    }
}

string BankAccount::getOwner() const
{
     return owner;
}

int BankAccount::getBalance() const
{
    return balance;
}
