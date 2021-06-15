#include <iostream>
#include <stdlib.h>
using namespace std;

int main()
{
    char arr[20];
    cout << "Enter your word: ";
    cin >> arr;

    int n = 0;
    for (int i = 0; arr[i] != '\0'; i++)
    {
        n++;
    }
    for (int i = 0, j = n - 1; i < n && j >= 0; i++, j--)
    {
        if (arr[i] != arr[j])
        {
            cout << "The word is NOT a palindrome.";
            exit(0);
        }
    }
    cout << "The word is a palindrome.";
    return 0;
}