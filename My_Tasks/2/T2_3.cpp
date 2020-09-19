#include <iostream>
#define FUNCTION_ITERATION 2

using namespace std;

void firstFunc(void)
{
    cout << "Entliczek pentliczek" << endl;
}

void secFunc(void)
{
    cout << "Czerwony stoliczek" << endl;
}

int main()
{
    for(int i = 0; i < FUNCTION_ITERATION; ++i)
    {
        firstFunc();
    }
    for(int i = 0; i < FUNCTION_ITERATION; ++i)
        secFunc();
}