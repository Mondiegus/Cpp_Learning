#include <iostream>

using namespace std;

int power(unsigned num);

int main()
{
    int ret_val = 0;

    unsigned num = 0;
    cout << "Put number of power: ";
    cin >> num;
    ret_val = power(num);
    cout << ret_val;
    return 0;
}

int power(unsigned num)
{
    int ret_val = 1;
    switch(num)
    {
        case 0:
        return 1;
        
        case 1:
        return 1;

        default:
            ret_val = num*power(num-1);
        break;
    }
    return ret_val;
}
