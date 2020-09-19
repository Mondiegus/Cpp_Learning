#include <iostream>

#define HOLEVALUE 10

using namespace std;

void collectData(char (&data)[HOLEVALUE]);
void countAverage(char * data);
void printValues(char (&data)[HOLEVALUE]);

int main()
{
    char data[10];
    
    collectData(data);
    printValues(data);
    countAverage(data);
    
    return 0;
}

void collectData(char (&data)[HOLEVALUE])
{
    int i = 0;

    cout << "Put up to 10 numbers of golf holes. Any letter would break the loop." << endl;
    while(cin.get(data[i]) && !isalpha(data[i]))
    {   
        i++;
        if(10 == i)
            break;
    }
}

void countAverage(char * data)
{
    double result = 0;

    for(int i=0;i<HOLEVALUE;++i)
    {
        if(-1 == data[i])
            break;
        result += data[i];
    }
    cout << result/HOLEVALUE << endl;
}

void printValues(char (&data)[HOLEVALUE])
{
    for(int i=0;i<HOLEVALUE;++i)
    {
        if(!isalpha(data[i]))
            cout << data[i];
        else
            break;
    }
}
