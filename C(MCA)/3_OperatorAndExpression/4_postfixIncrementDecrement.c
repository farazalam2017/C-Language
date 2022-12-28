#include<stdio.h>
int main()
{
  int x = 8;
  printf(" x= %d", x);
  printf(", x= %d", x++);
  printf(", x= %d", x);
  printf(", x= %d", x--);
  printf(", x= %d", x);
  return 0;
}