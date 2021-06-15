#include <iostream>
using namespace std;

int power(int n, int p)
{
    if (p == 0)
    {
        return 1;
    }
    int prevPow = power(n, p - 1);
    return n * prevPow;
}

int main()
{
    int n, p;
    cout << "Enter the value of n and p: ";
    cin >> n >> p;
    cout << "N raised to the power p is: " << power(n, p);

    return 0;
}