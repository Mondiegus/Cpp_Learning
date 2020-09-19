#include <iostream>
#include <cstring>

using namespace std;

int main()
{
    setlocale( LC_ALL, "PL-pl" );

    int Cities = 5;
    char * cities[Cities];

    {
        char names[5][25] =
        {
            "Jelenia Góra",
            "Zielona Góra",
            "Stara Góra",
            "Górki" ,
            "Wilga Górna"
        };

        for(int i = 0; i < 5; i++)
        {
            cities[i] = new char[strlen(names[i]) +1];
            strcpy(cities[i], names[i]);
        }
    }
    
    for(int city = 0; city < Cities; city++)
        cout << cities[city] << " " << endl;
        
    for(int city = 0; city < Cities; city++)
        delete cities[city];
}
