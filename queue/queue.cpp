

#include <iostream>
#include "../../Downloads/Queue.h"



using namespace std;

int main()
{
    
}
int dequeue(Queue* q)
{
    if (isEmpty(q))
    {
        std::cout << "the queue is empty" << std::endl;
    }
    else
    {
        if (q->back_queue == q->front_queue)
        {
            q->back_queue = -1;
            q->front_queue = -1;

        }
        else
        {
            q->front_queue++;
        }
    }
    return 0;
}
void initQueue(Queue* q, unsigned int size)
{
    q->array_queue = new int[size];
    
    q->back_queue = -1;
    q->front_queue = -1;
    
}
void cleanQueue(Queue* q)
{
    while (isEmpty(q)!=true)
    {
        dequeue(q);
    }
}

void enqueue(Queue* q, unsigned int newValue)
{
    if (q->back_queue == q->size_queue-1)
    {
        std::cout << "the queue is full" << std::endl;
    }
    else
    {
        if (q->front_queue == -1)
        {
            q->front_queue = 0;
        }
        q->back_queue++;
        q->array_queue[q->back_queue] = newValue;
    }
}
bool isEmpty(Queue* s)
{
    if (s->front_queue == -1 && s->back_queue == -1)
    {
        return true;
    }
    else
    {
        return false;
    }
}
bool isFull(Queue* s)
{
    if (s->front_queue == s->back_queue && s->front_queue != -1 && s->back_queue != -1)
    {
        return true;
    }
    else
    {
        return false;
    }
}