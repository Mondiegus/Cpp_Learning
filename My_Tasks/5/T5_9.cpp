#include <iostream>
#include <cstring>

using namespace std;

struct carsDoc 
{
    string model;
    uint16_t prodYear;
};

int main()
{
    string sentence;
    int words = 0;
    cout << "Please, start putting seperate words. Game ending when you put \"gotowe\"" << endl;
    
    while(getline(cin, sentence) && sentence != "gotowe")
        words++;
        
    cout << "Words used: " << words;
}
