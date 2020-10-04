#include "T12_4.h"

using namespace std;

int main()
{

    unsigned long a, b, c, d;
    a = 111;
    b = 222;
    c = 333;
    d = -1;
    
    Stack a1(5);
    Stack a2(10);
    cout << "Is a1 empty: " << (a1.isempty() ? "yes" : "no") << endl;
    cout << "Is a2 empty: " << (a2.isempty() ? "yes" : "no") << endl;
    
    cout << "Is a1 full: " << (a1.isfull() ? "yes" : "no") << endl;
    cout << "Is a2 full: " << (a2.isfull() ? "yes" : "no") << endl;

    for(int i = 0; i < 5; i++)
        a1.push(a);
    
    a2.push(b);
    a2.push(c);
    Stack a3(a2);

    cout << "Is a3 empty: " << (a3.isempty() ? "yes" : "no") << endl;
    cout << "Is a3 full: " << (a3.isfull() ? "yes" : "no") << endl;

    // a1.pop(d);
    // cout << d << " deleted from stack\n";
    // a1.push(a);
    // cout << "Is a1 full: " << (a1.isfull() ? "yes" : "no") << endl;

    a1 = a3;
    cout << "Is a1 full: " << (a1.isfull() ? "yes" : "no") << endl;

    a1.pop(d);
    cout << d << " deleted from stack\n";

    return 0;
}