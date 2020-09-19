#include <iostream>
#include <array>

using namespace std;

const int Months = 12;

int main()
{
    string months[Months] ={
        "Janury",
        "February",
        "March",
        "April",
        "May",
        "June",
        "July",
        "August",
        "September",
        "October",
        "November",
        "December"
    };

    int soldBooks[12] = {0}, sum = 0;

    for(int i=0; i<Months; ++i)
    {   
        cout << "Put number of sold books in " << months[i] << " : ";
        cin >> soldBooks[i];
    }

    for(int i=0; i<Months; ++i)
    {   
        sum += soldBooks[i];
    }
    cout << "Sales in this year totaled: " << sum;
}
