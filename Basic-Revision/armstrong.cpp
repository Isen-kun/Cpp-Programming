#include <iostream>
using namespace std;

int main()
{
    int num, sum = 0;
    cout << "Enter a number: ";
    cin >> num;
    int n = num;

    for (int last; n != 0; n /= 10)
    {
        last = n % 10;
        sum += last * last * last;
    }

    if (num == sum)
    {
        cout << "Its an Armstrong number.";
    }
    else
    {
        cout << "Its NOT an Armstrong number.";
    }
    return 0;
}