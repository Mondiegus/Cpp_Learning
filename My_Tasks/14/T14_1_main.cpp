#include "T14_1.h"

int main(void)
{
    using std::cin;
    using std::cout;
    using std::string;
    using std::endl;

    string lab;
    int bootleNumber;
    int yrs;

    cout << "Podaj nazwe wina: ";
    getline(cin, lab);
    cout << "Podaj liczbe rocznikow: ";
    if(!(cin >> yrs))
    {
        cout << "Podales zla wartosc, YOLO, koncze dzialac!";
        exit(0);
    }
    
    Wine holding(lab, yrs);
    holding.GetBootles();
    holding.Show();

    const int YRS = 3;

    int y[YRS] = {1993, 1995, 1998};
    int b[YRS] = {48, 60, 72};
    Wine more("Gushing Grape Red", YRS, y, b);
    more.Show();
    cout << "Total number of bootles of " << more.Label() << " Wine: " << more.sum() << endl;
    cout << "End.";

    return 0;
} 