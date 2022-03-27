#include <stdio.h>

//Compiler version gcc  6.3.0

int main()
{
  int num;
  
  printf("Enter a number: \n");
  scanf("%d", &num);
  
  // %d displays the integer value of a character
  // %c displays the actual character
  printf("ASCII Value of %d = %c", num, num); 
  
  return 0;
}