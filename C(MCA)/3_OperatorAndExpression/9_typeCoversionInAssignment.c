/* Program to understand type conversion in assignment */
#include<stdio.h>
void main()
{
  char c1, c2;
  int l1, l2;
  float f1, f2;
  c1 = 'H';
  l1 = 80.56;
  f1 = 12.6;
  c2 = l1;
  l2 = f1;
  printf("\n c2= %c, l2= %d", c2, l2);
}