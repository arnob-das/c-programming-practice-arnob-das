#include <stdio.h>

// custom function
int factorial(int num, int fact_result)
{
    // base case
    if (num == 0)
        return fact_result;

    fact_result *= num; // calculating factorial
    //printf("%d\t %d\n", num, fact_result);

    // recursive function
    factorial(num - 1, fact_result);
}

int main()
{
    int num = -1, fact_result = 1, result;

    while (num < 0)
    {
        printf("Enter the number\n");
        scanf("%d", &num);
    }
    // calling recursive function from main function
    result = factorial(num, fact_result);
    printf("The result is: %d\n", result);

    return 0;
}