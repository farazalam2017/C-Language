/* Variables are declared outside any function. Automatically initialized to 0 at the time of decalaration */
#include<stdio.h>
void fun1(void);
void fun2(void);
int a = 2, b = 19;
void main()
{
   printf("\n a is %d and b is %d", a, b);
   fun1();
   fun2();
}

void fun1(void)
{
  printf("\n a is %d and b is %d", a, b);
}

void fun2(void)
{
  printf("\n a is %d and b is %d", a, b);
}