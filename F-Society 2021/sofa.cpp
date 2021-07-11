#include <iostream>
using namespace std;

int main()
{
    int n;
    cin >> n;
    int a[n][4];

    for (int i = 0; i < n; i++)
    {
        cin >> a[i][0] >> a[i][1] >> a[i][2] >> a[i][3];
    }

    for (int i = 0; i < n; i++)
    {
        if (min(a[i][0], a[i][1]) > max(a[i][2], a[i][3]) || min(a[i][2], a[i][3]) > max(a[i][0], a[i][1]))
        {
            cout << "NO" << endl;
        }
        else
        {
            cout << "YES" << endl;
        }
    }

    return 0;
}