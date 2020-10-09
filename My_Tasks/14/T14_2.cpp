#include "T14_2.h"

Wine::Wine(std::string l, int y, const int yr[], const int bot[]) : std::string(l), numberOfClass(y), PairArray(ArrayInt(y),ArrayInt(y))
{
    for(int i = 0; i < numberOfClass; i++)
    {
        PairArray::first()[i] = yr[i]; 
        PairArray::second()[i] = bot[i]; 
    }
}

Wine::Wine(const char * l, int y, const int yr[], const int bot[]) : std::string(l), numberOfClass(y), PairArray(ArrayInt(y),ArrayInt(y))
{
    for(int i = 0; i < numberOfClass; i++)
    {
        PairArray::first()[i] = yr[i]; 
        PairArray::second()[i] = bot[i]; 
    }
}

bool Wine::GetBootles()
{
    std::cout << "Please put correct years and related number of Bootles.\n";
    for(int i = 0; i<numberOfClass; i++)
    {
        std::cout << "Year: ";
        std::cin >> PairArray::first()[i];
        std::cin.ignore();
        std::cout << "Number of Bootles: ";
        std::cin >> PairArray::second()[i];
    }

    return true;
}

std::string & Wine::Label()
{
    return (std::string &)*this;
}

int Wine::sum()
{
    return PairArray::second().sum();
}

void Wine::Show()
{
    using namespace std;

    cout << "Wine: " << (std::string &)*this << endl;
    cout << "\t Vintage \t\t Bootles\n"; 

    for(int i = 0; i < numberOfClass; i++)
    {
        cout << "\t  " << PairArray::first()[i] << "\t\t\t" << PairArray::second()[i] << endl;
    }
}
