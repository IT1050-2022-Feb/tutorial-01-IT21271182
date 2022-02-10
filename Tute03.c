/*Exercise 3 - Repetition

Write a C program to calculate the sum of the numbers from 1 to n.
Where n is a keyboard input.

e.g.

n -> 100
sum = 1+2+3+....+ 99+100 = 5050

n -> 1-
sum = 1+2+3+...+10 = 55 */

#include <stdio.h>
int main() {
  
  //Defining variables
  int num=0 , i , sum=0 ;

  //Taking input
  printf( "Enther the number : " );
  scanf( "%d" , &num );
  
  //calculation
  for ( i=1 ; i <= num ; i++ )
    sum = sum + i;

  //Output
  printf( "Sum = %d" , sum ); 
  
  return 0;
}

