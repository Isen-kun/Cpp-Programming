#include <iostream>
using namespace std;

int factorial(int n)
{
    if (n == 1)
    {
        return 1;
    }
    int prevFac = factorial(n - 1);
    return n * prevFac;
}

int main()
{
    int n;
    cout << "Enter the value of n: ";
    cin >> n;
    cout << "The factorial of n is = " << factorial(n);

    return 0;
}