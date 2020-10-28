#include <iostream>
#include <string>
using namespace std;

bool checkIfPalindrom(string text)
{
    int i,j;
    for(i = 0, j = text.length()-1; i<j; i++, j--)
    {
        if(text[i] != text[j])
            return false;
    }

    return true;
}

int main(void)
{
    string input_text;
    getline(cin, input_text);
    checkIfPalindrom(input_text) ? cout << "true" : cout << "false";

    return 0;
}