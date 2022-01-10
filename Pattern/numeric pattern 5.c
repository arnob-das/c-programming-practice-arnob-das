/*
pattern style :

1 2 3 4 5 6 7
1 2 3 4 5 6
1 2 3 4 5
1 2 3 4
1 2 3
1 2
1

*/



#include <stdio.h>
int main()
{
    int row, i, j;

    printf("Enter the row number\n");
    scanf("%d", &row);

    for (i = row; i >= 1; i--)
    {
        for (j = 1; j <= i; j++  )
        {
            printf("%d ",j);
        }
        printf("\n");

    }
}


