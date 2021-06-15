#include <iostream>
#include <stdio.h>
#include <math.h>
using namespace std;

int main()
{
    void dec_to_bin();
    void bin_to_dec();
    int choice;

    while (1)
    {
        cout << "\nPress 0 to exit";
        cout << "\nPress 1 to convert Decimal to Binary";
        cout << "\nPress 2 to convert Binary to Decimal";
        cout << endl;
        cin >> choice;

        switch (choice)
        {
        case 0:
            return 0;
            break;

        case 1:
            dec_to_bin();
            break;

        case 2:
            bin_to_dec();
            break;

        default:
            break;
        }
    }
    return 0;
}

void dec_to_bin()
{
    int i, d, bi[20];
    cout << "Enter the decimal number: ";
    cin >> d;
    for (i = 0; d != 0; d /= 2)
    {
        bi[i++] = d % 2;
    }
    cout << "The equivalent binary number is: ";
    for (int j = i; j >= 0; j--)
    {
        cout << bi[j] << " ";
    }
}

void bin_to_dec()
{
    int len = 0, d = 0, b;
    int bi[20];
    cout << "Enter a binary number: ";
    cin >> b;

    for (int i = 0; b != 0; b /= 10)
    {
        bi[i++] = b % 10;
        len++;
    }

    for (int i = len; i >= 0; i--)
    {
        d += pow(2, i) * bi[i];
    }

    cout << "The decimal equivalent is: " << d;
}