#include <iostream>
#include <cstring>

using namespace std;

struct carsDoc 
{
    string model;
    uint16_t prodYear;
};

int main()
{
    int loops = 0;
    cout << "Put number of rows: " << endl;
    cin >> loops;
    
    for(int i=1; i<=loops; ++i)
    {
        for(int j=0; j<(loops - i); ++j)
            cout << ".";
        for(int k=1; k<=i; ++k)
            cout << "*";
        cout << endl;
    }
     
}
