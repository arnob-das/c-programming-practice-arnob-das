/*
pattern style :

5 4 3 2 1
5 4 3 2
5 4 3
5 4
5

*/


#include <stdio.h>
int main()
{
    int row, i, j;

    printf("Enter the row number\n");
    scanf("%d", &row);

    for (i = 1; i <= row; i++)
    {
        for (j = row; j >= i; j--)
        {
            printf("%d ",j);
        }
        printf("\n");

    }
}

