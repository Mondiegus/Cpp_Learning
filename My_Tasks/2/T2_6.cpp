#include <iostream>
#include <cmath>

using namespace std;

int lightYearsToAstUnits(double);

int main()
{
    double lightYears = 0;
    cout << "Put number of light years: ";
    cin >> lightYears;
    cout << lightYears << " light years is " << lightYearsToAstUnits(lightYears) << " atronimic units.";
}

int lightYearsToAstUnits(double lightYears)
{
    double astronomicUnits = lightYears*63240;
    astronomicUnits = int(astronomicUnits+0.5);
    return astronomicUnits;
}