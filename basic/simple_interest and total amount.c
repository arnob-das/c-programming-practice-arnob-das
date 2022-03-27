#include <stdio.h>

//Compiler version gcc  6.3.0

int main()
{
  float p, r, n, i, total;
  
  printf("enter the principle amount\n");
  scanf("%f", &p);
  
  printf("enter the rate of interest\n");
  scanf("%f", &r);
  
  printf("enter the time in year\n");
  scanf("%f", &n);
  
  i=p*n*(r/100);
  total = p + i;
  
  printf("Principle Amount = %.2f Taka\n", p);
  printf("Rate of interest = %.2f %\n", r);
  printf("Time in year = %.2f Years\n", n);
  printf("simple interest = %.2f Taka\n", i);
  printf("Total Amount with interest = %.2f Taka\n", total);
  
  return 0;
}