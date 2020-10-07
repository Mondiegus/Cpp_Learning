#include "T13_3.h"
#include <cstring>

baseClass::baseClass(const char * l, int r)
{
    label = new char[std::strlen(l) + 1 ] ;
    std::strcpy(label, l) ;
    rating = r;
}

baseClass::baseClass(const baseClass & rs)
{
    label = new char[std::strlen(rs . label) + 1];
    std::strcpy(label, rs.label);
    rating = rs.rating;
}

void baseClass::show()
{
    std::cout << "Etykietka: " << label << std::endl;
    std::cout << "Klasa: " << rating << std::endl;
}

baseClass & baseClass::operator=(const baseClass & rs)
{
    if (this == &rs)
        return *this;

    delete [] label;
    label = new char[std::strlen(rs.label) + 1];
    std::strcpy(label, rs.label);
    rating = rs.rating;
    return *this;
}

std::ostream & operator<<(std::ostream & os, const baseClass & rs)
{
    os << "Etykietka: " << rs.label << std::endl;
    os << "Klasa: " << rs.rating << std::endl;

    return os;
}
// Metody klasy lacksDMA
lacksDMA::lacksDMA(const char * c, const char * l, int r) : baseClass(l, r)
{
    std::strncpy(color, c, 39);
    color[39] = '\0';
}

lacksDMA::lacksDMA(const char * c, const baseDMA & rs) : baseClass(rs)
{
    std::strncpy(color, c, COL_LEN - 1 ) ;
    color[COL_LEN - 1] = '\0';
}
std::ostream & operator<<(std::ostream & os, const lacksDMA & rs)
{
    os << (const baseClass &) rs;
    os << "Kolor: " << rs.color << std::endl;
    return os;
}

// Metody klasy hasDMA
hasDMA:: hasDMA (const char * s, const char * l, int r) : baseClass(l, r)
{
    style = new char[std::strlen(s) + 1 ] ;
    std::strcpy(style, s ) ;
}

hasDMA::hasDMA(const char * s, const baseDMA & rs) : baseClass(rs)
{
    style = new char[std::strlen(s)+1];
    std::strcpy(style, s);
}

hasDMA::hasDMA(const hasDMA & hs) : baseClass(hs)
{
    style = new char[std::strlen(hs.style) + 1 ] ;
    std::strcpy (style, hs.style);
}

hasDMA::~hasDMA()
{
    delete [] style;
}

hasDMA & hasDMA::operator=(const baseClass & hs)
{
    if (this == &hs)
        return *this;

    baseClass::operator=(hs); //Kopiuje dane klasy bazowej
    // style = new char[std::strlen(hs.style) + 1];
    // std::strcpy(style, hs.style);
    return *this;
}

std::ostream & operator<<(std::ostream & os, const hasDMA & hs)
{
    os << (const baseClass &) hs;
    os << "Styl: " << hs.style << std::endl;
    return os;
}