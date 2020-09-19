#include <iostream>

#define SECSTOMINS  60
#define MINSTODEG  60

using namespace std;

double convertFunc(int, int, int);

int main()
{
    int degrees = 0, mins = 0, secs = 0;
    cout << "Put location in degreees, mins and secs." << endl;
    cout << "Put degrees." << endl;
    cin >> degrees;
    cout << "Put mins." << endl;
    cin >> mins;
    cout << "Put secs." << endl;
    cin >> secs;
    if (double result = convertFunc(degrees, mins, secs))
    {
        cout << degrees << " degrees, " << mins << " minutes, " << secs << " seconds = " << result;
    }
}

double convertFunc(int degrees, int mins, int secs)
{
    double result = 0;
    if(degrees > 0 && mins > 0 && secs > 0)
    {
        if(secs >= 60)
        {
            mins += (secs / SECSTOMINS);
            secs %= SECSTOMINS;
        }
        if(mins >= 60)
        {
            degrees += (mins / MINSTODEG);
            mins %= MINSTODEG;
        }
        result = ((((double)secs / SECSTOMINS) + (double)mins) / MINSTODEG) + degrees;
    }
    else
    {
        cout << "Wrong data!";
        result = 0;
    }
    
    return result;
}