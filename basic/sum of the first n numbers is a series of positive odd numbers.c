#include <stdio.h>
int main()
{
    int n, difference = 2, a = 1;
    double sum;

    printf("Enter the last number of the series \n");
    scanf("%d", &n);

    sum = a + (n - 1) * difference;

    printf("Sum of first nth odd number is : %0.2lf\n", sum);

    return 0;

}
