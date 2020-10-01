#include <iostream>
#include <ctime>
#include <fstream>
#include <cstdlib>
#include "vect_11_2.h"

int main()
{
    using namespace std;
    using VECTOR::Vector;
    srand(time(0));
    double direction;
    int iterations = 0;
    Vector step;
    Vector result(0.0, 0.0);
    unsigned long steps = 0;
    double target;
    double dstep;
    double min = 1.7e+308;
    double max = 0;
    double average = 0;
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

            cout << "Put number of iterations: ";
            if(!(cin >> iterations))
                break;
            
            myfile << "Distance to walk: " << target << ", step length: " << dstep << endl; 

            for(int i = 0; i < iterations; i++)
            {
                while ( result.magval() < target)
                {
                    direction = rand() % 360;
                    step.reset(dstep, direction, Vector::POL);
                    result = result + step;
                    steps++;
                }
                

                cout << "Steps: " << steps << endl;
                if(min > steps)
                    min = steps;

                if(max < steps)
                    max = steps;

                average += steps;
                steps = 0;
                result.reset(0.0, 0.0);
            }
            
            cout << "Max steps value: "<< max << endl;
            cout << "Min steps value: "<< min << endl;
            cout << "Average steps value: "<< average << endl;
            myfile << "Max steps value: "<< max << endl;
            myfile << "Min steps value: "<< min << endl;
            myfile << "Average steps value: "<< average << endl;

            min = 1.7e+308;
            max = 0;
            average = 0;
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