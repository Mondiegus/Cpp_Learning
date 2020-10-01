#ifndef COMPLEX_H_
#define COMPLEX H
#include <iostream>

using std::ostream;
using std::istream;
using std::iostream;

class complex
{
    private:
        double a; 
        double b; 
    public:
        complex(){};
        complex(double a1, double b1) {a = a1; b = b1;};

        friend bool operator>>(istream & os, complex & obj);
        friend ostream & operator<<(ostream & os, const complex & obj);
        friend complex operator~(const complex & obj);
        complex operator+(const complex & obj2) const;
        complex operator-(const complex & obj2) const;
        complex operator*(const complex & obj2) const;
        friend complex operator*(int a, const complex & obj);
};
#endif