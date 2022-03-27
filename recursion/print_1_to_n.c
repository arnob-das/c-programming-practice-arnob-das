#include <stdio.h>

// custom function
int printNum(int n)
{
    if (n == 0) // base case
        return 0;
    printNum(n - 1); // recursive function
    printf("%d \t", n);
}

// main function
int main()
{
    int num, n;

    printf("Enter the nth number\n");
    scanf("%d", &num);

    printNum(num);
}