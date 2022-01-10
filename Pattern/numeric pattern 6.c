/*
pattern style :

1 2 3 4 5
2 3 4 5
3 4 5
4 5
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
        for (j = i; j <= row; j++  )
        {
            printf("%d ",j);
        }
        printf("\n");

    }
}


