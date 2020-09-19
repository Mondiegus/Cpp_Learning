#include "T10_1.h"

void BankAccount::initializeAccount()
{
    cout << "Put your name: ";
    cin.getline(name, NAMELHT);
    cout << "Put account number: ";
    cin.getline(accountNumber, ACCOUNTLHT);
    cout << "Put your account balance: ";
    cin >> balance;
}

void BankAccount::showData()
{
    cout << "Account data:" << endl;
    cout << "Name:" << name << endl;
    cout << "Account number:" << accountNumber << endl;
    cout << "Balance:" << balance << endl;
}

void BankAccount::fund(double amount)
{
    balance += amount;
}

void BankAccount::getMoney(double amount)
{
    balance -= amount;
}
