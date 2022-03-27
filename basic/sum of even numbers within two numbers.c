/*
Course Name : Elementary Structured Programming Lab
Assignment No : Assignment 2
Semester : 1/1
Group : C2
ID : 20210104148
*/

/*
Write a program to input 2 numbers and find out the sum of all the even numbers
which are not divisible by 5 but divisible by 3 and lie between the given two
numbers.
*/

#include <stdio.h>

//Compiler version gcc  6.3.0

int main()
{
  int i, n1, n2,  max, min, sum = 0;
  
  printf("Enter first and last number\n");
  scanf("%d %d", &n1, &n2);
  
  if(n1>n2){
    max = n1;
    min = n2;
  }
  else{
    max = n2;
    min = n1;
  }
  
  for(i = min; i<= max; i++){
    if(i%2 == 0 && i%5 != 0 && i%3 == 0){
      sum += i;
    }
  }
  printf("Rest is %d", sum);
  
  return 0;
}