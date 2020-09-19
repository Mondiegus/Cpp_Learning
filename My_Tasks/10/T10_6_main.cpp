#include "T10_6.h"

int main()
{
    Move move(2,6);
    Move move2(1,1);
    move.showmove();
    move = move.add(move2);
    move.showmove();
    move.reset();
    move.showmove();
}