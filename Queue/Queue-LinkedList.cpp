#include <stdlib.h>
#include <iostream>

using namespace std;

struct Node 
{
    /* data */
    int data;
    Node* next;
};

//Defining the functions
void Enqueue(int x);
void Dequeue();

int main()
{
    Enqueue(2);
    Enqueue(4);
    Enqueue(6);
    Dequeue();
}
// Defining global variable for HEAD and TAIL

Node* front = NULL;
Node* rear = NULL;
 

 //Definition of the Functions
void Enqueue(int x)
{
    Node* temp = new Node();
    temp->data = x;
    temp->next = NULL;

    // For the single block
    if(front ==NULL && rear ==NULL)
    {
        front=rear=temp;
        cout<<"Queue is empty";
        return ;
    }
    //For all other conditions
//will build the link of N-1 and N-2

    rear->next = temp;
    //Rear will hold the value of newly created node.
    rear = temp;
}

void Dequeue()
{
    Node* temp = front;
    if(front ==NULL)
    {
        cout<<"Queue is not Found.";
        return;

    }
    if(front==rear)
    {
        front=rear=NULL;
    }
    else
    {
        front = front->next;
        delete(temp);
    }
}