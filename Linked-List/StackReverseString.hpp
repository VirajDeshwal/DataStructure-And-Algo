#include<iostream>
#include <stack>
using namespace std;

void Reverse(char C[], int n);


void Reverse(char C[], int n)
{
     stack<char> S;

    //For PUSH
    for (int i=0; i<n; i++)
    {
       S.push(C[i]); 
    }

    //FOR POP
    for (int i=0; i<n; i++)
    {
        C[i] = S.top();
        S.pop();
    }
}
