#include <iostream>
#include "T10_3.h"

Golf::Golf(const char * name, int hc)
{
    strcpy(fullname, name);
    handicap = hc;
}

void Golf::setgolt(const char * name, int hc)
{
    strcpy(fullname, name);
    handicap = hc;
}

void Golf::setgolt()
{
    using namespace std;

    char name[Len];
    int handicap;

    cout << "Put name: ";
    cin.getline(name, Len);
    cout << "Put handicap: ";
    cin >> handicap;

    cin.ignore();
    *this = Golf(name, handicap);
}

void Golf::handicapset(int hc)
{
    handicap = hc;
}

void Golf::showgolf() const
{
    using namespace std;

    cout << "Name: " << fullname << endl;
    cout << "handicap: " << handicap << endl;

}
