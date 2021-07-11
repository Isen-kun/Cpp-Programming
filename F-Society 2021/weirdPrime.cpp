#include <iostream>
using namespace std;

bool isPrime(int k)
{
    if (k == 1 || k == 0)
    {
        return false;
    }
    for (int i = 2; i <= k / 2; i++)
    {
        if (k % i == 0)
        {
            return false;
        }
    }
    return true;
}

bool isDigitsPrime(int k)
{
    for (; k > 0; k /= 10)
    {
        if (!isPrime(k % 10))
        {
            return false;
        }
    }
    return true;
}

int main()
{
    int n;
    cin >> n;
    int series[100];
    for (int i = 1, j = 0; j < 100; i++)
    {
        if (isDigitsPrime(i))
        {
            series[j++] = i;
        }
    }

    cout << series[n - 1];

    return 0;
}