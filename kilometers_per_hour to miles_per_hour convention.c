#include <stdio.h>
int main()
{
  float kilometers_per_hour, miles_per_hour;
  
  printf ("Enter the value of Kilometers per hour");
  scanf("%f", &kilometers_per_hour);
  
  // 1 km/h = 0.6214 mile/h
  miles_per_hour = kilometers_per_hour * 0.6214;
  
  printf("%.3f Kilometers per hour is equal to %.3f miles per hour", kilometers_per_hour, miles_per_hour);

  return 0;
  
  }