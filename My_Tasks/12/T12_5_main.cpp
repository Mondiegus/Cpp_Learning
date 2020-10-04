// kompilować z plikiem ąueue.epp
#include <iostream>
#include <cstdlib> //funkcje rand() isrand()
#include <ctime> //funkcja timet)
#include "T12_5.h"

const int MIN_PER_HR = 60;
bool newcustomer(double x) ; //czy dotarł już następny klient?
int main()
{
    using std::cin;
    using std::cout;
    using std::endl;
    using std::ios_base;

    //przygotowanie symulacji
    std::srand(std::time(0) ) ; // inicjalizacja generatora liczb losowych
    cout << "Studium przypadku: bankomat Banku Stu Kas\n";
    cout << "Podaj maksymalną długość kolejki: ";
    int qs;
    cin >> qs;
    Queue line (qs) ; //w kolejce może stanąć c/o qs klientów
    cout << "Podaj symulowany czas (w godzinach): ";
    int hours; // liczba godzin symulacji
    cin >> hours;
    //symulacja z jednominutową rozdzielczością
    long cyclelimit = MIN_PER_HR * hours; //liczba cykli
    cout << "Podaj średnią liczbę klientów na godzinę: ";
    double perhour; //średnia liczba nowych klientów na godzinę
    cin >> perhour;
    double min_per_cust; //średni odstęp czasowy pomiędzy klientami
    min_per_cust = MIN_PER_HR / perhour;
    Item temp;
    long turnaways = 0;
    long customers = 0;
    long served = 0;
    long sum_line = 0;
    int wait_time = 0;
    long line_wait = 0;
    // dane nowego klienta
    // czas do zwolnienia bankomatu
    // łączny czas oczekiwania
    for (int cycle = 0; cycle < cyclelimit; cycle++)
    {
        if (newcustomer (min_per_cust))
        {
            if (line.isfull ())
                turnaways++;
            else
            {
                customers++;
                temp.set(cycle); // czas przybycia = nr cyklu   
                line.enqueue(temp) ; // dołączenie klienta do kolejki
            }
        }
        if (wait_time <= 0 && ! line.isempty())
        {
            line.dequeue(temp); //nast{
            wait_time = temp . ptime () ; //czas
            line_wait += cycle - temp.when();
            served++;
        }
        // następny do obsłużenia
        // czas obsługi = waittime
        if (wait_time > 0)
            wait_time--;
        sum_line += line.queuecount();
    }
    //zestawienie wyników
    if (customers > 0)
    {
        cout << " liczba klientów przyjętych: " << customers << endl;
        cout << "liczba klientów obsłużonych: " << served << endl;
        cout << " liczba klientów odesłanych: " << turnaways << endl;
        cout << " średnia długość kolejki: ";
        cout.precision(2);
        cout.setf(ios_base::fixed, ios_base::floatfield) ;
        cout.setf(ios_base::showpoint);
        cout << (double) sum_line / cyclelimit << endl;
        cout << " średni czas oczekiwania: " << (double) line_wait / served << " minut\n";
    }
    else
        cout << "Brak klientów!\n";

    cout << "Gotowe!\n";
    return 0;
}