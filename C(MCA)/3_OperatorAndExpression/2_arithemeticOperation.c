// Modulus operator not work with floating point number
// it duplicate facility provided by fmod function
#include<stdio.h>
int main()
{
  float a = 12.4, b = 3.8;
  printf("Sum is:- %.2f", a + b);
  printf("\nDiffernce  is:- %.2f", a - b);
  printf("\nProduct is:- %.2f", a * b);
  printf("\nQuotient is:- %.2f", a / b);
}