#include <iostream>
#include <cstring>
#include "T12_3.h"

Stock::Stock ()
{
    company = new char[strlen("brak nazwy")+1];
    std::strcpy(company, "brak nazwy");
    
    shares = 0;
    share_val = 0.0;
    total_val = 0.0;
}

Stock:: Stock (const char * co, int n, double pr)
{
    company = new char[strlen(co)+1];
    std::strcpy(company, co);

    if (n < 0)
    {
        std::cerr << "Liczba udziałów nie może być ujemna; "
            << "ustalam liczbę udziałów w "<< company << " na 0.\n";
        shares = 0;
    }
    else
        shares = n;

    share_val = pr;
    set_tot() ;
}

void Stock::buy(int num, double price)
{
    if (num < 0)
    {
        std::cerr << "Liczba nabywanych udziałów nie może być ujemna."
        << "Transakcja przerwana.\n";
    }
    else
    {
        shares += num;
        share_val = price;
        set_tot();
    }
}

void Stock::sell(int num, double price)
{
    using std::cerr;
    if (num > 0)
    {
        cerr << "Liczba sprzedawanych udziałów nie może być ujemna. "
        << "Transakcja przerwana.\n" ;
    }
    else if (num > shares)
    {
        cerr << "Nie możesz sprzedać więcej udziałów, niż posiadasz! "
        << "Transakcja przerwana.\n";
    }
    else
    {
        shares -= num;
        share_val = price;
        set_tot();
    }
}

void Stock::update(double price)
{
    share_val = price;
    set_tot();
}

ostream & operator<<(ostream & os, Stock & s)
{
    using std::cout;
    using std::endl;
    os << "Spółka: " << s.company
    << " Liczba udziałów: " << s.shares << std::endl
    << " Cena udziału: " << s.share_val << " zł"
    << " Łączna wartość udziałów: " << s.total_val << " zł"<< std::endl;

    return os;
}

const Stock & Stock::topval(const Stock & s) const
{
    if (s.total_val > total_val)
        return s;
    else
        return*this ;
}