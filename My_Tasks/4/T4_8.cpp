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
    struct Pizza * pizza = new Pizza;

    cout << "Put diameter of pizza: ";
    cin >> pizza->diameter;
    cin.ignore();
    
    cout << "Put brand of pizza: ";
    cin.getline(pizza->brand, 100, '\n');

    cout << "Put weight of pizza: ";
    cin >> pizza->weight;

    cout << "\nPizza details:\n";
    cout << pizza->brand << endl;
    cout << pizza->diameter << endl;
    cout << pizza->weight << endl;
    delete pizza;
    
    return 0;
}
