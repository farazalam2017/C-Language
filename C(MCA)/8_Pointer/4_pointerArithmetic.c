/* Program to perform pointer arithmetic */
#include<stdio.h>
void main()
{
  int a= 5, *p1= &a;
  char b = 'A', *p2 = &b;
  printf(" Value of p1= Address of a= %p", p1);
  printf("\n Value of p2= Address of b= %p", p2);
  p1++;
  p2++;
  printf("\n Now value of p1= %p", p1);
  printf("\n Now value of p2= %p", p2);

}