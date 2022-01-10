/*
pattern style :

5
5 4
5 4 3
5 4 3 2
5 4 3 2 1

*/

#include <stdio.h>
int main()
{
    int row, i, j;

    printf("Enter the row number\n");
    scanf("%d", &row);

    for (i = row; i >= 1; i--)
    {
        for (j = row; j >= i; j--)
        {
            printf("%d ",j);
        }
        printf("\n");

    }
}


