#ifndef QUEUE_H_
#define QUEUE_H_
#include <string>
#include <iostream>
#include <cstdlib>

using namespace std;

class Worker
{
    private :
        std::string fullname;
        long id;
        
    public :
        Worker() : fullname("brak"), id(0L) {}
        Worker(const std::string & s, long n) : fullname(s), id(n) {}
        ~Worker() {};
        void Data() const;
        void Get();
};

template <typename Item>
class QueueTp
    {
    private:
        // Node to definicja zagnieżdżona klasy, lokalna względem tej klasy
        struct Node { Item item; struct Node * next;};
        enum {Q_SIZE = 10};
        Node * front; //wskaźnik czoła kolejki
        Node * rear; // wskaźnik ogona kolejki
        int items; //bieżąca liczba elementów kolejki
        const int qsize; //maksymalna liczba elementów kolejki
        QueueTp(const QueueTp & q) : qsize(0) { };
        QueueTp  operator=(const QueueTp & q) { return *this;};

    public:
        QueueTp(int qs = Q_SIZE);
        ~QueueTp();
        bool isempty() const;
        bool isfull() const;
        int queuecount() const;
        bool enqueue (const Item & item);
        bool dequeue (Item & item);
};

template <typename Item>
QueueTp<Item>::QueueTp(int qs) : qsize(qs)
{
    front = rear = NULL;
    items = 0;
}

template <typename Item>
QueueTp<Item>::~QueueTp()
{
    Node * temp;
    while (front != NULL)
    {
        temp = front;
        front = front->next; 
        delete temp; // zwolnienie elementu spod zapamiętanego adresu
    }
}  

template <typename Item>
bool QueueTp<Item>::isempty() const
{
    return items == 0;
}

template <typename Item>
bool QueueTp<Item>::isfull() const
{
    return items == qsize;
}

template <typename Item>
int QueueTp<Item>::queuecount() const
{
    return items;
}

template <typename Item>
bool QueueTp<Item>::enqueue(const Item & item)
{
    if (isfull())
        return false;

    Node * add = new Node; //utworzenie węzła
    if (add == NULL)
        return false; //brak możliwości przydziału elementu

    add->item = item; //ustawienie wskaźników węzłów
    add->next = NULL;
    items++;

    if (front == NULL) //jeśli kolejka jest pusta,
        front = add; //umieść element na czele listy
    else
        rear->next = add; //w przeciwnym przypadku dołącz do końca

    rear = add; //rear wskazuje teraz nowy węzeł

    return true;
}

template <typename Item>
bool QueueTp<Item>::dequeue(Item & item)
{
    if (front == NULL)
        return false;

    item = front->item; //skopiowanie do item pierwszego elementu z kolejki
    items--;
    Node * temp = front; //zachowanie położenia pierwszego elementu
    front = front->next; //przestawienie wskaźnika front na następny element
    delete temp; // usunięcie dotychczasowego pierwszego elementu

    if (items == 0)
      rear = NULL;

    return true;
}

#endif