#include <iostream>
#include <cstring>

using namespace std;

struct stringy 
{
    char * str;
    int ct;
};

void set(stringy & beany, char * text);
void show(const stringy & beany, int repeat = 1);
void show(const char * text, int repeat = 1);

int main()
{
    stringy beany;
    char testing[] = "Rzeczywistosc to juz nie to, co kiedys";

    set(beany, testing);
    show(beany);
    show(beany,2);
    testing[0] = 'D';
    testing[1] = 'u';
    show(testing);
    show(testing, 3);
    show("gotowe");

    return 0;
}

void set(stringy & beany, char * text)
{
    beany.ct = strlen(text);
    char * strr = new char[beany.ct];
    strr = text;
    strcpy(beany.str, text);
    delete [] strr;
}

void show(const stringy & beany, int repeat)
{
    for(int i = 0; i < repeat; i++)
        cout << beany.str << endl;;
}

void show(const char * text, int repeat)
{
    for(int i = 0; i < repeat; i++)
        cout << text << endl;;
}
