/* Program to pass an array to a function */
#include<stdio.h>
void func(int val[]);
void main()
{
  int i, arr[6] = {1, 2, 3, 4, 5, 6};
  func(arr);
  printf("Contents of the array are:- \n");
  for (i = 0; i < 6;i++)
  {
    printf("%d ", arr[i]);
  }
}
void func(int val[])
{
  int sum = 0,i;
  for (i = 0; i < 6;i++)
  {
    val[i] = val[i] * val[i];
    sum = sum + val[i];
  }
  printf("Sum of square is:- %d\n", sum);
}