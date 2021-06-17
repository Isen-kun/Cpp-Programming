//To set the bit to 0 of a specific position of a number.

#include <iostream>
using namespace std;

int main()
{
    int n, pos;
    cout << "Enter the number: ";
    cin >> n;
    cout << "Enter the position of the bit to clear: ";
    cin >> pos;

    cout << (n & (~(1 << pos)));
    return 0;
}