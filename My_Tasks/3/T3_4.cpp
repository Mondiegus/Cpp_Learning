#include <iostream>

#define SECINMIN    60
#define MININHOUR   60
#define HOURSINDAY  24

using namespace std;

void convertFunc(long);

int main()
{
    long secs = 0;
    cout << "Put number of seconds higher than or equal 0. Press any letter to stop." << endl;
    while(cin >> secs)
    {
        if( secs >= 0)
            convertFunc(secs);
        else
            cout << "Wrong input! Try again." << endl;
    }
}

void convertFunc(long origSecs)
{

    int days = 0, hours = 0, mins = 0, secs = origSecs;
    mins = origSecs / SECINMIN;
    secs %= SECINMIN;
    hours = mins / MININHOUR;
    mins %= MININHOUR;
    days = hours / HOURSINDAY;
    hours %= HOURSINDAY;

    cout << origSecs << " seconds = " << days << " days, " << hours << " hours, " << mins << " minutes, " << secs << " seconds." << endl;
    cout << "Press any letter to stop or another number to recalculate." << endl;
}