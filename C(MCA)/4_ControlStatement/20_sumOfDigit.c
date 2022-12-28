/* Program to print the sum of digit of number */
#include<stdio.h>
void main()
{
  int num, sum=0, rem;
  printf(" Enter the number:- ");
  scanf("%d", &num);
  do
  {
    rem = num % 10;
    sum = sum + rem;
    num = num / 10;
  } while (num != 0);
  printf("\n Sum of digit of entered number is:- %d", sum);
}