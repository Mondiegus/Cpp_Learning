#include <cstring>
#include "T10_5.h"

using namespace std;

int main()
{
    Item item;
    char fullname[50];
    double payment = 0;
    Stack stack;
    while(cin.getline(fullname, 50) && cin >> payment)
    {
        cin.ignore();
        if(!stack.isFull())
        {
            cout << "Stack is not full." << endl;
            strcpy(item.fullname, fullname);
            item.payment = payment;
            stack.push(item);
        }
        else
        {
            cout << "Stack is full." << endl;
            stack.pull(item);
            cout << "Deleted one element. It is: " << item.fullname << ", " << item.payment << endl;
            stack.showPayment();
        }
    }

    return 0;
}