#include <stdio.h>

//Compiler version gcc  6.3.0

int main()
{
  int num, original_num, last, reversed_num;
  
  printf("Enter a four digit number:\n");
  scanf("%d", &num); // 1234
  
  // store input number in original_num variable
  original_num = num; // 1234
  
  // getting digit number four by remainder 
  last = num % 10; // 4
  // set 4th digit to digit 1 by multiplicating by 1000
  reversed_num = last * 1000; // 4*1000=4000
  
  // convert the four digit number to a three digit number and remove the last digit
  num = num / 10; // 123
  // getting the last digit (digit number three)
  last = num % 10; // 3
  // set digit 3 to digit two by multiplicating by 100
  reversed_num = reversed_num + (last*100); // 4000 + 3*100= 4300
  
  // convert the three digit number to a two digit number
  num = num / 10; // 12
  // getting the last digit (digit two)
  last = num % 10; // 2
  // set digit 2 to digit 3 by multiplicating by 10
  reversed_num = reversed_num + (last*10); // 4300 + 2*10 = 4320
  
  // convert the two digit number to a one digit number
  last = num / 10; // 12 / 10 = 1
  // set the first digit to the last digit
  reversed_num = reversed_num + last; // 4320 + 1 = 4321
  
  printf("Main Number is %d\nReversed Number is %d\n",original_num,reversed_num);
  
  
  if(original_num == reversed_num){
    printf("So, this is a palindrome number");
  }
  else{
    printf("So, this is not a palindrome number");
  } 
  
  return 0;
}
