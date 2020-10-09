#include "T14_4.h"

void Person::Show()
{
    cout << "Name and surname is: " << name << endl;
}

void Gunslinger::Show()
{
    Person::Show();
    cout << "Time to put out of your gun is: " << time << endl;
    cout << "Numer of lines on the gun is: " << somethingOnTheGun << endl;
}

void Card::set(string typedColour, int num)
{
    colour = typedColour;
    cardNumber = num;
}

Card & PokerPlayer::Draw()
{
    srand(1);
    cart.set("Red", (rand() % 52 + 1));

    return cart;
}

void BadDude::Show()
{
    Gunslinger::Show();
    cout << "Card number i: " << PokerPlayer::Draw().showCardNumber() << endl;;
}