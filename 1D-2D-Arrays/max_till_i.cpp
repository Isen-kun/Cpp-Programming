//Given an array a[] of size n. For every i from 0 to n-1 output max(a[0],a[1]...a[n])

#include <iostream>
using namespace std;

int main()
{
    int n;
    cout << "Enter the no of elements in the array: ";
    cin >> n;
    int arr[n];
    cout << "Enter the elements of the array: ";
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    cout << "The max till every i is:" << endl;
    int mx = arr[0];
    for (int i = 0; i < n; i++)
    {
        mx = max(arr[i], mx);
        cout << mx << " ";
    }

    return 0;
}