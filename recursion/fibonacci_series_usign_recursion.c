#include <stdio.h>
int fibonacci(int n1, int n2, int n)
{
    // base case
    if (n == 0)
        return 0;

    int c = n1 + n2;

    printf("%d\t", c);

    fibonacci(n2, c, n - 1);
}
int main()
{
    int n1 = 1, n2 = 1, n = 25;

    // print the first and second element
    printf("%d\n%d\n", n1, n2);
    // already printed first and second element. so n = ( n - 2 ) .
    fibonacci(n1, n2, n - 2);
}