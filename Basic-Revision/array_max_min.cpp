#include <iostream>
#include <limits.h>
using namespace std;

int main()
{
    int n, maxNo, minNo;
    cout << "Enter the size of the array: ";
    cin >> n;
    int arr[n];
    cout << "Enter the elements of the array: ";
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    // maxNo = arr[0];
    // minNo = arr[0];
    maxNo = INT_MIN;
    minNo = INT_MAX;
    for (int i = 0; i < n; i++)
    {
        // if (arr[i] > max)
        // {
        //     max = arr[i];
        // }
        // if (arr[i] < minNo)
        // {
        //     minNo = arr[i];
        // }
        maxNo = max(maxNo, arr[i]);
        minNo = min(minNo, arr[i]);
    }
    cout << "The minimum element in the array is = " << minNo << endl;
    cout << "The maximum element in the array is = " << maxNo << endl;
}
