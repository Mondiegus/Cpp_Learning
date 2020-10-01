#include "complex0.h"

bool operator>>(istream & os, complex & obj)
{
    bool ret_val = false;
    std::cout << "Podaj czesc rzeczywista: ";
    if(os >> obj.a)
    {
        std::cout << "Podaj czesc urojona: ";
        if(os >> obj.b)
        {
            ret_val = true;
        }
    }  

    return ret_val;
}

ostream & operator<<(ostream & os, const complex & obj)
{
    os << obj.a << ", " << obj.b << "i" << std::endl;

    return os;
}

complex operator~(const complex & obj)
{
    return complex(obj.a, -obj.b);
}

complex complex::operator+(const complex & obj2) const
{
   return complex(a+obj2.a, b+obj2.b);
}  

complex complex::operator-(const complex & obj2) const
{
   return complex(a-obj2.a, b-obj2.b);
}

complex complex::operator*(const complex & obj2) const
{
   return complex(a*obj2.a, b*obj2.b);
}
 
complex operator*(int a, const complex & obj)
{
    return complex(a*obj.a, a*obj.b);
}
