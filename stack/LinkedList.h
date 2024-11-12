
#ifndef LINKEDLIST_H
#define LINKEDLIST_H

#include <iostream>


    
typedef struct Node
{
    int data;       
    Node* next;     
    Node* head;

} Node;

void add(int value);    
int remove();
void display();



