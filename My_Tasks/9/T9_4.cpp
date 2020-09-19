#include "T9_4.h"
#include <iostream>
using namespace SALES;

void SALES::setSales (Sales & s, const double ar[], int n) 
{
    double sum = 0;

    s.max = ar[0];
    s.min = ar[0];
    for(int i = 0; i < n; ++i)
    {
        sum += ar[i];
        if(s.min > ar[i])
            s.min = ar[i];
        if(s.max < ar[i])
            s.max = ar[i];
    }

    s.sales[0] = s.min;
    for(int i = 1; i < QUARTERS; i++)
    {
        s.sales[i] = 0;
    }
    s.average = sum/n;
}

void SALES::setSales (Sales & s)
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

void SALES::showSales(const Sales & s)
{
    std::cout << "Average: " << s.average << std::endl;
    std::cout << "Max: " << s.max << std::endl;
    std::cout << "Min: " << s.min << std::endl;
    for(int i = 0; i < 4; ++i)
        std::cout << "Sales " << i << ": " << s.sales[i] << std::endl;
}

const int objects = 2;