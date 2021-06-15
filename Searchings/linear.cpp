#include <iostream>
using namespace std;

int main()
{
    int n, key, ind = -1;
    cout << "Enter the number of elements of the array: ";
    cin >> n;
    int arr[n];
    cout << "Enter the elements in the array: ";
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    cout << "Enter the key to be searched in the array: ";
    cin >> key;
    for (int i = 0; i < n; i++)
    {
        if (arr[i] == key)
        {
            ind = i;
            break;
        }
    }
    if (ind != -1)
    {
        cout << "The key was found in array at index = " << ind;
    }
    else
    {
        cout << "The key was not found in the array.";
    }
    return 0;
}