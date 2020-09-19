#include <iostream>

using namespace std;

int main()
{
    double nauticalDist, metersDist;
    cout << "Put a distance in nautical miles:" << endl;
    cin >> nauticalDist;
    metersDist = nauticalDist * 1852;
    cout << "Distance in nautical miles: " << nauticalDist << " is equal to " << metersDist << " meters.";
}