//To update the bit to 0 or 1 of a specific position of a number.

#include <iostream>
using namespace std;

int main()
{
    int n, pos, up;
    cout << "Enter the number: ";
    cin >> n;
    cout << "Enter the position of the bit to set: ";
    cin >> pos;
    cout << "Enter the updates bit: ";
    cin >> up;

    if (up)
    {
        cout << (n | (1 << pos));
    }
    else
    {
        cout << (n & (~(1 << pos)));
    }
    return 0;
}