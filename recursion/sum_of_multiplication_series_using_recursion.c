#include <stdio.h>
#include <math.h>
int calcSum(int a, int r, int n, int sum)
{
    if (n < 0)
        return sum;
    sum += a * pow(r, n);
    calcSum(a, r, n - 1, sum);
}
int main()
{
    int a, r, n = 5;
    int sum = 0, result;

    printf("Enter the base\n");
    scanf("%d", &a);
    printf("Enter the exponent\n", &r);
    scanf("%d", &r);
    printf("Enter the nth number\n");
    scanf("%d", &n);

    result = calcSum(a, r, n, sum);
    printf("%d\n", result);
}