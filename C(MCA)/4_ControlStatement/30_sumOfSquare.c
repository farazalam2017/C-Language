/* 
    Write a program to accept any number n  and print the sum of square of all number from 1 to n
 */
#include<stdio.h>
void main()
{
  int num1, sum= 0;
  printf("Enter the number:- ");
  scanf("%d", &num1);
  for (int i = 1; i <= num1;i++)
  {
    sum = sum + (i * i);
  }
  printf("\n Sum of square of number from 1 to %d is:- %d", num1, sum);
}