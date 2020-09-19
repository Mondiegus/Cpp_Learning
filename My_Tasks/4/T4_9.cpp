#include <iostream>
#include <string>
#include <cstring>

using namespace std;

struct Batonik
{
    char brand[30];
    double weight = 0;
    int calories = 0;
    Batonik(){};
};

int main()
{
    struct Batonik* batony = new Batonik[3];

    strcpy(batony[0].brand, "Mocha Munch_0");
    batony[0].weight = 2.0;
    batony[0].calories = 330;

    strcpy(batony[1].brand, "Mocha Munch_1");
    batony[1].weight = 2.1;
    batony[1].calories = 340;

    strcpy(batony[2].brand, "Mocha Munch_2");
    batony[2].weight = 2.2;
    batony[2].calories = 350;

    for(int i=0; i<3; ++i)
    {
        cout << "Elements of snack " << i+1 << " are:\n";
        cout << batony[i].brand << endl;
        cout << batony[i].weight << endl;
        cout << batony[i].calories << endl << endl;
    }
    
    delete [] batony;
    return 0;
}