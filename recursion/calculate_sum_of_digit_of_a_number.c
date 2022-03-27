#include <stdio.h>
// calculate the sum of the digits of the positive integer
int calculateSum(int num, int sum)
{
    if (num == 0)
        return sum;
    return (num % 10 + calculateSum(num / 10, sum));
}
int main()
{
    int num = 12345, sum = 0, result;
    printf("Enter a five digit positive integer\n");
    scanf("%d", &num);
    // calling the calculateSum function
    result = calculateSum(num, sum);
    printf("The Sum of digits is %d\n", result);

    return 0;
}