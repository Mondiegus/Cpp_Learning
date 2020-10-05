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
    Queue line2 (qs) ; //w kolejce może stanąć c/o qs klientów
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
    long served2 = 0;
    long sum_line = 0;
    int wait_time = 0;
    int wait_time2 = 0;
    long line_wait = 0;
    long line_wait2 = 0;
    // dane nowego klienta
    // czas do zwolnienia bankomatu
    // łączny czas oczekiwania
    for (int cycle = 0; cycle < cyclelimit; cycle++)
    {
        if (newcustomer (min_per_cust))
        {
            if(line.queuecount() > line2.queuecount())
            {
                if (line2.isfull())
                    turnaways++;   
                else
                {
                    customers++;
                    temp.set(cycle); // czas przybycia = nr cyklu   
                    line2.enqueue(temp) ; // dołączenie klienta do kolejki
                }
            }
            else
            {
                if (line.isfull())
                    turnaways++;   
                else
                {
                    customers++;
                    temp.set(cycle); // czas przybycia = nr cyklu   
                    line.enqueue(temp) ; // dołączenie klienta do kolejki
                }
            }
        }
        if (wait_time <= 0 && !line.isempty())
        {
            line.dequeue(temp); //nast{
            wait_time = temp.ptime () ; //czas
            line_wait += cycle - temp.when();
            served++;
        }

        if (wait_time2 <= 0 && !line2.isempty())
        {
            line2.dequeue(temp); //nast{
            wait_time2 = temp.ptime () ; //czas
            line_wait2 += cycle - temp.when();
            served2++;
        }
        // następny do obsłużenia
        // czas obsługi = waittime
        if (wait_time > 0)
            wait_time--;
        if (wait_time2 > 0)
            wait_time2--;
        sum_line += line.queuecount();
        sum_line += line2.queuecount();
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
        cout << " średni czas oczekiwania 1. linii: " << (double) line_wait / served << " minut\n";
        cout << " średni czas oczekiwania 2. linii: " << (double) line_wait2 / served2 << " minut\n";
    }
    else
        cout << "Brak klientów!\n";

    cout << "Gotowe!\n";
    return 0;
}

bool newcustomer(double x)
{
    return (std::rand() * x / RAND_MAX < 1 ) ;
}