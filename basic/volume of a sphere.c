#include <stdio.h>
void main()
{
  float r,volume;
  
  printf("Enter the radius of the sphere\n");
  scanf("%f", &r);
  
  volume = (4*3.1416*r*r*r)/3; //formula
  
  printf("The volume is %f\n", volume);
}