#include "T12_1.h"

int main()
{
    using namespace std;

    Cow a1;
    Cow a2("Janusz Banan", "Beer", 80);
    Cow a3(a2);
    
    cout << "A1:\n";
    a1.ShowCow();

    cout << "A2:\n";
    a2.ShowCow();

    cout << "A3:\n";
    a3.ShowCow();

    a2 = a1;
    a2.ShowCow();

    return 0;
}