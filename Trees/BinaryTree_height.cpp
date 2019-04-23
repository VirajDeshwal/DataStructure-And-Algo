#include<iostream>
using namespace std;

cout<<"Finding the height of a tree using recursive method";

struct Node
{
    int data;
    Node* left;
    Node* right;
};

Node* root = NULL; //Global root variable

//Defining the functions

int findHeight(Node* root);

int main()
{
/* Pass */
}

//Definition of the function
int findHeight(Node* root)
{
    //Exit condition
    if(root ==NULL)
    {
        cout<<"Error: Tree is Empty.\n";
        return -1;
        
    }
    return max(findHeight(root->left), findHeight(root->right))+1;
}
