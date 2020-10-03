#ifndef CLASS_H_
#define CLASS_H_

#include <iostream>

class Cow 
{
    private:
        char name[20];
        char * hobby;
        double weight;

    public:
        Cow();
        Cow(const char * m, const char * ho, double wt);
        Cow(const Cow &c);
        ~Cow();
        Cow & operator=(const Cow & c);
        void ShowCow() const;
};

#endif