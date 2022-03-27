
// Two dimensional arrays : Say, int a[4][5];
// 0 1 2 3 4 0 1 2 3 Example 1 :
#include <stdio.h>
void main()
{
    int a[3][4], i, j;
    for (i = 0; i < 3; i++)
        for (j = 0; j < 4; j++)
            scanf("% d", &a[i][j]);
    for (i = 0; i < 3; i++)
    {
        for (j = 0; j < 4; j++)
            printf("% d", a[i][j]);
        printf("\n");
    }
}
// Example 2 :
/*

#include <stdio.h>
void main()
{
    int i, j, row, col, *p;
    scanf("% d % d", &row, &col);
    p = (int *)malloc(row * col * sizeof(int));
    for (i = 0; i < row; i++)
        for (j = 0; j < col; j++)
            scanf("% d", (p + i * col + j));
    for (i = 0; i < row; i++)
    {
        for (j = 0; j < col; j++)
            printf("% 4d", *(p + i * col + j));
        printf("\n");
    }
}

*/
// 1 / 2 Dept of CSE, AUST
// Lecture 16 Example 3 :
/*

#include <stdio.h>
void main()
{
    int *a[3], dim, i, j, b[3];
    for (i = 0; i < 3; i++)
    {
        scanf("% d", &dim);
        a[i] = (int *)malloc(dim * sizeof(int));
        b[i] = dim;
        for (j = 0; j < dim; j++)
            scanf("% d", (a[i] + j));
    }
    for (i = 0; i < 3; i++)
    {
        for (j = 0; j < b[i]; j++)
            printf("% 4d", *(a[i] + j));
        printf("\n");
    }
}

*/
// Three dimentional array : Say, int a[3][4][5];
// Example 4 :
/*


#include <stdio.h>
void main()
{
    char ch[2][3][10], i, j, k;
    for (i = 0; i < 2; i++)
        for (j = 0; j < 3; j++)
            for (k = 0; k < 10; k++)
                scanf("% c", &ch[i][j][k]);
    for (i = 0; i < 2; i++)
    {
        for (j = 0; j < 3; j++)
        {
            for (k = 0; k < 10; k++)
                printf("% c", ch[i][j][k]);
            printf("\n");
        }
        printf("\n");
    }
}

*/
// Array initialization : int a[2] = {1, 2};
/*

#include <stdio.h>
void main()
{
    char b[4] = {'a', 'b', 'c', '\0'};
    char a[] = "abc";
    char
        *p = "hellow";
    char
        c[10] = "hellow";
    int x[2][2] = {{1, 2}, {3}};
}


*/

// 2 / 2 Dept of CSE, AUST