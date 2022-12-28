/* Program to understand differnce between pointer to an integre and pointer to an array */
#include<stdio.h>
void main()
{
  int *p;// point to an  integer
  int(*ptr)[5];// points to array of 5 integer
  int arr[5];
  p = arr;// points to zeroth element
  ptr = &arr;// points to whole array  arr
  printf("\n p= %p, ptr= %p\n", p, ptr);
  p++;
  ptr++;
  printf("\n p= %p, ptr= %p", p, ptr);
}