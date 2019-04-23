#include <stdio.h>
#include <stdlib.h> 
#include<iostream>
using namespace std;

// Our linked list contains 3 blocks and will be defined below as 
// value|address




//[100]  --------> [2|100]     ------> [3|300]   ------>[4|NULL]

// Head -----> Address to the first node [200] -----> pointer to node ---> node*


//Defining the Linked List variable

struct Node{
    int data; //To store the value 
    Node* next; //Node pointer to hold the address of next node.
};

struct Node* head;   //To hold the address of first or head.

//Definition of the functions
void Insert(int x);
void Print();

int main()
{
    head = NULL; //Empty list in begining 
    
    int n; //For storing the indexes for the values
    int x; //For inserting a value in a linklist
    std::cout<<"How many numbers?\n";
    std::cin>>n;

    for (int i=0; i<n; i++)
    {
        std::cout<<"Enter the value:\n";
        std::cin>>x;
        Insert(x);
        Print();
    }
    return 0;
}

void Insert(int x)
{
    //temp variable for Node pointer 
    Node* temp = (Node*) malloc(sizeof(struct Node));  // Malloc is a void type cast so it need a return type.

    //derefrencing the pointer Node to access the fields of pointer Node.
    //(*temp).data = x; //Inserting the value into Node.

    //alternative syntax 
    temp->data = x; //using this pointer 
    temp->next = NULL; //initial empty list 

   // if (head!=NULL)   //if head is not empty, then it will hold the address of next node.
     temp->next = head; 
     head = temp; // And head will hold the curent(temp value ).

}

void Print()
{
    Node* temp = head ; //Using temp var to hold the value of head so that we should not modify the head.
    std::cout<<"The List is: ";

    while(temp!=NULL)
    {
        std::cout<<temp->data<<" "; //printing the value as long as list is not empty.
        temp = temp->next; //referencing the temp var to the next reference of the list.
    }
   std::cout<<"\n";
}