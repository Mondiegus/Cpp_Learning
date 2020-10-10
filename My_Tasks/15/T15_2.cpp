
#include "T15_2.h"
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
        catch (std::invalid_argument & bg)
        {
            cout << "a\n"; 
            cout << bg.what() << endl;
            cout << "Spróbuj ponownie.\n";
            continue;
        }
        catch (std::domain_error & hg)
        {
            cout << hg.what() << endl;
            // cout << "Użyte wartości: " << hg.vi << ", " << hg.v2 << endl;
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
        throw std::invalid_argument("Funkcja hmean. Nie mam pojecia co jest problemem bo jest bardzo pozno...") ;
    return 2.0 * a * b / (a + b) ;
}

double gmean(double a, double b)
{
    if (a < 0 || b < 0)
        throw std::domain_error("Funkcja gmean. Nie mam pojecia co jest problemem bo jest bardzo pozno...") ;
    return std::sqrt(a * b ) ;
} 