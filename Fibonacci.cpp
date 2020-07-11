
#include <iostream>
using namespace std;

int fibonacci(int n)
{
    //define base case
    if (n == 0)
        return 0;
    if (n == 1)
        return 1;
    //formula for Fibonacci numbers
    int fib1 = fibonacci(n - 1);
    int fib2 = fibonacci(n - 2);
    return fib1 + fib2;
}

int main()
{
    cout << fibonacci(20) << endl; // 55, 10th Fibonacci number
    return 0;
}