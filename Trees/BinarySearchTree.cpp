#include<stdlib.h>
#include<iostream>
using namespace std;


/* Recusrsion is not a good approach to check if 
    the given Binary Tree is a Binary Search Tree or not.
    As for each node we have to recursively make a call to 
    check the current node with all the upper nodes.*/

struct Node
{
    int data, MinValue, MaxValue;
    Node* left;
    Node* right;
    
};

//Defining the root node as global
Node* root = NULL;

//Defining the function 
bool IsBstUtil(Node* root, int MinValue, int MaxValue);
bool IsBinarySearchTree(Node* root);



int main ()
{
    /* Data */
    cout<<"Checking if the Binary Tree is a Binary Search Tree....\n";
    IsBinarySearchTree(root);
}


bool IsBstUtil(Node* root, int MinValue, int MaxValue)
{
    //Exit condition
    if(root == NULL) return true;

    if(root->data > MinValue
        &&root->data < MaxValue
         /*for left node lower bound will not change and the upper bound will be the data in current node */
        && IsBstUtil(root->left, MinValue, root->data) 
       
        /* For right node the upper bound will not change and the lower bound will be the data in 
        current node. */
        && IsBstUtil(root->right, root->data, MaxValue))

        return true;
    return false;
}

bool IsBinarySearchTree(Node* root)
{
    return IsBstUtil(root, INT_MAX , INT_MIN);
}