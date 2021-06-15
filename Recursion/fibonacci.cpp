#include <iostream>
using namespace std;

int fib(int n)
{
    // if (n == 0)
    // {
    //     return 0;
    // }
    // else if (n == 1)
    // {
    //     return 1;
    // }
    if (n == 0 || n == 1)
    {
        return n;
    }
    int prevFib = fib(n - 1) + fib(n - 2);
    return prevFib;
}

int main()
{
    int n;
    cout << "Enter the nth term: ";
    cin >> n;
    cout << "The nth Fibonacci term is = " << fib(n);

    return 0;
}