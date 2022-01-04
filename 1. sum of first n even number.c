/*
Course Name : Elementary Structured Programming Lab
Assignment No : Assignment 2
Semester : 1/1
Group : C2
ID : 20210104148
*/
  
/*
Write a program to print the sum and average of first n even numbers.
*/

#include <stdio.h>

//Compiler version gcc  6.3.0

int main()
{
  int i, n, z = 0, sum = 0, avarage;
  
  printf("Enter N th number\n");
  scanf("%d", &n); // taking input
  
  for(i = 1; ; i++){
    // checking even number
    if(i%2 == 0){ 
      sum += i; // add even number with sum
      // for every even number, increase the value of z
      z += 1;
    }
    
    // checking finishing point of the loop    
    if(z == n){
      break;
    }
  }
  
  avarage = sum / n;
  
  printf("sum of first %d th even number is %d\n",n, sum);
  printf("Avarage of first %d th even number is %d", n, avarage);
  
  return 0;
}