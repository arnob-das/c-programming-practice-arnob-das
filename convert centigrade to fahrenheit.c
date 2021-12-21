#include <stdio.h>

//Compiler version gcc  6.3.0

void main()
{
  float c,f;
  
  printf("Enter the value of Centigrade:\n");
  scanf("%f", &c);
  
  f=(c*9/5) + 32; //formula to convert value from Celcius to Fahrenheit
  
  printf("The Fahrenheit value is %.2f,\n", f);
}