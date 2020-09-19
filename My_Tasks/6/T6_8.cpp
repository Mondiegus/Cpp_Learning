#include <iostream>
#include <fstream>

using namespace std;

void processSentence();

int main()
{
    ifstream file;
    char ch;
    int letterNum = 0;

    file.open("F:/cpp/Prata/6/test.txt");
    if(!file.is_open())
    {
        cout << "Plik jest uszkodzony.";
        exit(EXIT_FAILURE);
    }
    while(file.get(ch))
    {
        cout << ch;
        if(isalpha(ch) || isdigit(ch))
            ++letterNum;
    }

    cout << endl << "Liczba liter: " << letterNum;
    return 1;
}
