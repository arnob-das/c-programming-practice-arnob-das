#include <stdio.h>
int main()
{
    // printf("Vogoban kripa koro\n");

    int i, n = 4;
    // right shift
    for (i = 0; i < n; i++)
    {
        printf("%dth Output is %d\n", i, n >> i);
        if (i == 5)
            break;
    }
    printf("\n");

    // left shift
    for (i = 0; i < n; i++)
    {
        printf("%dth Output is %d\n", i, n << i);
        if (i == 5)
            break;
    }

    // printf("%d\n", ~~~n);

    return 0;
}