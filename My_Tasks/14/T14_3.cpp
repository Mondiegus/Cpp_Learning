#include "T14_3.h"

void Worker::Data() const
{
    cout << "Imię i nazwisko: " << fullname << endl;
    cout << "Numer identyfikacyjny: " << id << endl;
}

void Worker::Get()
{
    getline(cin, fullname);
    cout << "Podaj numer identyfikacyjny: ";
    cin >> id;
}
