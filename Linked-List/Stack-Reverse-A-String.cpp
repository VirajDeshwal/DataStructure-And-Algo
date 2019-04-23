#include"StackReverseString.hpp"



int main()
{
    char C[51];
    cout<<"Enter the string: "<<endl;
    fgets(C, 51, stdin);
    Reverse(C, strlen(C));
    cout<<C<<"\n\n\n";

    return 0;
}

