#include <iostream>
#include <cassert>
using namespace std;

// The following code calls a naive algorithm for computing a Fibonacci number.
//
// What to do:
// 1. Compile the following code and run it on an input "40" to check that it is slow.
//    You may also want to submit it to the grader to ensure that it gets the "time limit exceeded" message.
// 2. Implement the fibonacci_fast procedure.
// 3. Remove the line that prints the result of the naive algorithm, comment the lines reading the input,
//    uncomment the line with a call to test_solution, compile the program, and run it.
//    This will ensure that your efficient algorithm returns the same as the naive one for small values of n.
// 4. If test_solution() reveals a bug in your implementation, debug it, fix it, and repeat step 3.
// 5. Remove the call to test_solution, uncomment the line with a call to fibonacci_fast (and the lines reading the input),
//    and submit it to the grader.

int fibonacci_naive(int n) {
    
    if (n <= 1)
        return n;

    return fibonacci_naive(n - 1) + fibonacci_naive(n - 2);
}

int main() 
 

{
    int n;
    cin >> n;
    if (n < 2)
    {
        cout << n ;
    }
    else
    {
        int feeb_arr[n];
        feeb_arr[0] = 0;
        feeb_arr[1] = 1;
        for (int i = 2; i <= n ; i ++)
        {
            feeb_arr[i] = feeb_arr[i-1] + feeb_arr[i-2];
        }
        cout<<feeb_arr[n];
    }
}

