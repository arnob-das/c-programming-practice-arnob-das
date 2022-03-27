// 1
#include <stdio.h>
int main()
{
    int i, j, k, px[] = {-2, -2, -1, -1, 1, 1, 2, 2}, py[] = {-1, 1, -2, 2, -2, 2, -1, 1};
    int cox[4][4] = {{0}};
    for (i = 0; i < 4; i++)
    {
        for (j = 0; j < 4; j++)
        {
            for (k = 0; k < 8; k++)
            {
                if (((i + px[k]) >= 0 && (i + px[k]) < 4) && ((j + py[k]) >= 0 && (j + py[k] < 4)))
                {
                    cox[i][j]++;
                }
            }

            printf("%d\t", cox[i][j]);
        }
        printf("\n\n");
    }
    return 0;
}