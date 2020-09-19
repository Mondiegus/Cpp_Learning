#include <iostream>

#define NAMELHT 100
#define ACCOUNTLHT 20

using namespace std;

class BankAccount
{
    private:
        char name[NAMELHT];
        char accountNumber[ACCOUNTLHT];
        int balance;

    public:
        BankAccount() {balance = 0;};
        void initializeAccount();
        void showData();
        void fund(double);
        void getMoney(double);
};