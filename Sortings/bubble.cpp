//LOGIC - Keep swapping two adjacent elements if they are in wrong order and push the bigesst element
//to the end

#include <iostream>
using namespace std;

int main()
{
    int n;
    cout << "Enter the number of elements of the array: ";
    cin >> n;
    int arr[n];
    cout << "Enter the elements of the array: ";
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    int temp;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n - 1 - i; j++)
        {
            if (arr[j] > arr[j + 1])
            {
                temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
    }

    cout << "The Bubble Sorted array is: ";
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
    return 0;
}