#include <iostream>
using namespace std;

int min(int arr[], int n)
{
    if (n == 1)
    {
        return arr[0];
    }
    int prevMin = min(arr, n - 1);
    return min(arr[n - 1], prevMin);
}

int max(int arr[], int n)
{
    if (n == 1)
    {
        return arr[0];
    }
    int prevMax = max(arr, n - 1);
    return max(arr[n - 1], prevMax);
}

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

    cout << "The minimum element of the array is = " << min(arr, n);
    cout << "The maximum element of the array is = " << max(arr, n);

    return 0;
}