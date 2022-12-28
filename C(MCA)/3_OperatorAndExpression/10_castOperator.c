/* Program to illustrate the use of cast operator */
#include<stdio.h>
void main()
{
  int x = 5, y = 2;
  float p, q;
  p = x / y;
  printf("\np= %f", p);
  q = (float)x / y;
  printf("\nq= %f ", q);
}