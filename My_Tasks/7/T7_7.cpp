#include <iostream>

using namespace std;

const int Max = 10;

void fill_array(double ar[], int limit, double * size);
void showArray(const double ar[], double * n);
void revalue(double r, double ar[], double * n);

int main()
{
    double properties[Max];
    double * size = new double;

    fill_array(properties, Max, size);
    showArray(properties, size);
    if(size > 0)
    {
        cout << "Podaj czynnik zmiany wartosci: ";
        double factor;
        while(!(cin >> factor))
        {
            cin.clear();
            while(cin.get() != '\n')
                continue;

            cout << "Niepoprawna wartosc; podaj liczbe.";
        }
        revalue(factor, properties, size);
        showArray(properties, size);
    }
    cout << "Gotowe\n";
    cin.get();
    cin.get();

    delete size;

    return 0;
}

void fill_array(double ar[], int limit, double * size)
{
    double temp = 0;
    int i = 0;

    for(i=0; i<limit;i++)
    {
        cout << "Podaj wartosc nr" << (i+1) <<": ";
        cin >> temp;
        if(!cin)
        {
            cin.clear();
            while(cin.get() != '\n')
                continue;
            cout << "Bledne dane, wprowadzanie danych przerwane.\n";
            break;
        }
        else if (temp <0)
            break;
        ar[i] = temp;
    }
    cout << i << endl;
    *size = ar[i];
}

void showArray(const double ar[], double * n)
{
    int i = 0;
    while(ar[i] != *n)
    {

        cout << "Nieruchomosc nr "<< i+1 << ": ";
        cout << ar[i] << endl;
        i++;
    }
}

void revalue(double r, double ar[], double * n)
{
    int i = 0;
    while(ar[i] != *n)
    {
        ar[i] *= r;
        i++;
    }
}
