#include <iostream>

using namespace std;

void convertFunc(double, double, double);

int main()
{
    double distance = 0, gasoline = 0, gasolineBackup = 0;
    cout << "How many miles have you already traveled?"<< endl;
    cin >> distance;
    cout << "How many gallons were used?"<< endl;
    cin >> gasoline;
    cout << "How many gallons do you have?"<< endl;
    cin >> gasolineBackup;

    if( distance >= 0 && gasoline >= 0 && gasolineBackup >= 0)
        convertFunc(distance, gasoline, gasolineBackup);
    else
        cout << "Wrong input! Try again." << endl;
}

void convertFunc(double distance, double gasoline, double gasolineBackup)
{
    double efficiency = distance /  gasoline;
    
    cout << "You can ride " << (efficiency*gasolineBackup) << " km more." << endl;
}