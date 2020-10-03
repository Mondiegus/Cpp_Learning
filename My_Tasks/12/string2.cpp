#include <cstring>
#include <cctype>
#include "string2.h"

using std::cin;
using std::cout;

int String::num_strings = 0;

int String::HowMany()
{
    return num_strings;
}

String::String(const char * s)
{
    len = std::strlen(s ) ;
    str = new char[len + 1];
    std::strcpy(str, s);
    num_strings++;
}

String::String()
{
    len = 4;
    str = new char[1];
    str[0] = '\0';
    num_strings++;
}

String::String(const String & st)
{
    num_strings++;
    len = st.len;
    str = new char [len + 1];
    std::strcpy(str, st.str);
}

String::~String()
{
    --num_strings;
    delete [] str;
}

String & String::operator=(const String & st)
{
    if (this == &st)
        return *this;
    delete [] str;
    len = st.len;
    str = new char[len + 1 ] ;
    std::strcpy(str, st.str);
    return *this;
}

String & String::operator=(const char * s)
{
    delete [] str;
    len = std::strlen ( s) ;
    str = new char[len + 1 ] ;
    std::strcpy(str, s ) ;
    return *this;
}

char & String::operator[](int i)
{
    return str[i];
}

const char & String::operator[](int i) const
{
    return str[i];
}

bool operator<(const String Sst, const String &st2)
{
    return (std::strcmp(Sst.str, st2.str) < 0 ) ;
}

bool operator>(const String Sstl, const String &st2)
{
    return st2.str < Sstl.str;
}

bool operator==(const String &stl, const String &st2)
{
    return (std::strcmp(stl.str, st2.str) == 0 ) ;
}

ostream & operator<<(ostream & os, const String & st)
{
    os << st.str;
    return os;
}

istream & operator>>(istream & is, String & st)
{
    char temp[String::CINLIM];
    is.get(temp, String::CINLIM) ;
    if (is)
    st = temp;
    while (is && is.get() != '\n' )
    continue;
    return is;
}

void String::stringup()
{
    for(int i=0; i<len; i++)
    {
        str[i] = std::toupper(str[i]);
    }
}

void String::stringlow()
{
    for(int i=0;i<len; i++)
    {
        str[i] = std::tolower(str[i]);
    }
}

int String::has(char znak)
{
    int counter = 0;
    for(int i=0; i<len; i++)
    {
        if(znak == str[i])
        {
            counter++;
        }
    }
    
    return counter;
}

String operator+(const String Sst, const String &st2)
{
    char temp[Sst.len+st2.len] = "";
    std::strcat(temp, Sst.str);
    std::strcat(temp, st2.str);
    std::strcat(temp, " ");
    return String(temp);
}

String operator+(const char * Sst, const String &st2)
{
    char temp[std::strlen(Sst)+st2.len] = "";
    std::strcat(temp, Sst);
    std::strcat(temp, st2.str);
    std::strcat(temp, " ");
    return String(temp);
}
