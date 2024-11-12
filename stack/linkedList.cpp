
#include <iostream>
#include "LinkedList.h"

using namespace std;


void add(int value) 
{
    Node* newnode = new Node(); 
    newnode->data = value;
    newnode->next = newnode->head;            
    newnode->head = newnode;
}


int remove(Node* newnode) 
{
    if (newnode->head == NULL)
    {
        std::cout << "list is empty" << std::endl;
        return 0;
    }

    Node* temp = newnode->head;   
    newnode->head = newnode->head->next;   
    temp = NULL;         
}




