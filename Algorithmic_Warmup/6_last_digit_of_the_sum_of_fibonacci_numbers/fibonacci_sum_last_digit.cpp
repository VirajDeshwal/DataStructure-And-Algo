#include <iostream>
using namespace std;
// Find the last digit of a sum of the first n Fibonacci
// numbers. Playing around with small values of n shows that
// the nth sum is equal to F(n+2)-1.

// We previously calculated the last number by adding numbers
// modulo 10, but adding 10^18 numbers will take too long.
// Instead, we can use n mod 10 to find the last digit and
// use program 5. The pisano period for m = 10 is 60.



int main()
{
    long long n;
    cin >> n;
    if (n < 2)
    {
        cout << n ;
    }
    else
    {   int temp = 1 ;
        long long i = 2;
        int t1 = 0 , t2 = 1 , t3;
        while( i <= n){
            t3 = t2 + t1 ;
            temp += (t3%10);
            i++;
            if(i > n) break;
            t1 = t3 + t2;
            temp += (t1%10);
            i++;
            if(i > n) break;
            t2 = t1 + t3;
            temp += (t2%10);
            i++;
            if(i > n) break;
            cout<<i<<" ";
        }
        cout<<temp % 10;
    }
}