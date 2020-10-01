#include <iostream>
#include "time_11_4.h"

int main()
{
    using std::cout;
    using std::endl;
    Time aida(3, 35);
    Time tosca (2, 48);
    Time temp;
    
    cout << "Aida i Tosca:\n";
    cout << aida <<"; " << tosca << endl;
    temp = aida + tosca; // operator+()
    cout << "Aida + Tosca: " << temp << endl;
    temp = aida * 1.17; //metoda operator*!)
    cout << "Aida * 1.17: " << temp << endl;
    cout << "10 * Tosca: " << 10 * tosca << endl;

    return 0;
}