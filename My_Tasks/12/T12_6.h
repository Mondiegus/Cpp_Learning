#ifndef QUEUE_H_
#define QUEUE_H_
class Customer
{
    private:
        long arrive; //czas dołączenia klienta do kolejki
        int processtime; //czas obsługi klienta

    public:
    Customer(){arrive=processtime=0;}
    void set(long when);
    long when() const {return arrive;};
    int ptime() const {return processtime;};
};

typedef Customer Item;
class Queue
    {
    private:
        // Node to definicja zagnieżdżona klasy, lokalna względem tej klasy
        struct Node { Item item; struct Node * next;};
        enum {Q_SIZE = 10};
        Node * front; //wskaźnik czoła kolejki
        Node * rear; // wskaźnik ogona kolejki
        int items; //bieżąca liczba elementów kolejki
        const int qsize; //maksymalna liczba elementów kolejki
        Queue(const Queue & q) : qsize(0) { };
        Queue  operator=(const Queue & q) { return *this;};

    public:
        Queue (int qs = Q_SIZE);
        ~Queue ();
        bool isempty() const;
        bool isfull() const;
        int queuecount() const;
        bool enqueue (const Item & item);
        bool dequeue (Item & item);
};
#endif