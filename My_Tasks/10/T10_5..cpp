#include "T10_5.h"

bool Stack::isFull() const
{
    return top == MAX;
}

bool Stack::isEmpty() const
{
    return top == 0;
}

void Stack::push(const Item & item)
{
    if(!isFull())
    {
        items[top] = item;
        top++;
        // return 1;
    }
    else
    {
        // return 0;
    }
}

void Stack::pull(Item & item)
{
    if(!isEmpty())
    {
        top--;
        paymentSum += items[top].payment;
        item = items[top];
        
        // return 1;
    }
    else
    {
        // return 0;
    }
}

void Stack::showPayment()
{
    std::cout << "Payment is: " << paymentSum << std::endl;
}
