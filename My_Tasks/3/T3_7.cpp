#include <iostream>
#define KMTOMILES (62.14/100)
#define GALONTOLITRES (3.875)

using namespace std;

void convertFunc(double);

int main()
{
    double efficiency = 0, gasoline = 0, gasolineBackup = 0;
    cout << "How many litres per km are you using?" << endl;
    cin >> efficiency;

    if(efficiency >= 0)
        convertFunc(efficiency);
    else
        cout << "Wrong input! Try again." << endl;
}

void convertFunc(double efficiency)
{
    double kmOnOneLitre = 100 / efficiency;
    kmOnOneLitre *= KMTOMILES*GALONTOLITRES;
    
    cout << "You can ride " << kmOnOneLitre << " km on one galon." << endl;
}