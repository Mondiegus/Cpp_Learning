#include <iostream>

using namespace std;

void convertFunc(long long, long long);

int main()
{
    long long peopleWorld = 0, peoplePoland = 0;
    cout << "Put number of people in the world." << endl;
    cin >> peopleWorld;
    cout << "Put number of people in Poland." << endl;
    cin >> peoplePoland;

    if( peoplePoland >= 0 && peopleWorld >= 0)
        convertFunc(peopleWorld, peoplePoland);
    else
        cout << "Wrong input! Program stop." << endl;
}

void convertFunc(long long peopleWorld, long long peoplePoland)
{
    cout << "Population of poland is " << (double)(((double long)peoplePoland/(double long)peopleWorld) * 100) << "% of the world population" << endl;
}