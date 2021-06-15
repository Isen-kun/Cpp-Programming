//LOGIC - take the first element from the unsorted part of the array and place it appropriately
//in the sorted part of the array by moving bigger elements to the right

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

    int i, j;
    for (i = 1; i < n; i++)
    {
        int current = arr[i];
        for (j = i - 1; j >= 0 && current < arr[j]; j--)
        {
            arr[j + 1] = arr[j];
        }
        arr[j + 1] = current;
    }

    cout << "The Insertion Sorted array is: ";
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }

    return 0;
}