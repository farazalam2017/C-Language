/* Program to find largest and smallest number in array */
#include<stdio.h>
void main()
{
  int arr[50];
  int num, i, small, large;
  printf("Enter the size of the array:- ");
  scanf("%d", &num);
  for (i = 1; i < num;i++)
  {
    printf("\n Enter the %d element:- ", i);
    scanf("%d", &arr[i]);
  }
  small = large = arr[0];
  for (i = 1; i <num;i++)
  {
    if(arr[i]<small)
      small = arr[i];
      if(arr[i]> large)
      large = arr[i];
  }
  printf("\n Smallest is %d and largest is %d", small, large);
}