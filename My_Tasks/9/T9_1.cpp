#include <iostream>
#include <cstring>
#include "T9_1.h"

void setgolt(golf & g, const char * name, int hc)
{
    strcpy(g.fullname, name);
    g.handicap = hc;
}

void setgolt(golf & g)
{
    using namespace std;

    char name[Len];
    int handicap;

    cout << "Put name: ";
    cin.getline(name, Len);
    cout << "Put handicap: ";
    cin >> handicap;

    cin.ignore();

    strcpy(g.fullname, name);
    g.handicap = handicap;
}

void handicap(golf & g, int hc)
{
    g.handicap = hc;
}

void showgolf(const golf & g)
{
    using namespace std;

    cout << "Name: " << g.fullname << endl;
    cout << "handicap: " << g.handicap << endl;

}
