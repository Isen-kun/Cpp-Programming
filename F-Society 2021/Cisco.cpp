#include <iostream>
using namespace std;

int main()
{
    int n;
    cin >> n;
    int cus[n][2];
    for (int i = 0; i < n; i++)
    {
        cin >> cus[i][0] >> cus[i][1];
    }

    int earliest = cus[0][0], latest = cus[0][1];
    for (int i = 0; i < n; i++)
    {
        earliest = min(earliest, cus[i][0]);
        latest = max(latest, cus[i][1]);
    }
    int hours[latest - earliest + 1] = {0};
    int most = 0;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < latest - earliest + 1; j++)
        {
            if (j >= cus[i][0] && j <= cus[i][1])
            {
                hours[j]++;
                most = max(most, hours[j]);
            }
        }
    }
    // for (int i = 0; i < latest - earliest + 1; i++)
    // {
    //     cout << hours[i] << " ";
    // }
    cout << most;
    return 0;
}