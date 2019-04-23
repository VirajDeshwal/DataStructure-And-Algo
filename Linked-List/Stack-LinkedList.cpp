#include<iostream>
#include<stdlib.h>

using namespace std;

struct  Node
{
    /* data */
    int data;
    Node* link;
};

Node* top = NULL; //Declaring top as a global variable

//Declaring the funcitons
int Push(int x);
void Pop();


int main()
{
    Push(8); 
    Push (10); 
    Pop(); 
    Push (15); 
    Push (18); 
    Push (20); 

    return 0;

}


//Definition of the function
int Push(int x)
{
  
    Node* temp = new Node();     //Declaring a new variable to create a memory in heap.
    temp->data = x;    //Storing a value into dynammically annoted memory.
    temp->link = top;// Creating a link for the value stored in the memory from the existing node or top.
    top = temp; // Creating the link for the top to  hold the values of upcoming/ existing node.
    cout<<"The stack is: "<< temp->data<<" \n";
    
    

}

void Pop()
{
    Node* temp;
    if(top == NULL)
    {
        cout<<"Error: Stack is empty.";
        return;
        }
    
    temp = top; //Temp will hold the address of the head.
    top = top->link; // Head/ top will create the link with the top/ head node.
    delete(top); // Delete the head/top node.

}

