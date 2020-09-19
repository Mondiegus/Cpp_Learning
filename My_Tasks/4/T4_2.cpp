#include <iostream>

using namespace std;

int main()
{
    string name;
    string dessert;

    cout << "Put your name:\n";
    getline(cin, name);
    cout << "Put your favourite dessert:\n";
    getline(cin, dessert);
    cout << "I have " << dessert << " for you, " << name << ".\n";
    return 0;
}