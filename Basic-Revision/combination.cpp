#include <iostream>
using namespace std;

int main()
{
    int n, r;
    int factorial(int);
    cout << "Enter n and r for the nCr: ";
    cin >> n >> r;
    cout << "The nCr is = " << (factorial(n)) / (factorial(n - r) * factorial(r));
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