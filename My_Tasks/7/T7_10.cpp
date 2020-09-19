#include <iostream>
#include <array>
#include <string>

using namespace std;

const int functionsNum = 3;

double calculate(double x, double y, double (*pf)(double, double));
double add(double x, double y);
double multiply(double x, double y);
double minuss(double x, double y);

int main() {
    double (*pf[functionsNum])(double, double)  = {add, multiply, minuss};
    double x = 0, y = 0;

    cout << "Podaj dwie liczby: ";
    while(cin >> x >> y)
    {   
        cin.ignore();
        for(int i = 0; i < functionsNum; i++)
        {
            cout << (i+1) << ". wynik: " << calculate(x,y, pf[i]) << endl;
        }
        cout << "Podaj dwie liczby: ";
    }

    return 0;
}

double add(double x, double y)
{
    return x+y;
}

double multiply(double x, double y)
{
    return x*y;
}

double minuss(double x, double y)
{
    return x-y;
}

double calculate(double x, double y, double (*pf)(double, double))
{
    return (*pf)(x,y);
}
