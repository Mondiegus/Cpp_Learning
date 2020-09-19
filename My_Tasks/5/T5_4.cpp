#include <iostream>
#include <array>

using namespace std;

const int ArSize = 100;

int main()
{
    double dafne = 100, cleo = 100, dafnePerc = 0.10, cleoPerc = 0.05;
    int years = 0;
    cout << "At beginning Dafne have " << dafne << " and Cleo have " << cleo << "." << endl;

    do
    {
        dafne += (dafnePerc*100);
        cleo += cleo * cleoPerc;
        years++;
        cout << "At " << years << ". year, Dafne have " << dafne << " and Cleo have " << cleo << "." << endl;
    } while(cleo<dafne);
}
