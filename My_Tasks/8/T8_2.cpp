#include <iostream>
#include <cstring>

using namespace std;

struct batonik 
{
    char name[20];
    double weight;
    int calories;
};

void show(struct batonik & baton);
void putInfo(struct batonik & baton, double weight = 2.85, int calories = 350, const char* name = "Millennium Munch");

int main() 
{
    struct batonik baton[3];
    char text[20] =  "";
    putInfo(baton[0], 2.33, 444);
    show(baton[0]);

    return 0;
}

void show(struct batonik & baton)
{
    cout << baton.name << endl << baton.weight << endl << baton.calories << endl;
}

void putInfo(struct batonik & baton, double weight, int calories, const char* name)
{
    baton.calories = calories;
    strcpy(baton.name, name);
    baton.weight = weight;
}
