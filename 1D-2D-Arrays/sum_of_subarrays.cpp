// Given an array a[] of size n.Output sum of each sub array of the given array.

#include <iostream>
using namespace std;

int main()
{
    int n;
    cout << "Enter the no of elements of the array: ";
    cin >> n;
    int arr[n];
    cout << "Enter the elements of the array: ";
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    cout << "The sum of all sub arrays is:" << endl;
    for (int i = 0; i < n; i++)
    {
        int sum = 0;
        for (int j = i; j < n; j++)
        {
            sum += arr[j];
            cout << sum << " ";
        }
    }

    return 0;
}