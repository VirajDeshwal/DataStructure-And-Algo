#include<iostream>
using namespace std;

int const MAX_SIZE = 101;
int A[MAX_SIZE]; //Defining an array with max_size
int top = -1; //Initializing an empty top

void Push(int x);
void Pop();
int Top();
void IsEmpty();
void Print();

int main()
{
    Push(2); Print();
    Push(8); Print();
    Pop(); Print();
    Push (12); Print();
    Push (14); Print();
    Push (16); Print();
    Push (18); Print();
    Pop(); Print();
    
}


void Push(int x)
{
    if(top==MAX_SIZE-1)    //Exit condition
    {
        cout<<"Error: Stack overflow\n";
        return;
    }
    
    A[++top] = x; //Inserting an element into the stack
}

void Pop()
{
    if(top == -1)
    {
        cout<<"Error: No element found to pop.";
        return ;
    }
    top--;
}

int Top()
{
    return A[top];
}

void Print()
{
    cout<<"The Stack is: ";
    for(int i=0; i<=top; i++)
    {
        cout<<A[i]<<" ";

    }
    cout<<"\n";
}

void IsEmpty()
{
    if(top == -1)
    {
        cout<<"List is empty";
        return;
    }
}