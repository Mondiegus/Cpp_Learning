#include <iostream>
#include "T13_3.h"

const int CLIENTS = 4;
const int LEN = 100;

int main ()
{
    using std::cin;
    using std::cout;
    using std::endl;

    baseClass * p_clients[CLIENTS];
    int i ;
    for (i = 0; i < CLIENTS; i++)
    {
        char temp[LEN];
        char temp2[LEN];
        int tempnum;
        int tempnum2;
        char kind;

        cout << "Podaj tekst: ";
        cin.getline(temp, LEN);
        cout << "Podaj numer: ";
        cin >> tempnum;
        cout << "Wpisz 1 dla baseDMA, 2 dla lacksDMA lub 3 dla hasDMA: ";
        while (cin >> kind && (kind != '2' && kind != '1' && kind != '3'))
            cout << "Wpisz 1, 2 lub 3: ";
        cout << "Kind = " << kind << endl;
        if (kind == '1')
        {
            p_clients[i] = new baseDMA(temp, tempnum);
            cin.ignore();
        }
        else if (kind == '2')
        {
            cin.ignore();
            // cout << "Podaj drugi numer: ";
            // cin >> tempnum2;
            cout << "Podaj drugi tekst: ";
            cin.getline(temp2, LEN);
            p_clients[i] = new lacksDMA(temp, temp2, tempnum);
        }
        else
        {
            cin.ignore();
            // cout << "Podaj drugi numer: ";
            // cin >> tempnum2;
            cout << "Podaj drugi tekst: ";
            cin.getline(temp2, LEN);
            p_clients[i] = new hasDMA(temp, temp2, tempnum);
        }
    }
    cout << "END!!!" << endl;
    for (i = 0; i < CLIENTS; i++)
    {
        p_clients[i]->show();
        cout << endl;
    }
    for (i = 0; i < CLIENTS; i++)
        delete p_clients[i] ; //Zwalnia pamięć
    
    cout << "Gotowe.\n";

    return 0;
}