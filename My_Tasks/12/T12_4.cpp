#include "T12_4.h"

Stack::Stack(int n)
{
    pitems = new Item[n];
    size = n;
    top = 0;
}

Stack::Stack(const Stack & st)
{
    top = st.top;
    size = st.size;
    pitems = new Item[st.size];

    for(int i = 0; i<top; i++)
    {
        pitems[i] = st.pitems[i];
    }
}

Stack::~Stack()
{
    delete [] pitems;
}

bool Stack::isempty() const
{
    return top == 0;
}

bool Stack::isfull() const
{
    return top == size;
}

bool Stack::push(const Item & item)
{
    bool ret_val = false;

    if(top < size)
    {
        pitems[top++] = item;
        size++;
        ret_val = true;
    }

    return ret_val;
}

bool Stack::pop(Item & item)
{
    bool ret_val = false;

    if(top > 0)
    {
        item = pitems[--top];
        size--;
        ret_val = true;
    }
    
    return ret_val;
}

Stack & Stack::operator=(const Stack & st)
{
    if (this == &st)
        return *this;

    delete[] pitems;

    top = st.top;
    size = st.size;
    pitems = new Item[size];

    for(int i = 0; i<top; i++)
    {
        pitems[i] = (st.pitems)[i];
    }

    return *this;
}
