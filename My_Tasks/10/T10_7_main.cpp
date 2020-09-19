#include "T10_7.h"

int main()
{
    Plorg plorg;
    Plorg plorg1("Andrzej");
    plorg.showValues();
    plorg1.showValues();
    plorg.changeSatiety(100);
    plorg1.changeSatiety(77);
    plorg.showValues();
    plorg1.showValues();
}