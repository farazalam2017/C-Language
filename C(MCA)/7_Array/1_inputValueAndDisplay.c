/* Program to input values and display them */
#include<stdio.h>
void main()
{
  int arr[100];
  int num, i;
  printf(" Enter the size of the array:-");
  scanf("%d", &num);
  for (i = 1; i <= num;i++)
  {
    printf("\n Enter the %d elements:- ", i);
    scanf("%d", &arr[i]);
  }
  for (i = 1; i <= num;i++)
  {
    printf(" %d ", arr[i]);
  }
}