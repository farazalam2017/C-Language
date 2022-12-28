/* Array  of pointers */
/*
Note:- every elements of array is a pointer variable that can hold address of any variable of appropriate type.
example:- 
        datatype *arrayname[size]
        int *arrp[10];
 */
#include<stdio.h>
void main()
{
  int *pa[3];
  int i, a = 5, b = 10, c = 15;
  pa[0] = &a, pa[1] = &b, pa[2] = &c;
  for (i = 0; i < 3;i++)
  {
    printf("pa[%d]= %p\t", pa[i]);
    printf("*pa[%d]= %d\n", i, *pa[i]);
  }
}