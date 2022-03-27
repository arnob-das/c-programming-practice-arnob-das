#include <stdio.h>
int calculatePower(int base, int exponent)
{
    if (exponent == 0)
        return 1;
    return base * calculatePower(base, exponent - 1);
}
int main()
{
    int base, exponent, result = 1;
    printf("Enter the base\n");
    scanf("%d", &base);
    printf("Enter exponent\n");
    scanf("%d", &exponent);

    result = calculatePower(base, exponent);
    printf("The result is %d\n", result);
}