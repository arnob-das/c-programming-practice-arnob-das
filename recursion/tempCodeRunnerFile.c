#include <stdio.h>

//custom function
int printNum(int n){
    printf("%d \t", n);
    printNum(n-1); // recursive function
}

// main function
int main()
{
    int num, n;

    printf("Enter the nth number\n");
    scanf("%d", &num);

    printNum(num);
}