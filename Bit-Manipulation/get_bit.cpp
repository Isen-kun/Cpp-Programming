//To print the bit of a specific position of a number.

#include <iostream>
using namespace std;

int main()
{
    int n, pos;
    cout << "Enter the number: ";
    cin >> n;
    cout << "Enter the position of the bit to get: ";
    cin >> pos;

    if (n & (1 << pos))
    {
        cout << 1;
    }
    else
    {
        cout << 0;
    }

    return 0;
}