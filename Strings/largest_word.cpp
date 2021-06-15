#include <iostream>
#include <stdio.h>
using namespace std;

int main()
{
    char arr[100];
    cout << "Enter your sentence: ";
    gets(arr);

    int max_len = 0, cur_len = 0;
    int st = 0, maxst = 0;
    for (int i = 0; arr[i] != '\0'; i++)
    {
        if (arr[i] == ' ' || arr[i] == '\0')
        {
            if (cur_len > max_len)
            {
                max_len = cur_len;
                maxst = st;
            }
            cur_len = 0;
            st = i + 1;
        }
        else
        {
            cur_len++;
        }
    }
    cout << "The length of the longest word is = " << max_len;
    cout << "\nThe longest word is = ";
    for (int i = 0; i < max_len; i++)
    {
        cout << arr[i + maxst];
    }
    return 0;
}