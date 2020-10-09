#include "T14_1.h"

Wine::Wine(std::string l, int y, const int yr[], const int bot[]) : name(l), numberOfClass(y)
{
    a1.first().resize(numberOfClass);
    a1.second().resize(numberOfClass);

    for(int i = 0; i < numberOfClass; i++)
    {
        a1.first()[i] = yr[i]; 
        a1.second()[i] = bot[i]; 
    }
}

Wine::Wine(const char * l, int y, const int yr[], const int bot[]) : name(l), numberOfClass(y)
{
    a1.first().resize(numberOfClass);
    a1.second().resize(numberOfClass);

    for(int i = 0; i < numberOfClass; i++)
    {
        a1.first()[i] = yr[i]; 
        a1.second()[i] = bot[i]; 
    }
}

bool Wine::GetBootles()
{
    std::cout << "Please put correct years and related number of Bootles.\n";
    for(int i = 0; i<numberOfClass; i++)
    {
        std::cout << "Year: ";
        std::cin >> a1.first()[i];
        std::cin.ignore();
        std::cout << "Number of Bootles: ";
        std::cin >> a1.second()[i];
    }

    return true;
}

std::string & Wine::Label()
{
    return name;
}

int Wine::sum()
{
    return a1.second().sum();
}

void Wine::Show()
{
    using namespace std;

    cout << "Wine: " << name << endl;
    cout << "\t Vintage \t\t Bootles\n"; 

    for(int i =0; i < numberOfClass; i++)
    {
        cout << "\t" << a1.first()[i] << "\t\t" << a1.second()[i] << endl;
    }
}
