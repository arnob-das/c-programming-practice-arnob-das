#include <stdio.h>
int common = 1;

int lcm(int a, int b)
{
    if (common % a == 0 && common % b == 0)
    {
        return common;
    }
    common++;
    lcm(a, b);
}

int main()
{
    int a, b, result;

    printf("Enter two numbers: ");
    scanf("%d %d", &a, &b);
    
    result = lcm(a, b);
    printf("The LCM of %d and %d is %d\n", a, b, result);

    return 0;
}
