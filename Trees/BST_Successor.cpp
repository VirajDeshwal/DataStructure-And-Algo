#include<iostream>
using namespace std;

struct Node 
{
    int data;
    Node* left;
    Node* right;
    Node* parent;
};

Node* root = NULL;

Node* GetSuccessor(Node* root, int data)
{
    // Search the node O(h)
    Node* current = Find(root, data);
    if(current == NULL) return NULL;

    //CASE 1: Node has right subtree
    if(current->right != NULL)
    {
        return Min(current->right);
    }

    //Case 2: No right tree
    else 
    {
        Node* successor = NULL;
        Node* ancestor = root;
        while(ancestor != current)
        {
            if (current->data < ancestor->data) //it is in pre-order
            {
                successor = ancestor;
                ancestor = ancestor->left;
                
            }
            else ancestor = ancestor->right;

        }
        return successor;

    }
}

Node* Min(Node* root) // time -> O(H)
{
    if(root == NULL) return NULL;
    while (root->left != NULL) root = root->left;
    return root;
}