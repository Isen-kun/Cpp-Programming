#include <iostream>
using namespace std;

int main()
{
    int n;
    void prime_sieve(int);
    void prime_factors(int);
    cout << "Enter the ending position: ";
    cin >> n;
    prime_sieve(n);
    prime_factors(n);

    return 0;
}

void prime_sieve(int n)
{
    int arr[n] = {0};

    for (int i = 2; i <= n; i++)
    {
        if (arr[i] == 0)
        {
            for (int j = i * i; j <= n; j += i)
            {
                arr[j] = 1;
            }
        }
    }
    cout << "\nAll the prime numbers in range are: ";
    for (int i = 2; i <= n; i++)
    {
        if (arr[i] == 0)
        {
            cout << i << " ";
        }
    }
}

void prime_factors(int n)
{
    int spf[n] = {0}; //smallest prime factors
    for (int i = 2; i <= n; i++)
    {
        spf[i] = i;
    }
    for (int i = 2; i <= n; i++)
    {
        if (spf[i] == i)
        {
            for (int j = i * i; j <= n; j += i)
            {
                if (spf[j] == j)
                {
                    spf[j] = i;
                }
            }
        }
    }
    cout << "\nAll the prime factors of the number are: ";
    while (n != 1)
    {
        cout << spf[n] << " ";
        n /= spf[n];
    }
}