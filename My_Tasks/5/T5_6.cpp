#include <iostream>
#include <array>

using namespace std;

const int Months = 12;
const int years = 3;

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

    int soldBooks[years][Months] = {0}, sum = 0, sumYears[years] = {0};

    for (size_t i = 0; i < years; ++i)
    {
        for(int j=0; j<Months; ++j)
        {   
            cout << "Put number of sold books in " << months[j] << "  " << i+1 << ". year: ";
            cin >> soldBooks[i][j];
            sum += soldBooks[i][j];
            sumYears[i] += soldBooks[i][j];
        }
    }
        
    for(int i = 0; i<years; ++i)
        cout << "Amount of books sold " << i+1 << ". year: " << sumYears[i] << endl;

    cout << "Sales in this year totaled: " << sum;
    return 0;
}
