#include <iostream>
#include <cmath>

using namespace std;

double celsiusToKelvin(double);

int main()
{
    double temperatureC = 0;
    cout << "Put temperature in celsius degrees: ";
    cin >> temperatureC;
    cout << temperatureC << " Celsius degrees is " << celsiusToKelvin(temperatureC) << " Kelvin degrees.";
}

double celsiusToKelvin(double celsius)
{
    double temperatureK = (celsius*1.8) + 32;
    temperatureK = round(temperatureK * 10)/10;
    return temperatureK;
}