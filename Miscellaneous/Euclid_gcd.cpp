#include <iostream>
using namespace std;

int main()
{
    int n1, n2;
    cout << "Enter the two numbers: ";
    cin >> n1 >> n2;

    for (int rem; n2 != 0;)
    {
        rem = n1 % n2;
        n1 = n2;
        n2 = rem;
    }

    cout << "The GCD is: " << n1;
    return 0;
}