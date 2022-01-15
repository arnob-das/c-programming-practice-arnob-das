#include <stdio.h>
int main()
{
    double u, v, a, t, s;

    printf("Enter initial velocity\n");
    scanf("%lf", &u);
    printf("Enter acceleration\n");
    scanf("%lf", &a);
    printf("Enter Time Period\n");
    scanf("%lf", &t);

    v = u + a * 2 * t; // here time = 2 * t
    s = u * 2 * t + (0.5 * a * 2 * t * 2 * t); // here, time = 2 * t

    printf("Velocity is : %0.2lf \n", v);
    printf("Distance in double time is : %0.2lf \n", s);

    return 0;
}