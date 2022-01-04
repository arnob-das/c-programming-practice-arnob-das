/*
Course Name : Elementary Structured Programming Lab
Assignment No : Assignment 2
Semester : 1/1
Group : C2
ID : 20210104148
*/
  
/*
Write a program to display the cube
of the number upto given integer
*/


#include <stdio.h>

//Compiler version gcc  6.3.0

int main()
{
  int i, n, res;
  
  printf("Enter Nth number\n");
  scanf("%d", &n); // taking input
  
  for(i = 1; i <= n; i++){
    res = i*i*i; // calculate cube of the number
    
    printf("%d and cube of %d is %d\n", i, i, res);
  }
  
  return 0;
}