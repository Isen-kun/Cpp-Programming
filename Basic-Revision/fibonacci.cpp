#include <iostream>
using namespace std;

int main()
{
    int n;
    void fibonacci(int);
    cout << "Enter the terms of fibonacci to be printed: ";
    cin >> n;
    fibonacci(n);
    return 0;
}

void fibonacci(int num)
{
    int t1 = 0, t2 = 1, s;
    for (int i = 0; i < num; i++)
    {
        cout << t1 << " ";
        s = t1 + t2;
        t1 = t2;
        t2 = s;
    }
}