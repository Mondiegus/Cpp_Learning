#include <iostream>
#include <cstring>

#define SIZE 64
struct chaf
{
    char dross[20];
    int slag;
}; 

using namespace std;

char buffer[SIZE];

int main()
{
    struct chaf * struct1 = new (buffer) struct chaf[2];
    strcpy(struct1[0].dross, "aaa");
    struct1[0].slag = 1;
    strcpy(struct1[1].dross, "bbb");
    struct1[1].slag = 1;

    for(int i = 0; i < 2; ++i)
    {
        cout << "Struct " << i << "Dross: " << struct1[i].dross << endl;
        cout << "Struct " << i << "Slag: " << struct1[i].slag << endl;

    }
    return 0;
}
