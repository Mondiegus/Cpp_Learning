#include <iostream>
#include <string>
#include <cstring>

using namespace std;

void makeUpper(string &);

int main()
{
    string ch;

    cout << "Put some text or place q to exit" << endl;
    while(getline(cin, ch) && ch != "q")
    {
        makeUpper(ch);
        cout << ch << endl;
        cout << "Put some text or place q to exit" << endl;

    }

}

void makeUpper(string & ch)
{
    for(int i = 0; i < ch.length(); i++)
    {
        ch[i] = toupper(ch[i]);
    }
}
