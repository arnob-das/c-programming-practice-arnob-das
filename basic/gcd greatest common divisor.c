#include <stdio.h>
int main()
{
    int n1, n2, gcd;

    printf("Enter number 1 and number 2 \n");
    scanf("%d %d", &n1, &n2);

    gcd = n1 < n2 ? n1 : n2;

    for (; gcd >= 1; gcd--)
    {
        if (n1 % gcd == 0 && n2 % gcd == 0)
        {
            //gcd = gcd;
            break;
        }
    }
    printf("GCD is %d\n", gcd);

    return 0;
}