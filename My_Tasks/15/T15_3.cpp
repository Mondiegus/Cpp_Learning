
#include "T15_3.h"
#include <stdexcept>

// Prototypy funkcji
double hmean(double a, double b);
double gmean(double a, double b);


int main()
{
    using std::cout;
    using std::cin;
    using std::endl;

    double x, y, z;

    cout << "Podaj dwie liczby: ";

    while (cin >> x >> y)
    {
        try {
            z = hmean(x, y ) ;
            cout << "Średnia harmoniczna liczb " << x << " i " << y << " wynosi " << z << endl;
            cout << "Średnia geometryczna liczb " << x << " i " << y << " wynosi " << gmean(x, y) << endl;
            cout << "Podaj kolejną parę liczb <w aby wyjść>: " ;
        } 

        catch (bad_base & hg)
        {
            cout << hg.what() << endl;
            cout << "Użyte wartości: " << hg.get_vi() << ", " << hg.get_v2() << endl;
            cout << "Niestety, to koniec zabawy.\n";
            break;
        }
    }
    cout << "Koniec\n";

    return 0;
}

double hmean(double a, double b)
{
    if (a == -b)
        throw bad_hmean("Funkcja hmean. Nie mam pojecia co jest problemem bo jest bardzo pozno...", a, b ) ;
    return 2.0 * a * b / (a + b) ;
}

double gmean(double a, double b)
{
    if (a < 0 || b < 0)
        throw bad_gmean("\nFunkcja gmean. Nie mam pojecia co jest problemem bo jest bardzo pozno...", a, b ) ;
    return std::sqrt(a * b ) ;
} 