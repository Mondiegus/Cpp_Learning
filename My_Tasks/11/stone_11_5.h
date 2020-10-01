#ifndef STONEWT_H_
#define STONEWT H
#include <iostream>

using std::ostream;
using std::iostream;
enum display_type {stones,pounds_runded, pounds_precise};

class Stonewt
{
    private:
        enum {Lbs_per_stn = 14}; // liczba funtów na kamień
        display_type type;
        int stone; //masa w całych kamieniach
        double pds_left; // reszta w funtach
        double pounds; // masa w funtach
    public:
        Stonewt(double lbs); // konstruktor dla funtów
        Stonewt(int stn, double lbs, enum display_type typ = stones) ;// konstruktor dla kamieni i funtów
        Stonewt() ; // konstruktor domyślny
        ~Stonewt();
        friend void operator<<(ostream & os, const Stonewt & s1);
        Stonewt operator+(const Stonewt & s1) const;
        Stonewt operator-(const Stonewt & s1) const;
        Stonewt operator-() const;
        Stonewt operator*(const Stonewt & s1) const;
        // void show_lbs() const; //wyświetla masą w funtach
        // void show_stn() const; //wyświetla masą w kamieniach
};
#endif