#include <stdio.h>
#include <stdlib.h>
int main()
{
    int *ptr, i = 0, n;
    printf("Enter the size of the array you want to create\n");
    scanf("%d", &n);

    // note: malloc() initialize every value of the array by garbage value
    // note: calloc() initialize every value of the array by 0 (Zero)

    ptr = (int *)malloc(n * sizeof(int)); // malloc()

    // collecting data for the array
    for (i = 0; i < n; i++)
    {
        printf("Enter the value of %d of this array\n", i);
        scanf("%d", &ptr[i]);
    }

    // show data of the array
    for (i = 0; i < n; i++)
    {
        printf("Value at %d of this array is %d\n", i, ptr[i]);
        // ptr[i] = *(ptr + i)
    }

    return 0;
}