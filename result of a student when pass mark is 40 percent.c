/*
Course Name: Elementary Struuctured Programming Lab
Assignment No: 1
Semester: 1st Semester
Group: C2
ID: 20210104148
*/


#include <stdio.h>

//Compiler version gcc  6.3.0

int main()
{
  int number, pass_mark = 40;
  
  printf("Please enter your number\n");
  scanf("%d", &number);
  
 if(number >= pass_mark){
   printf("Your result is pass");
 }
 else{
   printf("Your result is fail");
 }
 
  return 0;
}