#include<stdio.h>
void main()
{
  int num1;
  printf("\n Enter the value of num1:- ");
  scanf("%d", &num1);
  
  while(num1>=2)
  {
    printf(" %d", num1);
    num1 = num1 - 2;
  }
}