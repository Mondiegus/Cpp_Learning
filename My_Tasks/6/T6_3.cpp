#include <iostream>

using namespace std;

int main()
{
    char ch;
    cout << "r) roslinozerca\t" << "p) pianista\n" << "d) drzewo\t" << "g) gra\n" << endl;
    cout << "Prosze podac litere r, p, t lub g: ";
    while(cin.get(ch))
    {
        cin.ignore();
        switch (ch)
        {
            case 'r':
                cout << "Panda jest roslinozerca.";
                return 0;
            case 'p':
                cout << "Fryderyk Chopin jest pianista.";
                return 0;
            case 'd':
                cout << "Drzewo to klon.";
                return 0;
            case 'g':
                cout << "ETS to gra.";
                return 0;
            default:
                cout << "Prosze podac litere r, p, t lub g: ";
                break;
        }
         
    }
}
