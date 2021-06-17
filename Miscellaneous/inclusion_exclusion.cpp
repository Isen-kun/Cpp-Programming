#include <iostream>
using namespace std;

int main()
{
    int n, a, b;
    cout << "Enter the number: ";
    cin >> n;
    cout << "Enter two factors: ";
    cin >> a >> b;

    int c1 = n / a, c2 = n / b, c3 = n / (a * b);
    cout << "The number of numbers divisible by 1st factor or 2nd factor are: " << c1 + c2 - c3;
    return 0;
}