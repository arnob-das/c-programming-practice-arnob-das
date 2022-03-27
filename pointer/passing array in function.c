#include <stdio.h>
void showValues(float *t, int length);
int main()
{
    float a[] = {1.2, 3.2, 4.2, 5.2, 6.2};
    int length = sizeof(a) / sizeof(a[0]);

    showValues(&a[0], length); // note: ****** this is call by reference. not call by values. ******
}

void showValues(float *t, int length)
{
    // *(t + 3) = 10.2;
    // printf("%u\n%u\n", t, t+3);
    // output ( memory address )
    // 6422284
    // 6422296

    for (int i = 0; i < 5; i++)
    {
        // printf("%0.2f\n", *(t + i));
        printf("%0.2f\n", t[i]);
        // *(t + i) = t[i];
    }
}
