#include <stdio.h>

//Compiler version gcc  6.3.0

int main()
{
  int days, years, weeks, remaining_days;
  
  printf("Enter the number of days\n");
  scanf("%d", &days);
  
  years = days / 365;
  weeks = (days % 365) / 7;
  // all values converted into days format in below line.
  remaining_days = days - (years * 365) - (weeks * 7);
  
  printf("%d Days = %d years, %d weeks and %d days", days, years, weeks, remaining_days);
  
  return 0;
}