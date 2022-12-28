/* Program to interchange the value of two variable using comma operator */
#include<stdio.h>
int main()
{
  int a = 8, b = 7, c;
  printf("a= %d, b= %d", a, b);
  c = a, a = b, b = c;
  printf("\na= %d, b= %d", a, b);
  return 0;
}