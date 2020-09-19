#include <iostream>

using namespace std;

int main()
{
    char ch;
    cout << "put signs" << endl;
    while(cin.get(ch))
    {
        if(ch == '@')
            break;
        if(!isdigit(ch))
        {
            if(isupper(ch))
                cout << (char)tolower(ch);
            else
                cout << (char)toupper(ch);
        }
    }
     
}
