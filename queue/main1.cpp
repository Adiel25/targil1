#include "queue.cpp"

int main()
{
    int option;
    int size;
    int newValue;
    Queue* q = new Queue;
    while (option != 7)
    {
        std::cout << "choose an option:" << std::endl;
        std::cout << "\n1)Initializing queue" << std::endl;
        std::cout << "\n2)Clearing queue" << std::endl;
        std::cout << "\n3)enqueue" << std::endl;
        std::cout << "\n4)is queue full" << std::endl;
        std::cout << "\n5)is queue empty" << std::endl;
        std::cout << "\n6)dequeue" << std::endl;
        std::cout << "\n7)exit" << std::endl;

        cin >> option;

        if (option == 1)
        {
            std::cout << "Enter size of queue" << std::endl;
            cin >> size;
            q->size_queue = size;
            initQueue(q, size);
        }
        if (option == 2)
        {
            cleanQueue(q);
        }
        if (option == 3)
        {
            std::cout << "Enter value" << std::endl;
            cin >> newValue;
            enqueue(q, newValue);
        }
        if (option == 4)
        {
            if (isFull(q))
            {
                std::cout << "the queue is full" << std::endl;
            }
            else
            {
                std::cout << "the queue is not full" << std::endl;
            }
        }
        if (option == 5)
        {
            if (isEmpty(q))
            {
                std::cout << "the queue is empty" << std::endl;
            }
            else
            {
                std::cout << "the queue is not empty" << std::endl;
            }
        }
        if (option == 6)
        {
            dequeue(q);
        }
    }


}