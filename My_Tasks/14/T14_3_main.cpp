#include "T14_3.h"

const int SIZE = 5;

int main()
{
    using namespace std;
    QueueTp<Worker> queue;
    Worker temp;
    
    queue.enqueue(Worker("Janusz",123456789));
    queue.enqueue(Worker("Dariusz",111111111));
    queue.enqueue(Worker("Tadeusz",222222222));

    for( int i = 0; i < 3; i++)
    {
        queue.dequeue(temp);
        temp.Data();
    }
    return 0;
}
