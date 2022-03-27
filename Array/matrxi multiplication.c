#include <stdio.h>
int main()
{
    int i, j, sum = 0;
    int r1, c1, r2, c2;

    printf("Enter row and column for first matrix\n");
    scanf("%d %d", &r1, &c1);
    printf("Enter row and column for second matrix\n");
    scanf("%d %d", &r2, &c2);

    int matA[r1][c1];
    int matB[r2][c2];
    int mulMAt[r1][c2];

    if (c1 != r2)
    {
        printf("Error\n");
    }
    else
    {
        // input element for first matrix
        printf("Input data for first matrix\n");
        for (i = 0; i < r1; i++)
        {
            for (j = 0; j < c1; j++)
            {
                scanf("%d", matA[i][j]);
            }
        }
        // input element for second matrix
        printf("Input data for second matrix\n");
        for (i = 0; i < r1; i++)
        {
            for (j = 0; j < c1; j++)
            {
                scanf("%d", matB[i][j]);
            }
        }
        // multiplication array initialize with Zero(0)
        for (i = 0; i < r1; i++)
        {
            for (j = 0; j < c1; j++)
            {
                mulMAt[i][j] = 0;
            }
        }
        // multiplicate here
    }

    return 0;
}