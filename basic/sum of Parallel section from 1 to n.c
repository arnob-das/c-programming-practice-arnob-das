#include <stdio.h>
int main()
{
    int n;
    double sum;

    printf("Enter the last number of the Parallel section: \n");
    scanf("%d", &n);

    sum = (n * (n + 1)) / 2;

    printf("Sum of the Parallel section is : %0.2f\n", sum);

    

    // another method using for loop

    /*
    int i;

    printf("Enter the last number of the Parallel section: \n");
    scanf("%d", &n);

    for (i = 0; i <= n; i++)
    {
        sum += i;
    }

    printf("Sum of the Parallel section is : %0.2f\n", sum);
    */
}