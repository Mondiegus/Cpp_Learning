#include "T10_2.h"
#include <cstring>

Person::Person(const std::string & ln, const char * fn)
{
    using namespace std;

    lname = ln;
    strcpy(fname, fn);
}


void Person::Show() const
{
    using namespace std;

    cout << "Name: " << lname << endl;
    cout << "Dname: " << fname << endl;
}

void Person::FormalShow() const
{
    using namespace std;

    cout << "Dname: " << fname << endl;
    cout << "Name: " << lname << endl;
}
