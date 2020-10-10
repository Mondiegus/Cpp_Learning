// use_sales.cpp — wyjątki zagnieżdżone
#include <iostream>
#include "T15_4.h"

int main()
{
    using std::cout;
    using std::cin;
    using std::endl;

    double valsl [12] =
            {
                1220, 1100, 1122, 2212, 1232, 2334,
                2884, 2393, 3302, 2922, 3002, 3544
            };
    double vals2 [12] =
            {
                12, 11, 22, 21, 32, 34,
                28, 29, 33, 29, 32, 25
            };
            
    Sales salesl(2004, valsl, 12);
    LabeledSales sales2 ("Blogstar", 2005, vals2, 12);
    cout << "Pierwszy blok try:\n";
    try
    {
        int i ;
        cout << "Rok = " << salesl.Year() << endl;
        for (i = 0; i < 12; ++i)
        {
            cout << salesl[i] << "  ";
            if (i % 6 == 5)
                cout << endl;
        }
        cout << "Rok = " << sales2.Year() << endl;
        cout << "Etykieta = " << sales2.Label() << endl;
        for (i = 0; i <= 12; ++i)
        {
            cout << sales2[i] << "  ";
            if (i % 6 == 5)
                cout << endl;
        }
        cout << "Koniec pierwszego bloku try.\n";
    }
    catch(Sales::bad_index & bad)
    {
        cout << bad.what();        
        if(typeid(LabeledSales::nbad_index) == typeid(bad))
        {
            LabeledSales::nbad_index & badd = dynamic_cast<LabeledSales::nbad_index &>(bad);
            cout << "Firma: " << badd.label_val() << endl;
        }
        cout << "Niepoprawny indeks: " << bad.bi_val() << endl;
    }
    cout << "\nKolejny blok try:\n";
    try
    {
        sales2[20] = 37.5;
        salesl[20] = 23345;
        cout << "Koniec drugiego bloku try.\n";
    }
    catch(Sales::bad_index & bad)
    {
        cout << bad.what();        
        if(typeid(LabeledSales::nbad_index) == typeid(bad))
        {
            LabeledSales::nbad_index & badd = dynamic_cast<LabeledSales::nbad_index &>(bad);
            cout << "Firma: " << badd.label_val() << endl;
        }
        cout << "Niepoprawny indeks: " << bad.bi_val() << endl;
    }
    cout << "Koniec";

    return 0;
}