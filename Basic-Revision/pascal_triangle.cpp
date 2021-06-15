#include <iostream>
using namespace std;

int main()
{
    int n;
    int factorial(int);
    int combination(int, int);
    cout << "Enter the number of rows of Pascal's Triangle to be printed: ";
    cin >> n;

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j <= i; j++)
        {
            cout << combination(i, j) << " ";
        }
        cout << endl;
    }

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

int combination(int n, int r)
{
    return (factorial(n)) / (factorial(n - r) * factorial(r));
}
