#include <iostream>
#include <string>
#include <array>
#define NUMBER_OF_RUNS 3

using namespace std;

void average(array<int, NUMBER_OF_RUNS>);


int main()
{
    array<int, NUMBER_OF_RUNS> sprints = {0,0,0};
    cout << "Place " << NUMBER_OF_RUNS << " scores of 100m runs in seconds:\n";
    for(int i=0; i<NUMBER_OF_RUNS; ++i)
    {
        cout << (i+1) <<". time: ";
        cin >> sprints[i];
    } 

    cout << "SCORES:\n";
    for(int i=0; i<NUMBER_OF_RUNS; ++i)
    {
        cout << i  << ". run: " << sprints[i] << "s" << endl;
    }
    average(sprints);
    return 0;
}

void average(array<int, NUMBER_OF_RUNS> sprints)
{
    int sum = 0;
    for(int i=0; i<NUMBER_OF_RUNS; ++i)
    {
        sum += sprints[i];
    }
    cout << "Average time: " << ((double)sum/NUMBER_OF_RUNS) << "s";
}