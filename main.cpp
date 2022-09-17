#include <iostream>
#include "Bank.h"

using namespace std;

int main()
{
    BankAccount myAccount("Bob",5000);
    BankAccount John("Johnson");

    John.deposit(500);
    cout << "John's account contains "<<John.getBalance()<< endl;

    cout << endl;
    John.withdraw(1000);
    cout << "John's account is still "<<John.getBalance()<< endl;

    cout<<endl;
    cout <<myAccount.getOwner()<<" account contains "<< myAccount.getBalance()<<endl;

    return 0;
}
