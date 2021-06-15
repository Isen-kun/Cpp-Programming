#include <iostream>
using namespace std;

int sorted(int arr[], int n)
{
    if (n == 1)
    {
        return 1;
    }
    int restArr = sorted(arr + 1, n - 1);
    if (arr[0] <= arr[1] && restArr)
    {
        return 1;
    }
}

int main()
{
    int n;
    cout << "Enter the length of the array: ";
    cin >> n;
    int arr[n];
    cout << "Enter the elements of the array: ";
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    if (sorted(arr, n) == 1)
    {
        cout << "The array is sorted.";
    }
    else
    {
        cout << "The array is NOT sorted.";
    }

    return 0;
}