#include <stdio.h>
#include <math.h>

//Compiler version gcc  6.3.0

int main()
{
  float num, power;
  
  //uses of power function
  printf("power function is using here\n");
  printf("Enter a number and the value of power\n");
  scanf("%f\n%f", &num, &power);
  printf("%.2f to the power %.2f is equal to %.2f\n", num, power, pow(num, power));
  
  //uses of sqrt(square root) function
  printf("sqrt function is using here\n");
  printf("Enter the number to do square root\n");
  scanf("%f", &num);
  printf("square root of %.2f is %.2f\n", num, sqrt(num));

  // uses of log function
  // log(x) is logarith of x (base e).
  printf("log(x) function is using here\n");
  printf("enter the value of log e base x\n");
  scanf("%f", &num);
  printf("Log %.2f is equal to %.2f\n", num, log(num));
  
  // uses of log10 function
  // log10(x) is logarith of x (base 10).
  printf("log10(x) function is using here\n");
  printf("enter the value of log 10 base x\n");
  scanf("%f", &num);
  printf("Log %.2f is equal to %.2f\n", num, log10(num));
  
  //uses of exp function
  printf("exp function is using here\n");
  printf("Enter the number to do exp\n");
  scanf("%f", &num);
  printf("exponential of %.2f is %.2f\n", num, exp(num));

  //uses of fabs(absolute value) function
  printf("fabs function is using here\n");
  printf("Enter the number to get of it's absolute value\n");
  scanf("%f", &num);
  printf("Absolute Value of %.2f is %.2f\n", num, fabs(num));

  //uses of ceil function
  //rounds x to smallest integer not less than x
  printf("celi function is using here\n");
  printf("Enter the number to get the smallest integer value which is not less than x\n");
  scanf("%f", &num);
  printf("smallest int value of %.2f is %.2f\n", num, ceil(num));
  
  //uses of round function
  //rounds x to largest integer not greater than x
  printf("round function is using here\n");
  printf("Enter the number to get it's round value\n");
  scanf("%f", &num);
  printf("round value of %.2f is %.2f\n", num, round(num));

  // uses of sin function
  printf("using sin function\n");
  printf("enter the angle value of sin function\n");
  scanf("%f", &num);
  printf("value of sin %.2f degree is %.2f\n", num, sin(num));
  
  // uses of cos function
  printf("using sin function\n");
  printf("enter the angle value of cos function\n");
  scanf("%f", &num);
  printf("value of cos %.2f degree is %.2f\n", num, cos(num));
  
  // uses of tan function
  printf("using tan function\n");
  printf("enter the angle value of tan function\n");
  scanf("%f", &num);
  printf("value of sin %.2f degree is %.2f\n", num, tan(num));
  
  
  return 0;
}