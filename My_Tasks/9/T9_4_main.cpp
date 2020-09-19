#include "T9_4.h"

using namespace SALES;

const int objects = 2;

int main ()
{
    struct Sales * Salees = new struct Sales[objects];
    double arr[3] = {2.2, 4.43, 2.19};
    setSales(Salees[0], arr,3);
    setSales(Salees[1]);
    showSales(Salees[0]);
    showSales(Salees[1]);

    return 0;
}