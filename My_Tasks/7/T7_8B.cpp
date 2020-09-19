#include <iostream>
#include <array>
#include <string>

using namespace std;

const int Seasons = 4;
const char * Snames[Seasons] = {"Wiosna", "Lato", "Jesien", "Zima"};

struct data
{
    double expenses[Seasons];
};

void fill(struct data * expenses);
void show(struct data * expenses);

int main() {
    struct data expenses;
    fill(&expenses);
    show(&expenses);

    return 0;
}

void fill(struct data * expenses)
{
    for(int i = 0; i < Seasons; i++)
    {
        cout << "Podaj wydatki za okres >>" << Snames[i] << "<<: ";
        cin >> expenses->expenses[i];
    }
}

void show(struct data * expenses)
{   
    double total = 0.0;
    cout << "\nWYDATKI\n";

    for(int i = 0; i < Seasons; i++)
    {
        cout << Snames[i] << " " << expenses->expenses[i] << " zl" << endl;
        total += expenses->expenses[i];
    }
    cout << " lacznie wydatki roczne: " << total << " zl" << endl;
}
