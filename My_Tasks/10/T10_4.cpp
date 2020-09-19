#include <iostream>
#include "T10_4.h"

using namespace SALES; 

Sales::Sales()
{
    setSales(*this);
} 

Sales::Sales(double ar[], int n) 
{
    double sum = 0;

    max = ar[0];
    min = ar[0];
    for(int i = 0; i < n; ++i)
    {
        sum += ar[i];
        if(min > ar[i])
            min = ar[i];
        if(max < ar[i])
            max = ar[i];
    }

    sales[0] = min;
    for(int i = 1; i < QUARTERS; i++)
    {
        sales[i] = 0;
    }
    average = sum/n;
}

void Sales::setSales(SALES::Sales & s)
{
    unsigned int i = 0;
    int sum = 0;

    while(std::cin >> s.sales[i])
    {
        i++;
        if(i>=4)
        {
            break;
        }
    }
    
    for(int i = 0; i < QUARTERS; i++)
    {
        sum += s.sales[i];
        s.max = s.sales[0];
        s.min = s.sales[0];

        if(s.min > s.sales[i])
            s.min = s.sales[i];
        if(s.max < s.sales[i])
            s.max = s.sales[i];
    }

}

void Sales::showSales() const
{
    std::cout << "Average: " << average << std::endl;
    std::cout << "Max: " << max << std::endl;
    std::cout << "Min: " << min << std::endl;
    for(int i = 0; i < 4; ++i)
        std::cout << "Sales " << i << ": " << sales[i] << std::endl;
}

