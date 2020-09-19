#include <iostream>

using namespace std;


int main()
{
    char name[50];
    char surname[40];
    int degree = 0, age = 0;

    cout << "What is your name?" << endl;
    cin.getline(name, 40);

    cout << "What is your surname?" << endl;
    cin.getline(surname, 40);

    cout << "What rating do you deserve?" << endl;
    cin >> degree;
    if(1 <= degree && 6 >= degree)
    {
        cout << "How old are you?" << endl;
        cin >> age;
        if(0 < age && 150 > age)
            cout << "Name:\t" << surname << ", " << name << endl << "Rating:\t" << (degree-1) << endl << "Age:\t" << age;
        else
            cout << "Wrong data! Program stop.";
    }
    else
        cout << "Wrong data! Program stop.";
    
}