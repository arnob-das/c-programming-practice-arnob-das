/*
pattern style :

1
2 1
3 2 1
4 3 2 1
5 4 3 2 1

*/


#include <stdio.h>
int main()
{
    int row, i, j;

    printf("Enter the row number\n");
    scanf("%d", &row);

    for (i = 1; i <= row; i++)
    {
        for (j = i; j >= 1; j--)
        {
            printf("%d ",j);
        }
        printf("\n");

    }
}


