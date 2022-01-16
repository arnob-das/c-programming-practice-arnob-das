#include <stdio.h>
int main()
{
    int i, j;

    int myArray[] = {10, 20, 30, 40, 50, 60, 70, 80, 90, 100};

    int secondArray[10];

    for (i = 9, j = 0; i >= 0; i--, j++)
    {
        // set the inverse value of nyArray to Second array
        myArray[j] = myArray[i];
    }

    //for (i = 0; i < 10; i++)
    //{
    //    // set first to last value of second array to myArray.
    //    // second array keeps the reverse value of myArray.
    //    // so to set the first to last value of second array to myArray will keep reverse value of myArray.
    //
    //    myArray[i] = secondArray[i];
    //}

    for (i = 0; i < 10; i++)
    {
        printf("%d \n", myArray[i]);
    }
}