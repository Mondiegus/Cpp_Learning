#include <iostream>
#include <new> //plik nagłówkowy miejscowej odmiany new
const int BUF = 512;
const int N = 5;
char buffer[BUF]; //obszar pamięci do realizacji przydziałów
int main()
{
    using namespace std;
    double *pdl, *pd2;
    int i ;
    cout << "Wywołanie new zwykłego i miejscowego:\n";
    pdl = new double [N];
    pd2 = new (buffer) double[N];
    for (i = 0; i < N; i++)
        pd2[i] = pdl[i] = 1000 + 20.0 * i;
    cout << "Adresy buforów:\n" << " sterta: " << pdl << " pamięć statyczna: " << (void*) buffer << endl;
    cout << "Zawartość bufora:\n";
    for (i = 0; i < N; i++)
    {
        cout << pdl[i] << " pod adresem " << &pdl[i] << "; ";
        cout << pd2[i] << " pod adresem " << &pd2[i] << endl;
        cout << "\nDrugie wywołanie zwykłego i miejscowego new:\n";
        double *pd3, *pd4 ;
        pd3 = new double[N] ;
        pd4 = new (buffer) double[N];
        for (i = 0; i < N; i++)
        pd4[i] = pd3[i] = 1000 + 20.0 * i;
        cout << "Zawartość bufora:\n";
        for (i = 0; i < N; i++)
        {
        cout << pd3[i] << " pod adresem " << &pd3[i] << "; ";
        cout << pd4[i] << " pod adresem " << &pd4[i] << endl;
        }
    }
    cout << "\nTrzecie wywołanie zwykłego i miejscowego new:\n";
    delete [] pdl;
    pdl = new double[N] ;
    pd2 = new (buffer + N * sizeof(double)) double[N] ;
    for (i = 0; i < N; i++)
        pd2[i] = pdl[i] = 1000 + 20.0 * i;
    cout << "Zawartość bufora:\n";
    for (i = 0; i < N; i++ )
    {
        cout << pdl[i] << " pod adresem " << &pdl[i] << "; ";
        cout << pd2[i] << " pod adresem " << &pd2[i] << endl;
    }
    delete [] pdl;
    delete [] pd2;
    return 0;
}