#include "T10_4.h"

using namespace SALES;

const int objects = 2;

int main ()
{
    double arr[3] = {2.2, 4.43, 2.19};
    Sales Salees[objects] = 
    {
        Sales(arr,3),
        Sales()
    };
    Salees[0].showSales();
    Salees[1].showSales();

    return 0;
}