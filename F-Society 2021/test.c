#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main()
{

    /* Enter your code here. Read input from STDIN. Print output to STDOUT */
    int i, n, x[10], y[10];
    char temp[2];
    scanf("%d", &n);
    for (i = 0; i < n; i++)
    {
        scanf("%s", &temp);
        x[i] = temp[0];
        y[i] = temp[1];
    }
    for (i = 0; i < n; i++)
    {
        if (x[i] % 2)
        {
            if (y[i] % 2)
            {
                printf("Black\n");
            }
            else
            {
                printf("White\n");
            }
        }
        else
        {
            if (y[i] % 2)
            {
                printf("Black\n");
            }
            else
            {
                printf("White\n");
            }
        }
    }

    return 0;
}