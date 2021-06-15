#include <iostream>
#include <math.h>
using namespace std;

int main()
{
    int n1, n2;
    int prime(int);
    cout << "Enter the two numbers between which all prime numbers are to be found: " << endl;
    cin >> n1 >> n2;

    for (int i = n1; i < n2; i++)
    {
        if (prime(i))
        {
            cout << i << " ";
        }
        else
        {
            cout << " ";
        }
    }
    return 0;
}

int prime(int num)
{
    if (num == 1)
    {
        return 0;
    }
    for (int i = 2; i <= sqrt(num); i++)
    {
        if (num % i == 0)
        {
            return 0;
        }
    }
    return 1;
}