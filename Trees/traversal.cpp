#include <queue>
#include<iostream>
using namespace std;

struct traversal //structure Node
{
    /* data */
    int data;
    traversal* left;
    traversal* right;
};

void LevelOrderTraversal(traversal* root)
{
    //Exit function
    if (root == NULL) return ;
    queue<traversal> Q;  //Defining an Queue object for the traversal Node.
    Q.push(root); //pushing the root node into the queue.

    while(!Q.empty())
    {
        traversal* current = Q.front();
        cout<<"The node is: "<<current->data<<" ";
        if(current->left != NULL) Q.push(current->left);
        if(current->right != NULL) Q.push (current->right);
        Q.pop();
    }
}


/* ____________________________________________________________________________________________*/

/* Depth First Search
    1. Pre-order
    2. In-order
    3. Post-order
    */

void Preorder(traversal* root)
{
    //Exit Condition
    if(root ==NULL) return;

    cout<<root->data;
    Preorder(root->left);
    Preorder(root->right);
}

void Inorder(traversal* root)
{
    //Exit condition
    if(root == NULL) return;
    Inorder(root->left);
    cout<<root->data;
    Inorder(root->right);
}

void Postorder(traversal* root)
{
    //Exit condition
    if(root == NULL) return;
    Postorder(root->left);
    Postorder(root->right);
    cout<<root->data;
}