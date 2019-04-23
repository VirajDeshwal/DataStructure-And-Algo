#include<iostream>
using namespace std;

//Defining the Node Structure
struct BstNode
{
    int data;
    BstNode* left;
    BstNode* right;

};

BstNode* root = NULL;


//Defining the functions 
int findMin(BstNode* root);
int findMax(BstNode* root);



int main()
{
    /*data*/
    cout<<"Finding the Minimum and Maximum in a Sorted BST";
    return 0;

}


//Definition of the functions
int findMin(BstNode* root)
{

/*EXIT CONDITION*/
    if(root==NULL)
    {
        cout<<"Error: Tree is Empty.\n";
        return -1;
    }

    
        /* Go to left as long as possible to find the Min*/
    
    while(root->left != NULL)
        {
            root = root->left;
            return root->data;
        }
    

    
    /* If we want to use the recursion in order to find the Min.
        We can use the exit condition for recursion and call the recursion

        elif (root->left == NULL)
        {
            return root->data;
        }
        return findMin(root->left;
    */

}

int findMax(BstNode* root)
{
    /*EXIT CONDITION*/
    if(root ==NULL)
    {
        cout<<"ERROR: Tree is empty.\n";
        return -1;
    }
    //For all other conditions
    while(root->right != NULL)
    {
        root = root->right;
        return root->data;
    }
    
     /* If we want to use the recursion in order to find the Max.
        We can use the exit condition for recursion and call the recursion

        else if (root->right == NULL)
        {
            return root->data;
        }
        return findMax(root->right);
    */

}