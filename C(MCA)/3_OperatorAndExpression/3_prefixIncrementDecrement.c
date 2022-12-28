#include<stdio.h>
int main(void)
{
  int x = 8;
  printf("x= %d", x);
  printf(", x= %d", ++x);
  printf(", x= %d", x);
  printf(", x= %d", --x);
  printf(", x= %d", x);
 
  return 0;
}