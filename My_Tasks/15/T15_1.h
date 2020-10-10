#ifndef TV_H_
#define TV_H_
#include <iostream>

using namespace std;

class Remote;

class Tv
{
    friend class Remote;
    private:
        int state; // Włączony lub wyłączony
        int volume; //Zakładamy, że można głośność wyrazić liczbą
        int maxchannel; // Maksymalna liczba kanałów
        int channel; //Aktualnie włączony program
        int mode;
        int input;
        int workingType;

    public:
        friend class Remote; // Klasa Remote posiada dostęp do pływalnych danych Tv
        enum { Off, On };
        enum { MinVal, MaxVal = 20 };
        enum { Antenna, Cable } ;
        enum { TV, VCR } ;
        enum { Normal, Interactive } ;
        Tv(int s = Off, int mc = 100) : state(s), volume(5), maxchannel(mc) , channel (2), mode(Cable), input(TV), workingType(Normal) {}
        void onoff() {state = (state == On) ? Off : On;}
        bool ison() const {return state == On;}
        bool volup();
        bool voldown();
        void chanup ();
        void chandown ();
        void set_mode() {mode = (mode == Antenna) ? Cable : Antenna;}
        void set_input() {input = (input == TV) ? VCR : TV;}
        void change_working_type() {workingType = (workingType == Normal) ? Interactive : Normal;}
        void settings() const; // Wyświetla wszystkie ustawienia

//Antena lub telewizja kablowa
// Telewizja lub video
};

class Remote
{
    friend class Tv;
    private:
        int mode; // Kontroluje TV lub video
    public:
    Remote(int m = Tv::TV) : mode(m) {}
    bool volup(Tv & t) { return t.volup(); };
    bool voldown(Tv & t) { return t.voldown();}
    void onoff(Tv & t) { t.onoff();}
    void chanup(Tv & t) { t. chanup(); }
    void chandown(Tv & t) { t.chandown(); }
    void set_chan(Tv & t, int c) { t.channel = c;}
    void set_mode(Tv & t) { t.set_mode(); }
    void set_input(Tv & t) { t.set_input(); }
    void show_working_type(Tv & t) { cout << "Working type is: " << t.workingType;}
    bool set_working_type(Tv & t);
};

#endif 
