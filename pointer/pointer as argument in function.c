#include <stdio.h>
void swap(int *, int *);
void myFunc(int *);
int main()
{
    // int a = 20;

    // printf("a = %d\n", a);

    // myFunc(&a);

    // printf("a = %d\n", a);

    int a = 50;
    int b = 40;
    swap(&a, &b);
    printf("%d %d\n", a, b);
}

void myFunc(int *n)
{
    *n = 500;
}
void swap(int *a, int *b)
{
    int temp = *a;
    *a = *b;
    *b = temp;
}