#include <iostream>

using namespace std;

const int strSize = 50;
const int elArray = 3;

struct zpdw {
    char name[strSize];
    char position[strSize];
    char nick[strSize];
    int preferences;
};

void showMenu(zpdw* );

int main()
{
    struct zpdw zpdw[elArray] = {
        {"Jan", "Banan", "Admiral Torpeda", 2},
        {"Tadeusz", "Ogorek", "Szeregowy Glus", 1},
        {"Kamil", "Lufa", "Kapitan Bomba", 3}
    };

    showMenu(zpdw);
    return 0;
}

void showMenu(zpdw* zpdw)
{
    char ch;
    cout << "a. lista wg imion\t" << "b. lista wg stanowisk\n" << "c. lista wg pseudonimow\t" << \
        "d. lista wg preferencji\n" << "q. koniec" << endl;
    cout << "Prosze podac litere a, b, c lub d: ";

    while(cin.get(ch).ignore())
    {
        switch (ch)
        {
            case 'a':
                for(int i=0; i<elArray;++i)
                {
                    cout << zpdw[i].name << endl;
                }
            return;

            case 'b':
                for(int i=0; i<elArray;++i)
                {
                    cout << zpdw[i].nick << endl;
                }
            return;

            case 'c':
                for(int i=0; i<elArray;++i)
                {
                    cout << zpdw[i].position << endl;
                }
            return;

            case 'd':
                for(int i=0; i<elArray;++i)
                {
                    switch(zpdw[i].preferences)
                    {
                        case 1:
                            cout << zpdw[i].name << endl;
                        break;

                        case 2:
                            cout << zpdw[i].nick << endl;
                        break;

                        case 3:
                            cout << zpdw[i].position << endl;
                        break;
                    }
                }
            return;

            case 'q':
                cout << "See Yaaa!!!";
            return;

            default:
                cout << "Prosze podac litere a, b, c lub d: ";
            break;
        }
    }
}
