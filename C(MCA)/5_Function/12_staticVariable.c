/* static variable is initilized once and its value is retained between function call */
#include<stdio.h>
void func(void);
void main()
{
  func();
  func();
  func();
}

void func(void)
{
  int a = 10;
  static int  b = 11;
  printf("\n a is %d and b is %d", a, b);
  a++;
  b++;
}