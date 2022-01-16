#include <stdio.h>
int main()
{
    int myArray[5] = {10, 20, 30, 40, 50};

    printf("First element of the array is %d \n", myArray[0]); // 10
    printf("Third element of the array is %d \n", myArray[2]); // 30

    printf("%d \n", myArray[-1]);  // 22017 and this is a garbage value
    printf("%d \n", myArray[100]); // -217022335 and this is a garbage value
}