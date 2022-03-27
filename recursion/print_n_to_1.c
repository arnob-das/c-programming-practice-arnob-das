#include <stdio.h>

// custom function
int printNum(int n)
{
    // base case
    if (n == 0)
        return 0;

    printf("%d \t", n);
    printNum(n - 1); // recursive function
}

// main function
int main()
{
    int num, n;

    printf("Enter the nth number\n");
    scanf("%d", &num);

    printNum(num);
}