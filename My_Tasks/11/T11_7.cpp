#include <iostream>
#include "complex0.h"

using namespace std;

int main()
{
    complex a(3.0, 4.0);
    complex c;
    
    cout << "Podaj liczbe zespolona (k, aby zakoczyc):\n";
    while(cin >> c)
    {
        cout << "c to " << c << endl;
        cout << "sprzezona z c to " << (~c) << endl;
        cout << "a to " << a << endl;
        cout << "a + c to " << (a+c) << endl;
        cout << "a - c to " << (a-c) << endl;
        cout << "a * c to " << (a*c) << endl;
        cout << "2 * c to " << (2*c) << endl;
    }

    cout << "Gotowe!\n";
    return 0;
}
