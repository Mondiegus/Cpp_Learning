#include <iostream>
#include <exception>
#include <stdexcept>
#include <cmath>

class bad_hmean
{
    private:
        double vi;
        double v2;

    public:
        bad_hmean (double a = 0, double b = 0) : vi(a), v2(b) {}

        void mesg();
};

inline void bad_hmean::mesg()
{
    std::cout << "hmean(" << vi << ", " << v2 << " ) : " << "niepoprawne argumenty: a = -b\n";
}

class bad_gmean
{
    public:
        double vi;
        double v2;
        bad_gmean (double a = 0, double b = 0) : vi (a) , v2 (b) {}
        const char * mesg();

};

inline const char * bad_gmean::mesg()
{
    return "Argumenty funkcji gmeanO powinny być >= 0\n";
}