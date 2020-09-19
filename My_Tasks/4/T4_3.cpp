#include <iostream>
#include <cstring>

using namespace std;


int main()
{
    char str[100];
    char name[50];
    char surname[50];
    char formula[50] = "This is your informaton in one sentence: ";
    cout << "What is your name?" << endl;
    cin.getline(name, 50);

    cout << "What is your surname?" << endl;
    cin.getline(surname, 50);

    strcat(str, formula);
    strcat(str, name);
    strcat(str, ", ");
    strcat(str, surname);
    
    cout << str;
    
    return 0;
}