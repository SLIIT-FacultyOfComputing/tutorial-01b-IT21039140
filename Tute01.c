/* Exercise 1 - Calculations

   Write a C program to input marks of two subjects. Calculate and print the average of the two marks. */

#include <stdio.h>

int main() {
  float mark1;
  float mark2;
  float sum;
  float avg;

  printf("enter the first mark:");
  scanf(" %f",&mark1);
  
  printf("enter the second mark:");
  scanf(" %f",&mark2);

  sum=mark1+mark2;
  avg=sum/2.00;
  
  printf("the avarege is : %.2f\n",avg);

  return 0;
}

