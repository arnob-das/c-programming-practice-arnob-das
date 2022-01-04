/*
Course Name : Elementary Structured Programming Lab
Assignment No : Assignment 2
Semester : 1/1
Group : C2
ID : 20210104148
*/
  
/*
   Write a program to display the
   multiplication table of a given integer
*/

#include <stdio.h>

//Compiler version gcc  6.3.0

int main()
{
  int n, i;
  
  printf("Enter the multiplication Number\n");
  scanf("%d", &n);
  
  for(i = 1; i<= 10; i++){
    printf("%d * %d = %d\n", n, i, n*i);
  }
  return 0;
}