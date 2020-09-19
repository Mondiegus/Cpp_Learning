#include <iostream>
#include <cstring>

class Plorg
{
    private:
        char fullname[20];
        int satiety;
    
    public:
        Plorg(const char * name = "Plorga") {strcpy(fullname, name); satiety = 50;};
        void changeSatiety(int newValue);
        void showValues() {std::cout << "Fullname: " << fullname << " , satiety: " << satiety << std::endl;};
};