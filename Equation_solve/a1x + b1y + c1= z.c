#include <stdio.h>
int main()
{
    double a1, a2, b1, b2, c1, c2, x, y, d;

    printf("a1 = \n");
    scanf("%lf", &a1);
    printf("a2 = \n");
    scanf("%lf", &a2);
    printf("b1 = \n");
    scanf("%lf", &b1);
    printf("b2 = \n");
    scanf("%lf", &b2);
    printf("c1 = \n");
    scanf("%lf", &c1);
    printf("c2 = \n");
    scanf("%lf", &c2);

    d = a1 * b2 - a2 * b1;

    if ((int)d == 0)
    {
        printf("The Value of x and y can not be determined. \n");
    }
    else
    {
        x = (b2 * c1 - c2 * b1) / d;
        y = (a1 * c2 - a2 * c1) / d;

        printf("x = %0.2lf, \t y= %0.2lf \n", x, y);
    }

    return 0;
}