#include <iostream>

typedef struct customer
{
    char fullname[35];
    double payment;
} Item;

class Stack
{
    private:
        enum {MAX = 3};
        Item items[MAX];
        int top;
        double paymentSum;
    public:
        Stack() {top = 0; paymentSum = 0;};
        bool isFull() const;
        bool isEmpty() const;
        void push(const Item & item);
        void pull(Item & item);
        void showPayment();

};