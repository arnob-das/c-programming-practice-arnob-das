#include <stdio.h>
int main()
{
    // /n generate a new line
    printf("Hello World \n");
    printf("\n");
    printf("Hello \n World");
    printf("\n");

    // /t generate a Tab Space
    printf("Hello \t World");
    printf("\n");

    // try some calculations

    // %d is like a placeholder which keeps the calculation value into the quatation as a string in printf funciton.
    printf("%d", 5 + 5);
    printf("\n");
    printf("%d", 5 - 5);
    printf("\n");
    printf("%d", 5 * 5);
    printf("\n");
    printf("%d", 5 / 5);
    printf("\n");
}