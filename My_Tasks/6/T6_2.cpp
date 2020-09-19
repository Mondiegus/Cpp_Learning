#include <iostream>
#include <array>

using namespace std;

int main()
{
    int ch, loop = 0, sum = 0;
    double average = 0;
    array<double, 10> table = {-1, -1, -1, -1, -1, -1, -1, -1, -1, -1};
    cout << "Put up to 10 donations. Any sign different than number will sop application" << endl;

    while(cin >> ch && loop < 10)
    {
        table[loop] = ch;
        sum += ch;
        ++loop;
    }
    average = sum/loop;
    
    cout << "Srednia datkow za " << loop << " miesiecy wynosi: " << average << endl;
    cout << "Datki wieksze od sredniej to: ";

    for(int i=0; i<loop; ++i)
    {
        if(table[i]>average)
            cout << table[i] << " ";
    }
}
