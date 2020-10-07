#ifndef T13_2
#define T13_2

#include "cstring"
#include <iostream>

class Cd 
{
    private:
        char * performers;
        char * label;
        int selections;
        double playtime;

    public:
        Cd();
        Cd(const char * s1, const char * s2, int n, double x);
        Cd(const Cd & d);
        virtual ~Cd() {delete [] performers, label;};
        virtual void Report() const;
        Cd & operator=(const Cd & d);
};

class Classic : public Cd 
{
    private:
        char * trackName;

    public:
        Classic();
        Classic(const char * s1, const char * s2, const char * trackNames, int n, double x);
        // : Cd(s1, s2, n, x);
        Classic(const Classic & d);
        virtual ~Classic() { delete [] trackName; };
        virtual void Report() const;
        Classic & operator=(const Classic & d);

};

#endif