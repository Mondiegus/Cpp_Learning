#include <iostream>
#define FEETTOINCHES  12
#define HEIGHTTOMETERS  0.0254
#define POUNDSTOKG  2.2

using namespace std;

double convertFunc(double, double, double);
const double metersToInch = 30.48;
int main()
{
    double feets = 0, inches = 0, pounds = 0;
    cout << "Put your height in feets." << endl;
    cin >> feets;
    cout << "Put your height in inches." << endl;
    cin >> inches;
    cout << "Put your weight in pounds." << endl;
    cin >> pounds;
    cout << "Your BMI is: " << convertFunc(feets, inches, pounds);
}

double convertFunc(double feets, double inches, double pounds)
{
    double height = ((FEETTOINCHES * feets)  + inches) * HEIGHTTOMETERS;
    double weight = pounds / POUNDSTOKG;

    return (weight/(height*height));
}