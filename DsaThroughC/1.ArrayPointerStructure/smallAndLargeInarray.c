/* Program to find largest and smallest in an array */
#include<stdio.h>
void main()
{
  int arr[10] = {1, 22, 33, 44, 55, 65, 32, 23, 54,88};
  int small, large;
  small = large = arr[0];
  for (int i = 0; i < 10;i++)
  {
    if(arr[i]<small)
      small = arr[i];
      if(arr[i]>large)
      large = arr[i];
  }
  printf("Smallest is:- %d and largest is:- %d", small, large);
}