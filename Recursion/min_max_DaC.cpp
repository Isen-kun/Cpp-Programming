#include <iostream>
using namespace std;

int divideMin(int arr[], int n)
{
    if (n == 1)
    {
        return arr[0];
    }
    else if (n == 2)
    {
        return min(arr[0], arr[1]);
    }
    int prevMin = min(divideMin(arr + 1, n - 1), divideMin(arr, n - 2));
    return prevMin;
}

int divideMax(int arr[], int n)
{
    if (n == 1)
    {
        return arr[0];
    }
    else if (n == 2)
    {
        return max(arr[0], arr[1]);
    }
    int prevMax = max(divideMax(arr + 1, n - 1), divideMax(arr, n - 2));
    return prevMax;
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
    cout << "The minimum element of the array is = " << divideMin(arr, n) << endl;
    cout << "The maximum element of the array is = " << divideMax(arr, n) << endl;
}