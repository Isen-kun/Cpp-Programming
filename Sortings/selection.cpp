//LOGIC = Take the smallest element in the unsorted part of array and swap it with the first element
//of the usorted part and make it the part of the sorted part of the array.

#include <iostream>
using namespace std;

int main()
{
    int n;
    cout << "Enter the number of elements of the array: ";
    cin >> n;
    int arr[n];
    cout << "Enter the array elements: ";
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    int temp, minNo, minInd;
    for (int i = 0; i < n; i++)
    {
        minNo = arr[i + 1];
        for (int j = i; j < n; j++)
        {
            if (arr[j] < minNo)
            {
                minNo = arr[j];
                minInd = j;
            }
        }
        temp = arr[i];
        arr[i] = arr[minInd];
        arr[minInd] = temp;
    }

    cout << "The Selection Sorted array is: ";
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
    return 0;
}