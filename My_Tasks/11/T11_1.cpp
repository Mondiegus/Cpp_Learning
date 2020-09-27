#include <iostream>
#include <ctime>
#include <fstream>
#include <cstdlib>
#include "vect.h"

int main()
{
    using namespace std;
    using VECTOR::Vector;
    srand(time(0));
    double direction;
    Vector step;
    Vector result(0.0, 0.0);
    unsigned long steps = 0;
    double target;
    double dstep;
    fstream myfile;
    myfile.open("testFile.txt", ios::app);
    if(myfile.is_open())
    {
        cout << "Put distance to walk (k to finish): ";
        while (cin >> target)
        {
            cout << "Put step length: ";
            if(!(cin >> dstep))
                break;
            
            myfile << "Distance to walk: " << target << ", step length: " << dstep << endl; 

            while ( result.magval() < target)
            {
                direction = rand() % 360;
                step.reset(dstep, direction, Vector::POL);
                result = result + step;
                myfile << steps << ": " << result << endl; 
                steps++;
            }
           
            cout << "After " << steps << " steps man get position of: \n" << result << endl;
            myfile << "After " << steps << " steps man get position of: \n" << result << endl;
            result.polar_mode();
            cout << "Which mean\n"<< result << endl;
            myfile << "Which mean\n"<< result << endl;
            cout << "Average step lenght = "<< result.magval()/steps << endl;
            myfile << "Average step lenght = "<< result.magval()/steps << endl;
            steps = 0;
            result.reset(0.0, 0.0);
            cout << "Put distance to walk (k to finish): ";
        }
        cout <<"End!\n";
        cin.clear();
        while(cin.get() != '\n')
            continue;
    } else
    {
        cout << "Error during file opening.";
    }
    myfile.close();
        
    return 0;
}