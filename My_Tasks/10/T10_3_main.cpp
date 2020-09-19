#include "T10_3.h"

int main()
{
    Golf golfs[4];

    for(int i=0; i<2; i++)
    {
        golfs[i].setgolt();
    }
    
    golfs[3].setgolt("Banan Janusz", 3);
    golfs[2].handicapset(2);

    for(int i=0; i<4; i++)
        golfs[i].showgolf();
    return 0;
} 