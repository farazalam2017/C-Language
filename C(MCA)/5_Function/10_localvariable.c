/* Local variable can be used only in those functions or block, in which they are declared */
#include<stdio.h>
void fun1(void);
void fun2(void);
void main()
{
  fun1();
  fun2();
}
void fun1(void)
{
  int a = 2, b = 3;
  printf("\n a is %d and b is %d", a, b);
}

void fun2(void)
{
  int a = 5, b = 6;
  printf("\n a is %d and b is %d", a, b);
}