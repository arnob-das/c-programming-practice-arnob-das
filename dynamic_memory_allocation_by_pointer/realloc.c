#include <stdio.h>
#include <stdlib.h>

int main()
{

    int *ptr, i = 0, n;
    ///////////////////////////////////////          Firstly              /////////////////////////////////
    ////// firstly  making a dynamic array by calloc() function /////////

    printf("Enter the size of the array you want to create\n");
    scanf("%d", &n);

    // note: calloc() initialize every value of the array by 0 (Zero)
    // note: malloc() initialize every value of the array by garbage value

    ptr = (int *)calloc(n, sizeof(int)); // calloc(n, sizeof(data_type))

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

    /////////////////////////////                    Secondly                 ///////////////////////
    // then dynamically update the size of the array by realloc() function

    printf("Enter the new size of the array you want to create\n");
    scanf("%d", &n);

    ptr = (int *)realloc(ptr, n * sizeof(int)); // using realloc(old_pointer, n*sizeof(data_type)); function

    // collecting the data for the new array
    for (i = 0; i < n; i++)
    {
        printf("Enter value for %d th index\n", i);
        scanf("%d", &ptr[i]);
    }

    // show value of the new array
    for (i = 0; i < n; i++)
    {
        printf("Value at %d of this array is %d\n", i, ptr[i]);
    }

    return 0;
}