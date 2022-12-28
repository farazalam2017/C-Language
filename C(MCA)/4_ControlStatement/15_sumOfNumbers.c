/* Program to calculate the sum of entered number  */
#include<stdio.h>
void main()
{
  int num, sum = 0;
  do
  {
    printf(" Enter the number(input 0 to exit):- ");
    scanf("%d", &num);
    sum = sum + num;
  } while (num != 0);
  printf(" \n Sum of entered number is:- %d", sum);
}