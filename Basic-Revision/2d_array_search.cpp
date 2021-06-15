#include <iostream>
#include <stdlib.h>
using namespace std;

int main()
{
    int n, m;
    cout << "Enter the no of rows and colums of the array: ";
    cin >> n >> m;
    int arr[n][m];
    cout << "Enter the elements: ";
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            cin >> arr[i][j];
        }
    }
    int x;
    cout << "Enter the element to be searched for: ";
    cin >> x;

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            if (arr[i][j] == x)
            {
                cout << "The element was found at coordinates " << i << " " << j;
                exit(0);
            }
        }
    }
    cout << "The element was NOT found in the array.";
    return 0;
}