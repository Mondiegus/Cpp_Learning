#include <iostream>
#include <array>

using namespace std;

const int ArSize = 100;

int main()
{
    int sum = 0, userNum = 0;
    cout << "Start putting numbers:\n";
    while(cin >> userNum && userNum != 0)
    {
        sum += userNum;
        cout << "Numbers sum: " << sum << endl;
    } 
}
