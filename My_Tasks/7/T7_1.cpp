#include <iostream>

using namespace std;

double calculateAverage();

int main()
{
    double average = 0;
    
    while(average = calculateAverage())
    {
        if (average != 0)
            cout << "Average from put numbers is: " << average << endl;
        else 
            break;
    }
    cout << "One of the numbers is equal to zero";

    return 0;
}

double calculateAverage()
{
    double a = 0, b = 0;

    cout << "Put two numbers separated by space." << endl;
    while((cin>>a>>b) && (a!=0 || b!=0))
    {
        double average = (2.0*a*b)/(a+b);
        return average;
    }
    return 0;

}