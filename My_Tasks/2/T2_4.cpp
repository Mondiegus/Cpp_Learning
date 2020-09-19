#include <iostream>

using namespace std;


int main()
{
    int years = 0;
    cout << "How old are you? Put number in years." << endl;

    do 
    {
        if(cin >> years)
        {
            cout << "Your age in moths is: " << (years*12) << endl;
            break;
        }
        else 
        {
            cout << "You didn't put a number. Application stop.";
            break;
        }
        
    }while(!isdigit(years));
}