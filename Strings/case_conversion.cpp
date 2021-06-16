#include <iostream>
#include <string>
#include <algorithm>
using namespace std;

int main()
{
    string str;
    cout << "Enter a string of only characters: ";
    getline(cin, str);

    for (int i = 0; i < str.length(); i++)
    {
        if (str[i] == ' ')
        {
            continue;
        }
        if (str[i] >= 97)
        {
            str[i] -= 32;
        }
        // transform(str.begin(), str.end(), str.begin(), ::toupper);
        else
        {
            str[i] += 32;
        }
        // transform(str.begin(), str.end(), str.begin(), ::tolower);
    }

    cout << str;
}