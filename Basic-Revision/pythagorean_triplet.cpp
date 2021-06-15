#include <iostream>
#include <math.h>
using namespace std;

int main()
{
    int a, b, c;
    cout << "Enter three numbers: ";
    cin >> a >> b >> c;
    if (pow(a, 2) == pow(b, 2) + pow(c, 2) || pow(b, 2) == pow(a, 2) + pow(c, 2) || pow(c, 2) == pow(a, 2) + pow(b, 2))
    {
        cout << "The three numbers are Pythagorean Triplets.";
    }
    else
    {
        cout << "The three numbers are NOT Pythagorean Triplets.";
    }

    return 0;
}