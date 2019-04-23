#include<iostream>
#include<stdio.h>
#include<stdlib.h>

using namespace std;
struct Node
{
    int data;
    Node* next;
    Node* prev;
};

Node* head; //global variable for head pointing to head node.

//DEFINING THE FUNCTIONS
void InsertAtHead(int x);
void Print();
void ReversePrint();

int main()
{
head  = NULL; //List is empty 
InsertAtHead(2);
Print();
ReversePrint();

InsertAtHead(4);
Print();
ReversePrint();

InsertAtHead(6);
Print();
ReversePrint();


}


Node* GetNewNode(int x)
{

    //Node* temp = (Node*)malloc(sizeof(struct Node)); //in C

    // In C++ we will use "new" operator

  
     Node* newNode =  new Node();  /* This is allocating dynamic memory in heap */
     newNode->data = x;
     newNode->next = NULL;
     newNode->prev = NULL;

     return newNode;
}

//DEFINITION OF THE FUNCTIONS
void InsertAtHead(int x)
{
    Node* newNode  = GetNewNode(x);
    if(head ==NULL)
    {
        head = newNode;  //Exit condition
        return ;
    }

    head->prev = newNode; //creating a new node with the address of head (it will be headNode)
    newNode->next = head; //Holding the foward node address;
    head = newNode; //creating a new node from current node.

}

void Print()
{
    Node* temp = head;
    cout<<"Forward: ";
    while(temp!=NULL) 
    {
        cout<<temp->data; //print the value of current node
        temp = temp->next; //move to the next node
        cout<<"  ";
    }
    cout<<"\n";
}

void ReversePrint()
{
    Node* temp = head;
    if(temp == NULL) //Exit condition
    {
        return;
    }
while(temp->next != NULL)
{
    temp = temp->next; //Going to the end Node.
}
//Traversing backward using prev pointer
cout<<"Reverse: ";
while(temp!=NULL)
{
    cout<<temp->data; //printing the data after reaching Node end.
    temp = temp->prev; //Moving backward from end node.
    cout<<"  ";
}
cout<<"\n";
}