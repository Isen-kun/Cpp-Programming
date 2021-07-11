#include <iostream>
#include <string>
using namespace std;

int main()
{
    int n;
    cin >> n;
    string ans[n], a[n], b[n];
    for (int i = 0; i < n; i++)
    {
        cin >> a[i] >> b[i];
    }

    for (int i = 0; i < n; i++)
    {
        ans[i].clear();
        for (int j = 0; j < a[i].length(); j++)
        {
            if (a[i][j] == b[i][j])
            {
                ans[i] += "0";
            }
            else
            {
                ans[i] += "1";
            }
        }
        cout << ans[i] << endl;
    }

    return 0;
}