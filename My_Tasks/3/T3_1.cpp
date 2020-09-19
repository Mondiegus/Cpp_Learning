#include <iostream>

using namespace std;

void convertFunc(int);
const double cmetersToInch = 2.54;
int main()
{
    int heightCm = 0;
    cout << "Put your height in cm." << endl;
    cin >> heightCm;
    convertFunc(heightCm);
}

void convertFunc(int heightCm)
{
    double inches =  0;
    double feets = 0;
    if(heightCm > 0)
    {
        inches = (heightCm / cmetersToInch);
        feets = (int)inches/12;
        inches -= feets*12;
    }
    cout << "Inches: " << inches << " Feets: " << feets;
}