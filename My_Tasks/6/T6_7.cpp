#include <iostream>
#include <string>
#include <sstream>

using namespace std;

void processSentence();

int main()
{
    processSentence();
    return 1;
}

void processSentence()
{
    string sentence, word;
    int consonants = 0, vowels = 0, others = 0; 

    cout << "Put words. Single q ends." << endl;

    while(getline(cin,sentence))
    {
        bool brakeFlag = false;
        istringstream iss(sentence);
        
        while(iss >> word) 
        {
            if(word == "q")
            {
                brakeFlag = true;
                break;
            }

            if(isalpha(word[0]))
            {
                switch (word[0])
                {
                    case 'a':
                    case 'e':
                    case 'i':
                    case 'o':
                    case 'u':
                    case 'y':
                        vowels += 1;
                    break;
                    default:
                        consonants += 1;
                    break;
                }
            }
            else
                others += 1;
        }

        if(brakeFlag)
            break;
    }
    cout << "Amount of words begin with consonants is: " << consonants << endl;
    cout << "Amount of words begin with vowels is: " << vowels << endl;
    cout << "Amount other words is: " << others << endl;
}