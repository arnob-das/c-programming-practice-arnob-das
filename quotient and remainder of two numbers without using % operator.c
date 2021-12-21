#include <stdio.h>

//Compiler version gcc  6.3.0

int main()
{
  float num, quotient, divisor, remainder ;
  
  printf("Enter a number\n");
  scanf("%f", &num);
  
  printf("Enter the divisor\n");
  scanf("%f", &divisor);
  
  quotient = num / divisor;
  printf("Quotient is %.3f\n", quotient);
  
  remainder = num - (divisor * (int)quotient);
  
  printf("Remainder = %.2f", remainder);
  
  return 0;
}