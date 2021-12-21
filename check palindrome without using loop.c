#include <stdio.h>

//Compiler version gcc  6.3.0

int main()
{
  int num, original_num, last, reversed_num;
  
  printf("Enter a four digit number:\n");
  scanf("%d", &num);
  
  // store input number in original_num variable
  original_num = num;
  
  // getting digit number four by remainder 
  last = num % 10;
  // set 4th digit to digit 1 by multiplicating by 1000
  reversed_num = last *1000;
  
  // convert the four digit number to a three digit number and remove the last digit
  num = num / 10;
  // getting the last digit (digit number three)
  last = num % 10;
  // set digit 3 to digit two by multiplicating by 100
  reversed_num = reversed_num + (last*100);
  
  // convert the three digit number to a two digit number
  num = num / 10;
  // getting the last digit (digit two)
  last = num % 10;
  // set digit 2 to digit 3 by multiplicating by 10
  reversed_num = reversed_num + (last*10);
  
  // convert the two digit number to a one digit number
  last = num / 10;
  // set the first digit to the last digit
  reversed_num = reversed_num + last;
  
  printf("Main Number is %d\nReversed Number is %d\n",original_num,reversed_num);
  
  
  if(original_num == reversed_num){
    printf("So, this is a palindrome number");
  }
  else{
    printf("So, this is not a palindrome number");
  } 
  
  return 0;
}