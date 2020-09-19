#include <iostream>
#include <string>

using namespace std;

int main()
{
    int a = 0, b = 0;

    cout << "Put first, smaller number: ";
    cin >> a;
    cout << "Put second, bigger number: ";
    cin >> b;
    for(int i=a; i<=b; ++i)
    {
        cout << i << endl;
    }
}

