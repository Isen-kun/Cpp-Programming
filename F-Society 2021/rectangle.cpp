#include <iostream>
using namespace std;

long long int fact(int n)
{
    long long int f = 1;
    for (unsigned int i = n; i > 0; i--)
    {
        f = (static_cast<long long int>(f) * i) % 100000000;
    }
    return f;
}

long long int Combination(unsigned int n, unsigned int r)
{
    return (fact(n) / (fact(r) * fact(n - r)));
}

int main()
{
    unsigned int n, m;
    cin >> n >> m;

    cout << (Combination(n + 1, 2) * Combination(m + 1, 2));
    return 0;
}