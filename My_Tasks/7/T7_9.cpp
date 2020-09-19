#include <iostream>
#include <array>
#include <string>

using namespace std;

const int SLEN = 30;

struct student
{   
    char fullname[SLEN];
    char hobby[SLEN];
    int ooplevel;

};

int getInfo(student pa[], int n);
void display(student st);
void display2(const student * ps);
void display3(const student pa[], int n);

int main() {
    int class_size;
    cout << "Put the group number: ";
    cin >> class_size;
    while(cin.get() != '\n')
        continue;
    student *ptr_stu = new student[class_size];
    int entered = getInfo(ptr_stu, class_size);
    for(int i = 0; i < entered; ++i)
    {
        display(ptr_stu[i]);
        display2(&ptr_stu[i]);
    }
    display3(ptr_stu, entered);
    delete [] ptr_stu;
    cout << "Gotowe\n";
    return 0;
}

int getInfo(student pa[], int n)
{
    int studentsNumber = 0;
    for(int i = 0; i<n; i++)
    {
        cout << "Put student name: ";
        if(!cin.getline(pa[i].fullname, SLEN) || pa[i].fullname[0] == '\0')
            break;
        cout << "Put student hobby: ";
        cin.getline(pa[i].hobby, SLEN);

        cout << "Put student ooplevel: ";
        cin >> pa[i].ooplevel;
        cin.ignore();
        studentsNumber++;
    }
    return studentsNumber;
}

void display(student st)
{
    cout << "Fullname: " << st.fullname << endl;
    cout << "Hobby: " << st.hobby << endl;
    cout << "Ooplevel: " << st.ooplevel << endl << endl;
}

void display2(const student * ps)
{
    cout << "Fullname: " << ps->fullname << endl;
    cout << "Hobby: " << ps->hobby << endl;
    cout << "Ooplevel: " << ps->ooplevel << endl << endl;
}

void display3(const student pa[], int n)
{
    for(int i = 0; i < n; i++)
    {
        cout << "Fullname: " << pa[i].fullname << endl;
        cout << "Hobby: " << pa[i].hobby << endl;
        cout << "Ooplevel: " << pa[i].ooplevel << endl << endl;   
    }
}
