#ifndef T14_4_H_
#define T14_4_H_
#include <iostream>
#include <string>

using namespace std;

class Person
{
    private:
        string name;
        
    public:
        Person(const char * str = "None") : name(str) {}
        Person(string str) : name(str) {}
        virtual ~Person() {};
        virtual void Show() = 0;
};

class Gunslinger : virtual public Person
{
    private:
        double time;
        int somethingOnTheGun;
    public:
        Gunslinger(const char * str = "None", double t = 0.0, int something = 0) : Person(str), time(t), somethingOnTheGun(something) {};
        Gunslinger(string str = "None", double t = 0.0, int something = 0) : Person(str), time(t), somethingOnTheGun(something) {};
        Gunslinger(double t = 0.0, int something = 0) : time(t), somethingOnTheGun(something) {}
        double Draw() { return time;}
        void Show();
};

class Card
{
    private:
        string colour;
        int cardNumber;
    public:
        Card(string typedColour = "None", int num = -1) : colour(typedColour), cardNumber(num) {}
        int showCardNumber() { return cardNumber;}
        void set(string typedColour, int num);
};


class PokerPlayer : virtual public Person
{
    private:
        Card cart;

    public:
        PokerPlayer(const char * str = "None", string typedColour = "Red", int num = -1) : Person(str) { cart.set(typedColour, num);}
        Card & Draw();
        void Show() {Person::Show();}
};

class BadDude : public Gunslinger, public PokerPlayer
{
    public:
        BadDude(const char * str = "None", double t = 0.0, int something = 0, string typedColour = "Red", int num = -1): Person(str), Gunslinger(str, t, something), PokerPlayer(str, typedColour, num) {}
        double Gdraw() {return Gunslinger::Draw();}
        int Cdraw() { return PokerPlayer::Draw().showCardNumber();}
        void Show();
};       

#endif