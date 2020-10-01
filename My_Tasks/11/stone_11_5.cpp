#include <iostream>
#include <cmath>
#include "stone_11_5.h"

using std::cout;

Stonewt::~Stonewt()
{};

Stonewt::Stonewt(double lbs)
{
    stone = int (lbs) / Lbs_per_stn; // dzielenie całkowite
    pds_left = int (lbs) % Lbs_per_stn + lbs - int(lbs);
    pounds = lbs;
    type = stones;
}

// konstruuje obiekt Stonewt z liczby kamieni i funtów
Stonewt::Stonewt(int stn, double lbs, enum display_type typ)
{
    stone = stn;
    pds_left = lbs;
    pounds = stn * Lbs_per_stn + lbs;
    type = typ;
}

Stonewt::Stonewt() //konstruktor domyślny, zeruje obiekt
{
    stone = pounds = pds_left = 0;
}    

// void Stonewt::show_stn() const
// {
//     cout << stone << " kamieni, " << pds_left << " funtów\n";
// }
// //pokazuje masę w funtach
// void Stonewt::show_lbs() const
// {
//     cout << pounds << " funtów\n";
// }

void operator<<(ostream & os, const Stonewt & s1)
{
    os << s1.type << std::endl;
    switch(s1.type)
    {
        case stones:
            os << "Result is: " << s1.stone << " stones.\n";
        break;

        case pounds_runded:
            os << "Result is: " << round(s1.pounds) << " pounds.\n";
        break;

        case pounds_precise:
            os << "Result is: " << (float)s1.pounds << " pounds.\n";
        break;

        default:
            os << "Something goes wrong.\n";
        break;
    }
}

Stonewt Stonewt::operator+(const Stonewt & s1) const
{
    return Stonewt((stone + s1.stone), (pds_left + s1.pds_left));
}

Stonewt Stonewt::operator-(const Stonewt & s1) const
{
    return Stonewt(stone - s1.stone, pds_left - s1.pds_left);
}

Stonewt Stonewt::operator-() const
{
    return Stonewt(-stone, pds_left);
}

Stonewt Stonewt::operator*(const Stonewt & s1) const
{
    return Stonewt(stone * s1.stone, pds_left * s1.pds_left);
}
