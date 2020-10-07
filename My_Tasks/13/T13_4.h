#include <iostream>
#include "cstring"

using namespace std;

class Port
{
    private:
        char * brand;
        char style [20]; // Na przykład lekko brązowe, rubinowe,
        // z najlepszego rocznika
        int bottles;
    public:
        Port(const char * br = "Brak", const char * st = "Brak", int b = 0) ;
        Port(const Port & p) ; // Konstruktor kopiujący
        virtual ~Port() { delete [] brand; }
        Port & operator=(const Port & p) ;
        Port & operator+=(int b) ; //Dodaje b do bottles
        Port & operator-=(int b) ; // Odejmuje bodbottlesJeśli operacja tajest możliwa
        int BottleCount() const { return bottles; }
        virtual void Show() const;
        friend ostream & operator<<(ostream & os, const Port & p) ;
};

class VintagePort : public Port //Styl zawsze "najlepszy rocznik"
{
    private:
        char * nickname; // Na przykład "Szlachetny", "Aksamitny"
        int year; //Rok winobrania
    public:
        VintagePort();
        VintagePort(const char * br, int b, const char * nn, int y) ;
        VintagePort(const VintagePort & vp);
        ~VintagePort() { delete [] nickname; }
        VintagePort & operator=(const VintagePort & vp);
        void Show() const;
        friend ostream & operator<<(ostream & os, const VintagePort & vp);
};