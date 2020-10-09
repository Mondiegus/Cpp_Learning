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


class Wine : private PairArray, std::string
{
    private:
        int numberOfClass;

    public:
        Wine(const char * l, int y, const int yr[], const int bot[]);
        Wine(std::string l, int y, const int yr[], const int bot[]);
        Wine(const char * l, int y): std::string(l), numberOfClass(y), PairArray(ArrayInt(y),ArrayInt(y)) {};
        Wine(std::string l, int y): std::string(l), numberOfClass(y),PairArray(ArrayInt(y),ArrayInt(y)) {};
        bool GetBootles();
        std::string & Label();
        int sum();
        void Show();

};
#endif