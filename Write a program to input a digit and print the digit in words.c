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
  int num;
  
  printf("Enter a digit to print in words: ");
  scanf("%d", &num);
  
  switch(num)
  {
    case 0:
      printf("Zero ");
      break;
    case 1: 
      printf("One ");
      break;
    case 2:
      printf("Two ");
      break;
    case 3:
      printf("Three ");
      break;
    case 4:
      printf("Four ");
      break;
    case 5:
      printf("Five "); 
      break;
    case 6:
      printf("Six ");
      break;
    case 7:
      printf("Seven ");
      break;
    case 8:
      printf("Eight ");
      break;
    case 9:
      printf("Nine ");
      break;
    default:
      printf("wrong input");
      break;
  }
  
  return 0;
}  