#include <iostream>

using namespace std;

int chooseLevel(int);

int main()
{
    int salary = 0, tax = 0;

    while((cout << "Put your year salary: ") && cin >> salary && salary>=0)
    {
        switch(chooseLevel(salary))
        {
            case 1:
                tax += salary*0.00 + (salary-5000)*0.1;
            break;

            case 2:
                tax += salary*0.00 + 10000*0.1 + (salary-10000-5000)*0.15;
            break;

            case 3:
                tax += salary*0.00 + 10000*0.1 + 20000*0.15 + (salary-20000-10000-5000)*0.2;
            break;

            default:
            break;
        }
        cout << "Tax is: " << tax << endl;
    }
    return 0;
}

int chooseLevel(int salary)
{
    if(salary>35000)
        return 3;
    else if(salary>15000)
        return 2;
    else if (salary>5000)
        return 1;
    return 0;
}
