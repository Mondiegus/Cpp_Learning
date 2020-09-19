#include <iostream>
#include <string>

using namespace std;


int main()
{
    string name;
    string surname;
    string formula = "This is your informaton in one sentence: ";
    cout << "What is your name?" << endl;
    getline(cin, name);

    cout << "What is your surname?" << endl;
    getline(cin, surname);

    formula += name;
    formula += ", ";
    formula += surname;
    
    cout << formula;
    
    return 0;
}