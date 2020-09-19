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
    int carAmount = 0;

    cout << "How many cars do you want to save?" << endl;
    cin >> carAmount;
    cin.get();
    carsDoc *carsTab = new carsDoc[carAmount];
    
    for(int i = 1; i <= carAmount; ++i)
    {
        cout << endl << "Car #" << i << endl << "Please put a name: " << endl;
        getline(cin,carsTab[i-1].model);
        
        cout << endl << "Please production year: " << endl;
        cin >> carsTab[i-1].prodYear;
        cin.get();
    }

    for(int i = 1; i <= carAmount; ++i)
    {
        cout << carsTab[i-1].prodYear << "\t" << carsTab[i-1].model << endl;
    }

    delete [] carsTab;
}
