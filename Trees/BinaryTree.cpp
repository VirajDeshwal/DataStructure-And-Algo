#include<stdlib.h>
#include <iostream>
using namespace std;

struct BstNode 
{
    int data;
    BstNode* left;
    BstNode* right;

};
//Defining a function 

BstNode* GetNewNode(BstNode* root, int data);
BstNode* Insert(BstNode* root, int data);
bool Search(BstNode* root, int data);
BstNode* root = NULL;

int main()
{
    int number;
    BstNode* root = NULL; //creating an empty tree
root =  Insert(root, 15);
root =  Insert(root, 10);
root =  Insert(root, 50);
root =  Insert(root, 33);
root =  Insert(root, 67);
root =  Insert(root, 43);

cout<<"\nENter the number be searched\n";
cin>>number;
if(Search(root, number)== true) 
{
    cout<<"\nFound!\n";
}
else
{
    cout<<"\nNot Found!\n";
}
return 0;
}




BstNode* GetNewNode(int data)
{
    BstNode* newNode = new BstNode();

    newNode->data = data;
    newNode->left = newNode->right = NULL;
    return newNode;


}


BstNode* Insert(BstNode* root, int data)
{
    if(root==NULL)
    {
        root = GetNewNode(data); /*If the tree is empty we can create a node and set it as a root.
                                    For, example - Insert(0, 25). Here root =0; data =25.
                                    root is null so make it root node*/
        
    }
    /* For all other operations Insert the node to the left if smaller than the current node. 
            Else, Enter to the right*/

    else if(data<= root->data)
    {
        /* We will move to left node*/
        root->left = Insert(root->left, data);
    }
    /* Now if the data is greater than the current node
        MOVE TO RIGHT */
    else
    
        {
            root->right = Insert(root->right, data);
        } 
    return root;
}
    


bool Search(BstNode* root, int data)
{
    if(root==NULL) return false;
    else if(root->data ==data) return true;
    /*If the upcoming node is less the the root node.
    GO TO LEFT NODE */
    else if (data<=root->data) return Search(root->left, data);

    /* If the upcoming node is greater than root node. 
        GO TO RIGHT NODE */
        else return Search(root->right, data);
    
}