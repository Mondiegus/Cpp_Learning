#include "stone_11_5.h"
#include <iostream>

int main()
{
    using namespace std;

    Stonewt stone1(1, 1, stones);
    Stonewt stone2(2, 1, pounds_precise);
    Stonewt stone3(3, 1, pounds_runded);
    
    cout << stone1;
    cout << stone2;
    cout << stone3;

    cout << (stone1+stone2);
    cout << (stone3-stone1);
    cout << (stone2*stone2);
    cout << (-stone3);

    return 0;
}