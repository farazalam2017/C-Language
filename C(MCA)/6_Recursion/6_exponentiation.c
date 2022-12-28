/* Program to raise a floating point number to a positive integer */
#include<stdio.h>
float power(float a, int n);
int main(void)
{
  float a, p;
  int n;
  printf("Enter a and n:- ");
  scanf("%f%d", &a, &n);
  p = power(a, n);
  printf("\n %.1f raised to power %d is %.1f:-", a, n, p);
  return 0;
}
float power(float a, int n)
{
  if(n==0)
    return 1;
    else
    return (a * power(a, n - 1));
}

  