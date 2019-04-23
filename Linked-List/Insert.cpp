//Linked List: Inserting a node at begining 
#include<stdio.h>
#include<stdlib.h>
#include<iostream>
using namespace std;


struct Node
{
    int data;
    Node* next;
};
//Definintion of the functions
void Insert(int data, int index);
void Print();
struct Node* head;
int main ()
{
head = NULL; //intial phase
Insert(2,1); // List:2
Insert(3,2); // List: 2,3
Insert(4,1); // List: 4,2,3
Insert(5,2); // List: 4,5,2,3
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