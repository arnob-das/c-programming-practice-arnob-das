#include <stdio.h>
int main()
{
    int i, j, temp;
    int myArray[] = {10, 20, 30, 40, 50, 60, 70, 80, 90, 100};

    // loop will run to half of index point of the array.
    // every time it swaps two values.
    // like : array[0] = array[9] and array[9] = array[0]

    for (i = 9, j = 0; i >= 5; i--, j++) // N.B: i <= 5.... not i >= 10.
    {
        temp = myArray[i];       // 9
        myArray[i] = myArray[j]; // 9 - 0
        myArray[j] = temp;       // 0 - 9
    }

    for (i = 0; i < 10; i++)
    {
        printf("Index point of\t %d is \t %d \n", i + 1, myArray[i]);
    }

    return 0;
}