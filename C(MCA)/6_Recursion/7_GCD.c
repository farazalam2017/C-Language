/* To find GCD(greatest common divisor) */
/* Euclid's remainder theorem */
/* 
              |-----> a        b=0 (base case)
              |
GCD(a, b)=> ---
              |
              |-----> GCD(b, a%b) otherwise (Recursive case)
 */
#include<stdio.h>
int GCD(int a, int b);
void main()
{
  int num1, num2;
  printf("\n Enter the two numbers:- ");
  scanf("%d%d", &num1, &num2);
  printf("\n GREATEST COMMON divisor of %d and %d is %d", num1, num2, GCD(num1, num2));
}
int GCD(int a, int b)
{
  if(b == 0)
    return a;
  return GCD(b, a % b);
}
