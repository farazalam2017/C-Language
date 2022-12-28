/* Program to increment and decrement in a pointer variable of base type int */
#include<stdio.h>
void main()
{
  int a = 5;
  int *p;
  p = &a;
  printf(" Value of p= Address of a= %p\n", p);
  printf("\n Value of p= %p", ++p);
  printf("\n Value of p=%p", p++);
  printf("\n Value of p= %p", p);
  printf("\n Value of p= %p", p--);
}