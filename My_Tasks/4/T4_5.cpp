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
    struct Batonik snack = {"Mocha Munch", 2.3, 350};

    cout << snack.brand << endl;
    cout << snack.weight << endl;
    cout << snack.calories << endl;
    
    return 0;
}