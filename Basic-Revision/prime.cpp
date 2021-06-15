#include <iostream>
#include <cmath>
using namespace std;

int main()
{
    int i, num;
    cout << "Enter a number: ";
    cin >> num;

    if (num == 1)
    {
        cout << "The number is NOT a prime number.";
        return 0;
    }

    for (i = 2; i <= sqrt(num); i++)
    {
        if (num % i == 0)
        {
            cout << "The number is NOT a prime number.";
            break;
        }
    }
    if (i > sqrt(num))
    {
        cout << "The number is a prime number";
    }

    return 0;
}