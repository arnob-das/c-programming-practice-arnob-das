/*
Course Name : Elementary Structured Programming Lab
Assignment No : Assignment 2
Semester : 1/1
Group : C2
ID : 20210104148
*/

/*
Write a program to calculate the factorial of a given number
*/
#include <stdio.h>

//Compiler version gcc  6.3.0

int main()
{
  int i, n, result = 1;
  
  printf("Enter factorial Number");
  scanf("%d", &n);
  
  for(i = n; i >= 1; i--){
    result *= i;
  }
  printf("Result of factorial %d is %d", n, result);
  return 0;
}