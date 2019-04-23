#include<iostream>
using namespace std;

/* We can define the Edge list using a structure include pointer to the 
    address of the start vertex and end vertex. 
    And if the graph is weighted we can have one more variable to store the weight. 

Adj. Matrices are good is we have Dense graph.
.i.e. Edges = Square(Vertex)

For Sparse graph we will have O(V^2) memory cost . 

For sparse Graph - 
Adj. List Representation 

Array will be costly in order to graph a new connection due to creating a new array and coping the nodes 
from previous array. O(V^2).

Solution - We can use linked- list to store the nodes in a graph

*/

struct Node 
{
    int data;
    int weight;
    Node* next;
    
};

Node* A[8];   // An array to contain the vertices.