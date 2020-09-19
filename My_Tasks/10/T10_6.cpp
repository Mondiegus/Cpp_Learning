#include "T10_6.h"

using namespace std;

Move::Move(double a, double b)
{
    x = a;
    y = b;
    cout << "Done!" << endl;
}

void Move::showmove() const
{
    cout << "Values:" << endl;
    cout << "X: " << x << endl;
    cout << "Y: " << y << endl;
}

Move Move::add(const Move & m)
{
    Move element((x+m.x), (y+m.y));
    return element;
}

void Move::reset(double a, double b)
{
    x = a;
    y = b;
    cout << "Done!" << endl;
}
