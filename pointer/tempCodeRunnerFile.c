#include <stdio.h>
void showValues(float *t);
void arraySize(float t[]);
int main()
{
    float a[] = {1.2, 3.2, 4.2, 5.2, 6.2};

    showValues(&a[0]); // note: ****** this is call by reference. not call by values. ******

    arraySize(a);
}

void showValues(float *t)
{
    // *(t + 3) = 10.2;
    // printf("%u\n%u\n", t, t+3);
    // output ( memory address )
    // 6422284
    // 6422296

    for (int i = 0; i < 5; i++)
    {
        // printf("%0.2f\n", *(t + i));
        //printf("%0.2f\n", t[i]);
    }
}

void arraySize(float t[])
{
    int length = sizeof(t)/sizeof(t[0]);
    printf("%d\n", length);
}