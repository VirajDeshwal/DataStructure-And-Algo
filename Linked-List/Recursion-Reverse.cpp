#include<stdlib.h>
#include <iostream>
using namespace std;

struct Node
{
    /* data */
    int data;
    Node* next;
};

Node* head; //Global head variable

void Reverse(Node* p)
{
    if(p->next == NULL)
    {
        head = p;
        return;
    }

    Reverse(p->next); //Go to the next address of the node. In forward direction
   // Node* q = p->next; 
    //q->next = p;

    p->next->next = p;  /*It is same as the above two lines. 
                        Instead of storing p->next into q and swapping q->next into p.
                        */
   
   
    p->next = NULL;

}
