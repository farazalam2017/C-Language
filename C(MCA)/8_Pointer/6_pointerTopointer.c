/* Program based on pointer to pointer */
#include<stdio.h>
void main()
{
  int a = 5;
  int *p1;
  int **p2;
  p1 = &a;
  p2 = &p1;
  printf("\n Address of a= %p", &a);
  printf("\n Value of p1= Address of a= %p", p1);
  printf("\n Value of *p1= Value of a= %d", *p1);
  printf("\n Address of p1= %p", &p1);
  printf("\n Value of p2= Address of a= %p", p2);
  printf("\n Value of **p2= Value of p1= %p", *p2);
  printf("\n Value of **p2= Value of a= %d", **p2);
}