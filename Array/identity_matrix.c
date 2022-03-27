#include <stdio.h>
int main()
{
    int i, j, flag = 1;

    // for (i = 0; i < 3; i++)
    // {
    //     for (j = 0; j < 3; j++)
    //     {
    //         scanf("%d", &myMatrix[i][j]);
    //     }
    // }

    int myMatrix[3][3] = {{1, 3, 3}, {3, 1, 3}, {4, 3, 1}};

    // check identity myMatrix
    for (i = 0; i < 3; i++)
    {
        for (j = 0; j < 3; j++)
        {
            // if i == j and myMatrix[i][j] !=1, then it should be 1. but when it is not 1 then it will not go to if block. then we nedd to check identity
            // that when i!=j then other value of the matrix is 0 or not.
            if (i == j && myMatrix[i][j] != 1)
            {
                flag = 0;
            }
            else if (i != j && myMatrix[i][j] != 0)
            {
                flag = 0;
            }
        }
    }

    if (flag == 0)
        printf("Not identity myMatrix\n");
    else
        printf("identity myMatrix\n");

        return 0;
}