#include <iostream>
#include <array>

using namespace std;

const int ArSize = 100;

int main()
{
    array<long double, ArSize> factorials = {1, 1};

    for(int i = 2; i < ArSize; ++i)
        factorials.at(i) = i * factorials.at(i-1);
    for(int i = 0; i < ArSize; ++i)
        cout << i << "! = " << factorials[i] << endl;
}

