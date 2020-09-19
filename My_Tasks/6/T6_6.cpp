#include <iostream>
#include <cstring>

using namespace std;

struct donate {
    char surname[50] = "empty";
    int donation;
};

int main()
{
    int donators = 0;
    cout << "Put amount of donators: ";
    cin >> donators;
    struct donate * donateList = new donate[donators];

    for(int i=0; i<donators;++i)
    {
        cout << "Put value of donation:" << endl;
        if(cin>>donateList[i].donation)
        {
            cin.ignore();
            char tempName[50];
            cout << "Put donator name if you want:" << endl;
            cin.getline(tempName, 50);
            if(strlen(tempName))
            {
                strcpy(donateList[i].surname, tempName);
            }
            
        }
        else
        {
            cout << "You put wrong value, program stop" << endl;
            return 0;
        } 
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
