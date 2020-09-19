#include <iostream>
#include <cmath>

using namespace std;

void showTime(int, int);

int main()
{
    int mins = 0, hours = 0;
    cout << "Put number of mins: ";
    cin >> mins;
    cout << "Put number of hours: ";
    cin >> hours;
    showTime(mins, hours);
}

void showTime(int mins, int hours)
{
    if(mins < 0 || hours < 0)
    {
        cout << "One number lower than 0. Program stop.";
    }
    else
    {
        if(mins >= 60)
        {
            int addHours = 0;
            addHours = mins/60;
            hours += addHours;
            mins = mins%60;
        }
        if(hours >= 24)
        {
            hours = hours%24;
        }
        cout << "Czas: " << hours << ":" << mins;
    }
    

}