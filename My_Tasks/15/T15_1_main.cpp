#include "T15_1.h"

int main()
{
    using std::cout;
    
    Tv s27;
    cout << "Poczatkowe ustawienia telewizora 27\":\n";
    s27.settings();
    s27.onoff();
    s27.chanup();
    cout << "\nNowe ustawienia telewizora 27\":\n";
    s27.settings();

    Remote grey;
    grey.set_chan(s27, 10);
    grey.volup(s27);
    grey.volup(s27);
    cout << "\nllstawienia telewizora 27\" po uzyciu pilota:\n";
    s27.settings();

    Tv s32(Tv::On);
    s32.set_mode();
    grey.set_chan(s32, 28);
    cout << "\nUstawienia telewizora 32\"\n";
    s32.settings();
    grey.set_working_type(s32);
    cout << "\nUstawienia telewizora 32\"\n";
    s32.settings();

    return 0;
}