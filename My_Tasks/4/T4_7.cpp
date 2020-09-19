#include <iostream>
#include <string>

using namespace std;

struct Pizza
{
    char brand[100];
    int diameter = 0;
    double weight = 0;
};

int main()
{
    struct Pizza pizza;
    cout << "Put brand of pizza: ";
    cin.getline(pizza.brand, 100);

    cout << "Put diameter of pizza: ";
    cin >> pizza.diameter;

    cout << "Put weight of pizza: ";
    cin >> pizza.weight;

    cout << "\nPizza details:\n";
    cout << pizza.brand << endl;
    cout << pizza.diameter << endl;
    cout << pizza.weight << endl;
    
    return 0;
}