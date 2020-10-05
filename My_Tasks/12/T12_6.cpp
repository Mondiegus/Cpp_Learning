// queue.cpp — implementacje metod klas Queue i Customer
#include "T12_5.h"
#include <cstdlib>

Queue::Queue(int qs) : qsize(qs)
{
    front = rear = NULL;
    items = 0;
}

Queue::~Queue()
{
    Node * temp;
    while (front != NULL)
    {
        temp = front;
        front = front->next; 
        delete temp; // zwolnienie elementu spod zapamiętanego adresu
    }
}  

bool Queue :: isempty() const
{
    return items == 0;
}

bool Queue::isfull() const
{
    return items == qsize;
}

int Queue::queuecount() const
{
    return items;
}
// dodaje element do kolejki
bool Queue::enqueue(const Item & item)
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
// kopiuje element czołowy kolejki do argumentu wywołania i usuwa go z kolejki
bool Queue::dequeue(Item & item)
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

void Customer::set(long when)
{
    processtime = std::rand() % 3 + 1 ;
    arrive = when;
}