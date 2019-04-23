#include<iostream>
#include<stdlib.h>
using namespace std;


//Defining the Structure 
struct Node 
{
    int data;
    Node* left;
    Node* right;
};

Node* root = NULL;


//Defining a function
bool IsBinarySearchTree(Node* root);
bool IsSubTreeLesser(Node* root, int value);
bool IsSubTreeGreater(Node* root, int value);

int main()
{
    /* Data */
    return 0;    
}

//Definition of the functions

bool IsBinarySearchTree(Node* root)
{
    Node* temp = new Node();

    //Exit condition
    if(root == NULL) return true;

    if(IsSubTreeGreater(root->left, root->data)  /* From root node going to left node */
        &&IsSubTreeGreater(root->right, root->data) /* From root node going to right node */
        &&IsBinarySearchTree(root->left) /* Checking the left node */
        &&IsBinarySearchTree(root->right)) /* checking the right node */

        return true;
    return false;

    


}

bool IsSubTreeLesser(Node* root, int value)
{
    if (root == NULL) return true;
    if(root->data <= value 
    && IsSubTreeLesser(root->left, value) /*using the recursive functions to check the given value w
                                            all the left node*/

    && IsSubTreeLesser(root->right, value)) /* using recusive call to check the given value with all the 
                                                right node.*/

        return true;
    else
    {
        return false;
    }
    
}

bool IsSubTreeGreater(Node* root, int value)
{
    //Exit Condition
    if(root == NULL) return true;
    if(root->data > value
        && IsSubTreeGreater(root->left, value)     /*using the recursive functions to check the given value w
                                            all the left node*/

                                                 /* using recusive call to check the given value with all the 
                                                right node.*/

        && IsSubTreeGreater(root->right, value))

        return true;
    else
    {
        return false;
    }
    
}