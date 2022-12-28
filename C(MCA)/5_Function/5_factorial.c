#include<stdio.h>
long int fact(int);
void main()
{
  int num;
  printf(" Enter the number:- ");
  scanf("%d", &num);
  printf("\n Factorial of number %d is:- %d", num, fact(num));
}

long int fact(int z)
{
  long int fact = 1;
  while(z!=0)
  {
    fact = fact * z;
    z--;
  }
  return fact;
}