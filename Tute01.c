/* Exercise 1 - Calculations

   Write a C program to input marks of two subjects. Calculate and print the average of the two marks. */

#include <stdio.h>

int main() {
  int count;
  float marks[2];
  float average = 0;

  for(count=0;count<2;count++)
  {
    printf("Enter marks for Subject %d - ", count+1); 
    scanf("%f", &marks[count]);
  }
  average = (marks[0] + marks[1])/2;

  printf("Average = %.2f", average);
  return 0;
}

