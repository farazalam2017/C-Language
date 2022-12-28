/* Program to print the values and address of array elements by subscripting a pointer variable */
#include<stdio.h>
void main()
{
  int arr[5] = {1, 2, 3, 4, 5};
  int i, *p;
  p = arr;
  for (i = 0; i < 5; i++)
  {
    printf("\n Address of arr[%d]= %p %p %p", i, &arr[i], arr + i, p + i, &p[i]);
    printf("\n Value of arr[%d]= %d %d %d", i, arr[i], *(arr + i), *(p + i), p[i]);
  }
}