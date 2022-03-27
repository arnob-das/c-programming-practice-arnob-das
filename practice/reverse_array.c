#include <stdio.h>
int main()
{
    int myArray[] = {10, 20, 30, 40, 50, 60, 70, 80, 90, 100};
    int reverseMyArray[10];
    int i, j;

    for (i = 0, j = 9; i < 10; i++, j--)
    {
        // set the inverse value of nyArray to Second array
        reverseMyArray[j] = myArray[i];
    }
    for (j = 0; j < 10; j++)
    {
        // print myArray and ReverseArray
        printf("%d\t %d \n", myArray[j], reverseMyArray[j]);
    }
}