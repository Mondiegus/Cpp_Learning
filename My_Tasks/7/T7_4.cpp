#include <iostream>

using namespace std;

long double probability(unsigned numbers, unsigned picks, unsigned megaNumber);

int main()
{
    double total, choices, megaNumber;
    cout << "Put the total number of possible choices, number for a deletions and number of possible mega-number choices:\n ";
    while ((cin >> total >> choices >> megaNumber) && choices <= total)
    {
        cout << "Chance to win is: ";
        cout << probability(total, choices, megaNumber);
        cout << ".\n";
        cout << "Next two numbers(q, to exit)";
    }
    cout << "Good bye \n";
    
    return 0;
}

long double probability(unsigned numbers, unsigned picks, unsigned megaNumber)
{
    long double result = 1.0, n;
    unsigned p;

    for(n = numbers, p = picks; p>0; n--,p--)
        result = result * n / p;
    return result*megaNumber;
}
