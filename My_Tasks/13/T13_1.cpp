#include "T13_1.h"

using namespace std;

Cd::Cd(const char * s1, const char * s2, int n, double x)
{
    strcpy(performers, s1);
    strcpy(label, s2);
    selections = n;
    playtime = x;

}

Cd::Cd(const Cd & d)
{
    strcpy(performers, d.performers);
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
    strcpy(performers, d.performers);
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
// 
Classic::Classic(const Classic & d) : Cd(d)
{
    trackName = new char(strlen(d.trackName) + 1);
    strcpy(trackName, d.trackName);
}

Classic & Classic::Classic::operator=(const Classic & d)
{
    Cd::operator=(d);
    trackName = d.trackName;

    return *this;
}

void Classic::Report() const
{
    Cd::Report();
    cout << "trackName: " << trackName << endl;
}