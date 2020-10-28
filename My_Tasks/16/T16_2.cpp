#include <iostream>
#include <string>
#include <algorithm>
#include <cctype>

using namespace std;

bool checkIfPalindrom(string str)
{
    int i,j;
    str.erase(remove_if(str.begin(), str.end(), ::isspace), str.end());
    for(auto x = str.begin(); x<str.end(); x++)
        *x = tolower(*x);
    for(i = 0, j = str.length()-1; i<j; i++, j--)
    {
        if(str[i] != str[j])
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