#include "T10_2.h"

int main()
{
    using namespace std;

    Person one;
    Person two("Staszek");
    Person three("Jacek", "Placek");

    cout << "One:" << endl;
    one.Show();
    cout << endl;
    one.FormalShow();
    cout << endl;

    cout << "Two:" << endl;
    two.Show();
    cout << endl;
    two.FormalShow();
    cout << endl;

    cout << "Three:" << endl;
    three.Show();
    cout << endl;
    three.FormalShow();
    cout << endl;

}