#include <stdio.h>

int calculateSum(int last_num, int sum)
{
    // base case
    if (last_num == 0)
        return sum;

    sum += last_num;
    // recursive function
    calculateSum(last_num - 1, sum);
}

int main()
{
    int last_num, sum = 0, result;

    printf("Enter the nth number\n");
    scanf("%d", &last_num);
    
    // call recursive function from main function
    result = calculateSum(last_num, sum);
    printf("The result is: %d\n", result);

    return 0;
}