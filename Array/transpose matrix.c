#include <stdio.h>
int main()
{
    int m = 3, n = 3, i, j;

    int myArray[m][n];
    int transposMat[m][n];

    // input element for matrix
    for (i = 0; i < m; i++)
    {
        for (j = 0; j < n; j++)
        {
            scanf("%d", &myArray[i][j]);
        }
    }
    // print real matrix
    for (i = 0; i < m; i++)
    {
        for (j = 0; j < n; j++)
        {
            printf("%d \t", myArray[i][j]);
        }
        printf("\n");
    }

    // transpos matrix
    for (i = 0; i < m; i++)
    {
        for (j = 0; j < n; j++)
        {
            int temp = myArray[i][j];
            myArray[i][j] = myArray[j][i];
            myArray[j][i] = temp;
        }
    }

    // print transpos matrix
    for (i = 0; i < m; i++)
    {
        for (j = 0; j < n; j++)
        {
            printf("%d \t", myArray[i][j]);
        }
        printf("\n");
    }
}