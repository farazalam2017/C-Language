/* Function returning pointer */
#include<stdio.h>
int *func(int *p, int n);
void main()
{
  int n = 5, arr[10] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
  int *ptr;
  ptr = func(arr, n);
  printf("Value of arr= %p, Value of ptr= %p, Value of *ptr= %d\n", arr, ptr, *ptr);
}

int *func(int *p, int n)
{
  p = p + n;
  return p;
}