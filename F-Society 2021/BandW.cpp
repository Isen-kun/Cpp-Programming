#include <iostream>
#include <string>
using namespace std;

int main()
{
    int n, x[10] = {0}, y[10] = {0};

    string temp;
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        cin >> temp;
        x[i] = temp[0];
        y[i] = temp[1] - '0';
    }

    for (int i = 0; i < n; i++)
    {
        if (x[i] % 2)
        {
            if (y[i] % 2)
            {
                cout << "Black" << endl;
            }
            else
            {
                cout << "White" << endl;
            }
        }
        else
        {
            if (y[i] % 2)
            {
                cout << "White" << endl;
            }
            else
            {
                cout << "Black" << endl;
            }
        }
    }

    return 0;
}