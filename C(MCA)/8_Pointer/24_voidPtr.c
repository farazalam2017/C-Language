/* If we have a pointer to an integer then it would be incorrect to assign the address of float variable to it. Exception to this rule is void pointer */
/*
A void pointer is a generic pointer  that can point to any data type
syntax:- void *vptr;
Note:- if vp is void pointer and it holds the address of an integer variable then we can't dereference it just by writing *vp. We have to use *(int *)vp where left most asterick(*) is the indirection operator and (int *) is used for type casting
 */
#include<stdio.h>
void main()
{
  int a = 3;
  float b = 3.4, *fp = &b;
  void *vp;
  vp = &a;
  printf("Value of a= %d\n", *(int *)vp);
  *(int *)vp = 12;
  printf("Value of a = %d\n", *(int *)vp);
  vp = fp;
  printf("Value of b = %f\n", *(float *)vp);
  
}
