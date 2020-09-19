#include <iostream>
#include <string>

using namespace std;

struct Batonik
{
    char brand[30];
    double weight = 0;
    int calories = 0;
};

int main()
{
    struct Batonik snacks[3] = {
        {"Mocha Munch_0", 2.0, 330},
        {"Mocha Munch_1", 2.1, 340},
        {"Mocha Munch_2", 2.2, 350}
    };


    for(int i=0; i<3; ++i)
    {
        cout << "Elements of snack " << i+1 << " are:\n";
        cout << snacks[i].brand << endl;
        cout << snacks[i].weight << endl;
        cout << snacks[i].calories << endl << endl;
    }
    
    return 0;
}