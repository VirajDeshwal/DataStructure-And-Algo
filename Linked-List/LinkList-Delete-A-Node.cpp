// Link List: Delete a Node
#include <stdio.h>
#include <stdlib.h>
#include<iostream>
using namespace std;
struct Node{
    int data ; // Variable for value 
    Node* next; //index of the next node
};

struct Node* head; //Head node

//Defining the functions 
void Insert(int data, int index);
void Print();
void Delete(int index);

int main()
{
    head = NULL; //empty list
    Insert(2,1);
    Insert(4,3);
    Insert(6,2);
    Insert(5,4);
    int index;

    std::cout<<"Enter the position to delete:\n";
    std::cin>>index;
    Delete(index);
    Print();
    return 0;
}


void Insert(int data, int index)
{
    Node* temp1 = new Node();
    temp1->data = data;
    temp1-> next = NULL;
    //If we are inserting a value in the begining of the list.
    if(index ==1)
    {
        temp1->next=head;
        head = temp1;
        return;
    }

    Node* temp2 = head; //Another node for all other cases. temp2 starting @head.
    for (int i=0;i<index-2; i++)
    {
        temp2 = temp2->next;

    }
    temp1->next = temp2->next; //temp1 next index will hold the value of temp2 next index
    temp2->next = temp1; //Now temp2 will replace itself with temp1 for next reference index.


}







//Definition of the functions
 void Delete(int index)
 {
     Node* temp1 = head; //Global Variable 
     if (index ==1)
     {
         head = temp1->next;  //Head now points to the second node.
         delete(temp1);
         return;
     }
     for(int i=0; i<index-2;i++) // refering to the previous node from the nth node.
     temp1 = temp1->next; //temp1 points to the node to be deleted.

     Node* temp2 = temp1->next; //nth node to be deleted 
     temp1->next = temp2->next; //n+1 node next address from previous node.
     delete(temp2); // delete the index from temp2 after swapping the value with temp1(nth term)

 }



void Print()
{
 Node* temp = head;
 while(temp!=NULL)
 {
     std::cout<<temp->data<<" "; // printing the self reference value from data variable.
     
     temp = temp->next; // temp will hold the value of next referenced index.

 }   
std::cout<<"\n";
}