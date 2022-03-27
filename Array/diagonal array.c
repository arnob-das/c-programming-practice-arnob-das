#include <stdio.h>
int main()
{
    int m = 3, n = 3, i, j, d1 = 0, d2 = 0;

    int myArray[m][n];

    // input element for matrix
    for (i = 0; i < m; i++)
    {
        for (j = 0; j < n; j++)
        {
            scanf("%d", &myArray[i][j]);
        }
    }

    // for d1
    for (i = 0; i < m; i++)
    {
        for (j = 0; j < n; j++)
        {
            if (i == j)
            {
                d1 += myArray[i][j];
            }
        }
    }

    // for d2
    for (i = m - 1; i >= 0; i--)
    {
        for (j = 0; j < n; j++)
        {
            d2 += myArray[i][j];
        }
    }

    // print d1 and d2
    printf("%d\n", d1);
    printf("%d\n", d2);

    // max or min
    if (d1 > d2)
    {
        printf("d1 is max\n");
    }
    else if (d2 < d1)
    {
        printf("d2 is max\n");
    }
    else
    {
        printf("d1 and d2 are equal");
    }

    return 0;
}