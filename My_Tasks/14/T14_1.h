#ifndef WINECLASS_H_
#define WINECLASS_H_
#include <string>
#include <iostream>
#include "valarray"

template <class Tl, class T2>
class Pair;

typedef std::valarray<int> ArrayInt;
typedef Pair<ArrayInt, ArrayInt> PairArray;

template <class Tl, class T2>
class Pair
{
    private:
        Tl a;
        T2 b;
    public:
        Pair(const Tl & aval, const T2 & bval) : a (aval), b(bval) {};
        Pair() {};
        Tl & first();
        T2 & second();
        Tl first() const {return a;}
        T2 second() const {return b;}
};
 
template<class Tl, class T2>
Tl & Pair<Tl, T2>::first()
{
    return a;
}
template<class Tl, class T2>
T2 & Pair<Tl,T2>::second( )
{
    return b;
}


class Wine
{
    private:
        std::string name;
        PairArray a1;
        int numberOfClass;

    public:
        Wine(const char * l, int y, const int yr[], const int bot[]);
        Wine(std::string l, int y, const int yr[], const int bot[]);
        Wine(const char * l, int y): name(l), numberOfClass(y) {a1.first().resize(numberOfClass); a1.second().resize(numberOfClass);};
        Wine(std::string l, int y): name(l), numberOfClass(y) {a1.first().resize(numberOfClass); a1.second().resize(numberOfClass);};
        bool GetBootles();
        std::string & Label();
        int sum();
        void Show();

};
#endif