#include "T14_4.h"

const int SIZE = 3;

int main()
{
    using namespace std;
    Person * table[SIZE];
    table[0] = new Gunslinger("Janusz", 1.1,9);
    table[1] = new PokerPlayer("Sebek", "Blue",8);
    table[2] = new BadDude("Kamil", 1.1, 9, "Banana", 7);

    for(int i = 0; i < SIZE; i++)
        table[i]->Show();
    return 0;
}
