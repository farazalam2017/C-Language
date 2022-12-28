/* Program to add elements of the array */
#include<stdio.h>
void main()
{
  int arr[100], i, num, sum= 0;
  printf(" Enter the size of array:- ");
  scanf("%d", &num);
  for (i = 1; i <= num;i++)
  {
    printf("\n Enter the %d element:- ", i);
    scanf("%d", &arr[i]);
    sum = sum + arr[i];
  }
  printf("\n Sum of entered number is:- %d", sum);
}