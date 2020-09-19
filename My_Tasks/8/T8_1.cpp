#include <iostream>

using namespace std;

void show(const char* x, int y);

int main() {
    const char* text = "Banany sa ok";
    int number = 0;

    while(cin >> number)
        show(text, number);

    return 0;
}

void show(const char* x, int y)
{
    static int i = 1;
    if(y != 0)
    {
        for(int j = 0; j < i; j++)
            cout << x << endl;
    }
    else 
    {
        cout << x << endl;
    }
    i++;
}
