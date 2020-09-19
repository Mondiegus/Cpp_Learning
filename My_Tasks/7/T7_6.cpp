#include <iostream>

using namespace std;
const int sizeOfArray = 10;
int fill_array(double * array, int n);
void showArray(double * array, int n);
void reverseArray(double * array, int n);

int main()
{
    double array[sizeOfArray] = {0};
    int valuesInside = 0;

    valuesInside = fill_array(array, sizeOfArray);
    showArray(array, sizeOfArray);
    reverseArray(array, sizeOfArray);
    showArray(array, sizeOfArray);

    return 0;
}

int fill_array(double array[],int n)
{
    int valuesInside = 0;
    cout << "Put values of array" << endl;
    while(cin >> array[valuesInside] && valuesInside<n)
    {
        valuesInside++;
        if(valuesInside == n)
            break;
    }
    return valuesInside;
}

void showArray(double array[], int n)
{
    cout << "Values:" << endl;
    for(int i=0; i<n; i++)
    {
        cout << array[i] << endl;
    }
}

void reverseArray(double array[], int n)
{
    for(int i = 0; i <= n-1; ++i, --n)
    {
        double temp = array[i];
        array[i] = array[n-1];
        array[n-1] = temp;
    }
}
