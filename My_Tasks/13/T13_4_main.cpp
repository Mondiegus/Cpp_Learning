#include "T13_4.h"

using namespace std;

class Port
(
    private :
    char * brand;
    char style [20]; // Na przykład lekko brązowe, rubinowe,
    // z najlepszego rocznika
    int bottles;
    public :
    Port (const char * or = "Brak", const char * st = "Brak", int b = 0) ;
    Port (const Port & p) ; // Konstruktor kopiujący
    virtual - P o r t o { delete [] brand; }
    Port & operator=(const Port & p) ;
    Port & operator+= (int b) ; //Dodaje b do bottles
    Port & operator-= (int b) ; // Odejmuje bodbottlesJeśli operacja tajest możliwa
    int BottleCount() const { return bottles; }
    virtual void Show() const;
    friend ostream i operator<<(ostreara & os, const Port 5 p) ;
};