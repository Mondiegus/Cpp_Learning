#include "T9_1.h"

int main()
{
    struct golf golfs[4];

    for(int i=0; i<2; i++)
    {
        setgolt(golfs[i]);
    }
    setgolt(golfs[3], "Banan Janusz", 3);
    handicap(golfs[2], 2);

    for(int i=0; i<4; i++)
        showgolf(golfs[i]);
    return 0;
}