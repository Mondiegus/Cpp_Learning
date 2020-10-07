#ifndef T13_1
#define T13_1

#include "cstring"
#include <iostream>

class Cd 
{
    private:
        char performers[50];
        char label[20];
        int selections;
        double playtime;

    public:
        Cd(const char * s1, const char * s2, int n, double x);
        Cd(const Cd & d);
        Cd() {};
        virtual ~Cd() {};
        virtual void Report() const;
        virtual Cd & operator=(const Cd & d);
};

class Classic : public Cd 
{
    private:
        char * trackName;

    public:
        Classic() {};
        Classic(const char * s1, const char * s2, const char * trackNames, int n, double x);
        // : Cd(s1, s2, n, x);
        Classic(const Classic & d);
        virtual ~Classic() { delete [] trackName; };
        virtual void Report() const;
        virtual Classic & operator=(const Classic & d);

};

#endif