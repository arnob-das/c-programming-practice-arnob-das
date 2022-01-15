#include <stdio.h>
int main()
{
    double x, y, x_plus_y, x_minux_y;

    printf("Enter the value of x+y\n");
    scanf("%lf", &x_plus_y);

    printf("Enter the value of x-y\n");
    scanf("%lf", &x_minux_y);

    x = (x_plus_y + x_minux_y) / 2;
    y = (x_plus_y - x_minux_y) / 2;

    printf("x = %0.2lf, \ty = %0.2lf\n", x, y);

    return 0;
}