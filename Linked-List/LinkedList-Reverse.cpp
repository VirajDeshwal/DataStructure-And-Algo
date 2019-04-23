#include<stdio.h>
#include<stdlib.h>
#include<iostream>
using namespace std;

struct Node
{
    int data; //To store the value of the nth  node.
    Node* next; // hold the address of the n+1 node.

};


Node* Insert(Node* head, int data);
Node* Reverse(Node* head);
void Print(Node* head);




int main()
{
    Node* head = NULL; //local variable
    head  = Insert(head, 2);
    head  = Insert(head, 4);
    head  = Insert(head, 6);
    head  = Insert(head, 8);
    Print(head);
    head = Reverse(head);
    Print(head);

    return 0;
}


Node* Insert(Node* head, int data)
{
    //temp variable for Node pointer 
    Node* temp = (Node*) malloc(sizeof(struct Node));  // Malloc is a void type cast so it need a return type.

    //derefrencing the pointer Node to access the fields of pointer Node.
    //(*temp).data = x; //Inserting the value into Node.

    //alternative syntax 
    temp->data = data; //using this pointer 
    temp->next = NULL; //initial empty list 

   // if (head!=NULL)   //if head is not empty, then it will hold the address of next node.
     Node* temp1 = head;
     temp1 = temp->next; 
     temp1->next=temp; // And head will hold the curent(temp value ).

     return head;
}






Node* Reverse(Node* head)
{
    Node *current, *previous, *next;                                 //current->next = link field to n+1 node in the link list.
    previous = NULL;                                               // next = local pointer variable.                       
    current = head; //Head Node of the Link-List.
    while(current!=NULL)
    {
    next = current->next; //local variable storing the index of n+1 node.
    previous = current;  //prev storing nth node index
    current = next;      // current storing the n+1 index for next operation .

    }
    head = previous; //Once we will exist the loop we will store the value of prev(n-1)th term to head.
    return head;
}


void Print(Node* head)
{
    while (head!= NULL)
    {
        cout<<head->data;
        head = head->next;
    }
}