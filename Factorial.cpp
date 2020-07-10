
#include <iostream>
using namespace std;

int factorial(int n)
{
    // base case
    if (n == 1)
        return 1;
    // reduce the problem and store states on the stack
    return n * factorial(n - 1);
}

// accumulator to track the result so far

int factorialAccumulator(int n, int accumulator)
{
    // define base case
    if (n == 1)
        return accumulator;
    // tail recursion
    return factorialAccumulator(n - 1, n * accumulator);
}

int main()
{
    //accumulator value is 1 at the beginning
    cout << factorialAccumulator(5, 1) << endl; // 120
    return 0;
}
