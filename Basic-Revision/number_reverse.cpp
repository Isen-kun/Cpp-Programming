#include <iostream>
using namespace std;

int main()
{
    int num, rev = 0;
    cout << "Enter a number: ";
    cin >> num;

    for (; num != 0; num /= 10)
    {
        rev = (rev * 10) + (num % 10);
    }

    cout << "The reversed number is: " << rev;
    return 0;
}