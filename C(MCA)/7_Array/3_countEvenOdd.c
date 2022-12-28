/* Program to count even and odd number in array */
#include<stdio.h>
void main()
{
  int arr[100], i, num, even= 0, odd=0;
  printf("Enter the size of the array:-");
  scanf("%d", &num);
  for (i = 1; i <= num;i++)
  {
    printf("\n Enter the %d element:- ", i);
    scanf("%d", &arr[i]);
    if(arr[i] %2 == 0)
      even++;
      else
      odd++;
  }
  printf("\n In an entered numbers there are %d odd and %d even", odd, even);
}