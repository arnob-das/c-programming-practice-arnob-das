#include <stdio.h>
int main()
{
    int i;
    int myArray[10] = {10, 20, 30, 40, 50, 60, 70, 80, 90, 100};

    // printing value from first to last
    for (i = 0; i < 10; i++) // index point of the array is 0-9
    {
        printf("%d th element of the array is %d \n", i + 1, myArray[i]);
    }
    
    printf("\n \n");

    // print value from last to first
    for (i = 9; i >= 0; i--) // index point of the array is 0-9
    {
        printf("%d th element of the array is %d \n", i + 1, myArray[i]);
    }
}