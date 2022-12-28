#include<stdio.h>
void main()
{
  int num1;
  long long int fact = 1;
  printf("\n Enter the number:- ");
  scanf("%d", &num1);
  while(num1 >0)
  {
    fact = fact * num1;
    num1--;
  }
  printf("\n Factorial of number is:- %d", fact);
}