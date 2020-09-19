#include <iostream>
#include <array>
#include <string>

using namespace std;
const int Seasons = 4;
const char * Snames[Seasons] = {"Wiosna", "Lato", "Jesien", "Zima"};

void fill(double pa[]);
void show(double da[]);

int main() {
    double expenses[Seasons];
    fill(expenses);
    show(expenses);

    return 0;
}

void fill(double pa[])
{
    for(int i = 0; i < Seasons; i++)
    {
        cout << "Podaj wydatki za okres >>" << Snames[i] << "<<: ";
        cin >> pa[i];
    }
}

void show(double da[])
{   
    double total = 0.0;
    cout << "\nWYDATKI\n";

    for(int i = 0; i < Seasons; i++)
    {
        cout << Snames[i] << " " << da[i] << " zl" << endl;
        total += da[i];
    }
    cout << " lacznie wydatki roczne: " << total << " zl" << endl;
}
