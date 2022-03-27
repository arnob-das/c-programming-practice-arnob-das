#include <stdio.h>
#include <Math.h>

int main()
{
    // area of a traingle
    double r, area, pi;

    printf("Enter the value of radius\n");
    scanf("%lf", &r);

    // use cos inverse -1 to get the value of pi
    // acos(something)... here acos means the value of cos inverse (something)
    // the return value of acos(something) is in radians.
    pi = acos(-1.);
    area = pi * r * r;

    printf("Area of this traingle is %lf\n", area);

    return 0;
}