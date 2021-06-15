#include <iostream>
using namespace std;

int main()
{
    int n;
    int factorial(int);
    int recursive_factorial(int);
    cout << "Enter the number whose factorial is to be caculated: ";
    cin >> n;
    cout << factorial(n);
    return 0;
}

int factorial(int num)
{
    int m = 1;
    for (int i = 1; i <= num; i++)
    {
        m *= i;
    }
    return m;
}

// complete this later
int recursive_factorial(int num)
{
    if (num == 1)
    {
        return;
    }
    recursive_factorial(num - 1);
}