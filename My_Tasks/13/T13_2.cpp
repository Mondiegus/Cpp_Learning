#include "T13_2.h"

using namespace std;

Cd::Cd() 
{
    performers = new char[strlen("Unknown") + 1];
    strcpy(performers, "Unknown");
    label = new char(strlen("Unknown") + 1);
    strcpy(label, "Unknown");
}

Cd::Cd(const char * s1, const char * s2, int n, double x)
{
    performers = new char(strlen(s1) + 1);
    strcpy(performers, s1);
    label = new char(strlen(s2) + 1);
    strcpy(label, s2);
    selections = n;
    playtime = x;

}

Cd::Cd(const Cd & d)
{
    performers = new char(strlen(d.performers) + 1);
    strcpy(performers, d.performers);
    label = new char(strlen(d.label) + 1);
    strcpy(label, d.label);
    selections = d.selections;
    playtime = d.playtime;
}

void Cd::Report() const
{
    cout << "Performers are: " << performers << endl;
    cout << "Label is: "<< label << endl;
    cout << "selections = "<< selections << endl;
    cout << "playtime = "<< playtime << endl ;

}

Cd & Cd::operator=(const Cd & d)
{
    if (this == &d)
        return *this;

    delete [] performers, label;

    performers = new char(strlen(d.performers) + 1);
    strcpy(performers, d.performers);
    label = new char(strlen(d.label) + 1);
    strcpy(label, d.label);
    selections = d.selections;
    playtime = d.playtime;

    return *this;
}

Classic::Classic(const char * s1, const char * s2, const char * trackNames, int n, double x) : Cd(s1, s2, n, x)
{
    trackName = new char(strlen(trackNames) + 1);
    strcpy(trackName, trackNames);
}

Classic::Classic(const Classic & d) : Cd(d)
{
    trackName = new char(strlen(d.trackName) + 1);
    strcpy(trackName, d.trackName);
}

Classic::Classic() : Cd()
{
    trackName = new char(strlen("Unknown") + 1);
    strcpy(trackName, "Unknown");
}

Classic & Classic::operator=(const Classic & d)
{
    if(this == &d)
        return *this;

    Cd::operator=(d);
    delete [] trackName;
    trackName = d.trackName;

    return *this;
}

void Classic::Report() const
{
    Cd::Report();
    cout << "trackName: " << trackName << endl;
}
