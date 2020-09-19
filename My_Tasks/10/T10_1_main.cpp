#include "T10_1.h"

int main()
{
    BankAccount account;
    account.initializeAccount();
    account.showData();
    account.fund(1000);
    account.getMoney(2500);
    account.showData();

    return 0;
}
