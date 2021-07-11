#include <iostream>
#include <string>
using namespace std;

int main()
{
    int n;
    cin >> n;
    string ref = "spdf";

    if (n > 0 && n <= 30)
    {
        for (int i = 1; n > 0; i++)
        {
            for (int j = 0; j < 4; j++)
            {
                if (j == 0)
                {
                    if (n > 2)
                    {
                        cout << i << ref[j] << 2 << " ";
                        n -= 2;
                    }
                    else
                    {
                        cout << i << ref[j] << n << " ";
                        n -= n;
                        break;
                    }
                }
                if (j == 1 && i > 1)
                {
                    if (n > 6)
                    {
                        cout << i << ref[j] << 6 << " ";
                        n -= 6;
                    }
                    else
                    {
                        cout << i << ref[j] << n << " ";
                        n -= n;
                        break;
                    }
                }
                if (j == 2 && i > 2)
                {
                    if (n == 6 && i == 3)
                    {
                        cout << i + 1 << ref[0] << 1 << " " << i << ref[j] << 5;
                        n -= n;
                        break;
                    }
                    if (n == 11 && i == 3)
                    {
                        cout << i + 1 << ref[0] << 1 << " " << i << ref[j] << 10;
                        n -= n;
                        break;
                    }
                    if (n > 2)
                    {
                        cout << i + 1 << ref[0] << 2 << " ";
                        n -= 2;
                    }
                    else
                    {
                        cout << i + 1 << ref[0] << n << " ";
                        n -= n;
                        break;
                    }
                    cout << i << ref[j] << n;
                    n -= n;
                }
            }
        }
    }
    else
    {
        cout << "Out of range";
    }
    return 0;
}