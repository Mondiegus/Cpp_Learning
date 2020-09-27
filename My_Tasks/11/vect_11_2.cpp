#include "vect_11_2.h"
#include <cmath>

using std::sqrt;
using std::sin;
using std::cos;
using std::atan;
using std::atan2;
using std::cout;

namespace VECTOR
{
    const double Rad_to_deg = 45.0 / atan(1.0);

    double Vector::set_mag()
    {
        return (sqrt(x * x + y * y));
    }

    double Vector::set_ang()
    {
        if(x == 0.0 && y == 0.0)
            return 0.0;
        else 
            return (atan2(x,y));
    }

    void Vector::set_x(double n1, double n2)
    {
        x = n1 * cos(n2/Rad_to_deg);
    }

    void Vector::set_y(double n1, double n2)
    {
        y = n1 * sin(n2/Rad_to_deg);
    }

    Vector::Vector()
    {
        x = y = 0.0;
        mode = RECT;
    }

    Vector::Vector(double n1, double n2, Mode form)
    {
        mode = form;
        if(form == RECT)
        {
            x = n1;
            y = n2;
            set_mag();
            set_ang();
        }
        else if(form == POL)
        {
            set_x(n1, n2);
            set_y(n1, n2);
        }
        else
        {
            cout << "Wrong value of thirth argument Vector() -- ";
            cout << " put default values to vector \n";
            x = y = 0.0;
            mode = RECT;
        }
    }
    
    void Vector::reset(double n1, double n2, Mode form)
    {
        mode = form;
        if(form == RECT)
        {
            x = n1;
            y = n2;
            set_mag();
            set_ang();
        }
        else if(form == POL)
        {
            set_x(n1, n2);
            set_y(n1, n2);
        }
        else
        {
            cout << "Wrong value of thirth argument set() -- ";
            cout << " put default values to vector \n";
            x = y = 0.0;
            mode = RECT;
        }
    }
    
    Vector::~Vector()
    {

    }

    void Vector::polar_mode()
    {
        mode = POL;
    }

    void Vector::rect_mode()
    {
        mode = RECT;
    }

    Vector Vector::operator+(const Vector & b) const
    {
        return Vector(x+b.x, y+b.y);
    }

    Vector Vector::operator-(const Vector & b) const
    {
        return Vector(x-b.x, y-b.y);
    }

    Vector Vector::operator-() const
    {
        return Vector(-x, -y);

    }
    Vector Vector::operator*(double n) const
    {
        return Vector(x*n, y*n);
    }
    
    Vector operator*(double n, const Vector & a)
    {
        return n * a;
    }

    std::ostream & operator<<(std::ostream & os, Vector & v)
    {
        if(v.mode == Vector::RECT)
        {
            os << "(x,y) = (" << v.x << ", " << v.y << ")";
        }
        else if(v.mode == Vector::POL)
        {
            os << "(m,a) = (" << v.set_mag() << ", " << v.set_ang() * Rad_to_deg << ")";
        }
        else 
        {
            os << "Wrong representation type vector object";
        }

        return os;
    }
}