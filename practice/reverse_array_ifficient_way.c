#include <stdio.h>
int main()
{
    int myArray[] = {10, 20, 30, 40, 50, 60, 70, 80, 90, 100}, i, j, temp;

    for (i = 0, j = 9; i < 5; i++, j--)
    {
        temp = myArray[i];
        myArray[i] = myArray[j];
        myArray[j] = temp;
    }
    for (i = 0; i < 10; i++)
    {
        printf("%d\n", myArray[i]);
    }
}