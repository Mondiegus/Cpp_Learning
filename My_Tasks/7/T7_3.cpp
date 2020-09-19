#include <iostream>

using namespace std;

struct Pudlo
{
    char producent[40];
    float wysokosc;
    float szerokosc;
    float dlugosc;
    float objetosc;
};

void showValues(Pudlo);
double calcVolume(Pudlo*);

int main()
{
    Pudlo pudlo = {"aaa",1,2,3,4};

    showValues(pudlo);
    calcVolume(&pudlo);
    
    return 0;
}

void showValues(Pudlo pudlo)
{
    cout << pudlo.dlugosc << " " << pudlo.objetosc << " " << pudlo.producent << " " << pudlo.szerokosc << pudlo.wysokosc << endl;
}

double calcVolume(Pudlo * pudlo)
{
    return (double)pudlo->dlugosc*(double)pudlo->szerokosc*(double)pudlo->wysokosc;
}