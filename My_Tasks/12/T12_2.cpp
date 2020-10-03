#include <iostream>
#include "string2.h"

using namespace std;

int main(void)
{
    String sl("i ucze sie C++.");
    String s2 = "Podaj swoje imie: ";
    String s3;
    cout << s2;
    cin >> s3;
    s2 = "Mam na imie " + s3;
    cout << s2 << ".\n";
    s2 = s2 + sl;
    s2.stringup(); 
    cout << "Ciag\n" << s2 << "\nzawiera " << s2.has('A')
    << " 'A'.\n";
    sl = "czerwona"; 
    String rgb[3] = { String(sl), String("zielona"), String("niebieska")};
    cout << "Poda] nazwe barwy podstawowej: ";
    String ans;
    bool success = false;
    while (cin >> ans)
    {
        ans.stringlow();
        for (int i = 0; i < 3; i++)
        {
            if (ans == rgb [i])
            {
                cout << "Prawidlowo !\n";
                success = true;
                break;
            }
        }
        if (success)
            break;
        else
            cout << "Sprobuj ponownie!\n" ;
    }
    
    cout << "zegnam\n";
    return 0;
}