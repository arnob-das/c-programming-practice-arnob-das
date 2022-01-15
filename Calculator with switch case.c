/*
Course Name: Elementary Struuctured Programming Lab
Assignment No: 1
Semester: 1st Semester
Group: C2
ID: 20210104148
*/


#include <stdio.h>
int main() {
  
  char operator;
  int first, second;
  
  printf("Enter an operator (+, -, *, /, '%'): ");
  scanf("%c", &operator);
  
  printf("Enter two numbers: ");
  scanf("%d %d", &first, &second);

  switch (operator) {
    case '+':
      printf("result is = %d", first + second);
      break;
    case '-':
      printf("result is = %d", first - second);
      break;
    case '*':
      printf("result is = %d", first * second);
      break;
    case '/':
      printf("result is = %d", first / second);
      break;
    case '%':
      printf("result is= %d",first % second);
      break;
    // operator doesn't match any case
    default:
      printf("Error! operator is not correct");
  }

  return 0;
}
