#include <stdio.h>
int bin(int num)
{
    if (num == 0)
        return 0;
    return ((num % 2) + (10 * bin(num / 2)));
}
int main()
{
    int num, result;

    printf("Enter a positive deciman number.\n");
    scanf("%d", &num);

    result = bin(num);
    printf("%d\n", result);
}