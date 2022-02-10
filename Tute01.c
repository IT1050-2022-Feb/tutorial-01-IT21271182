/* Exercise 1 - Calculations

   Write a C program to input marks of two subjects. Calculate and print the average of the two marks. */

#include <stdio.h>

int main() {

  //Defining variables
  int mark1 , mark2 ;
  float tot=0 , avg=0 ;

  //Taking inputs
  printf( "Enter mark 1:" );
  scanf( "%d" , &mark1 );

  printf( "Enter mark 2:" );
  scanf( "%d" , &mark2 );

  //Calculation
  avg = (float)(mark1+mark2)/2;

  //Output
  printf( "Average : %.2f" , avg );

  return 0;
  
}

