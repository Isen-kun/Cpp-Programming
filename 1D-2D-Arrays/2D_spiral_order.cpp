#include <iostream>
using namespace std;

int main()
{
    int n, m;
    cout << "Enter the rows and colums of the matrix: ";
    cin >> n >> m;
    int arr[n][m];
    cout << "Enter the elements:" << endl;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            cin >> arr[i][j];
        }
    }

    cout << "\nThe matrix in spiral form is: " << endl;
    for (int rs = 0, re = n - 1, cs = 0, ce = m - 1; rs <= re && cs <= ce;)
    {

        for (int j = cs; j <= ce; j++)
        {
            cout << arr[rs][j] << " ";
        }
        cout << endl;
        rs++;

        for (int i = rs; i <= re; i++)
        {
            cout << arr[i][ce] << " ";
        }
        cout << endl;
        ce--;

        for (int j = ce; j >= cs; j--)
        {
            cout << arr[re][j] << " ";
        }
        cout << endl;
        re--;

        for (int i = re; i >= rs; i--)
        {
            cout << arr[i][cs] << " ";
        }
        cout << endl;
        cs++;
    }
    return 0;
}