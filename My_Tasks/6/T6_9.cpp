#include <iostream>
#include <string>
#include <cstring>
#include <fstream>

using namespace std;

struct donate {
    char surname[50] = "empty";
    int donation;
};

int main()
{
    ifstream file("F:/cpp/Prata/6/T6_9.txt");
    int donators = 0;
    file >> donators;
    file.ignore();
    cout << donators << endl;
    struct donate * donateList = new donate[donators];
    
    for(int i=0; i<donators;++i)
    {
        
        char tempName[50];
        cout << "Put donator name if you want:" << endl;
        file.getline(tempName,50);
        cout << tempName << endl;

        if(strlen(tempName))
        {
            strcpy(donateList[i].surname, tempName);
        }
        file >> donateList[i].donation;
        file.ignore();
        cout << donateList[i].donation << endl;
            
        
    }

    cout << "Big founders list:" << endl;
    for(int i=0; i<donators;++i)
    {
        if(donateList[i].donation>10000)
            cout << donateList[i].surname <<endl; 
    }
    
    cout << "Founders list:" << endl;
    for(int i=0; i<donators;++i)
    {
        if(donateList[i].donation<10000)
            cout << donateList[i].surname << endl;
    }

    return 1;
}
