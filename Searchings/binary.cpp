#include <iostream>
using namespace std;

int main()
{
    int n, key;
    cout << "Enter the number of elements of the array: ";
    cin >> n;
    int arr[n];
    cout << "Enter the elements of the array in ORDER: ";
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    cout << "Enter the key to be searched for: ";
    cin >> key;

    int beg = 0, end = n, mid, index = -1;
    for (; beg <= end;)
    {
        mid = (beg + end) / 2;
        if (arr[mid] == key)
        {
            index = mid;
            break;
        }
        if (arr[mid] > key)
        {
            end = mid - 1;
        }
        else
        {
            beg = mid + 1;
        }
    }

    if (index != -1)
    {
        cout << "The key was found in array at index = " << index;
    }
    else
    {
        cout << "The key was not found in the array.";
    }
    return 0;
}