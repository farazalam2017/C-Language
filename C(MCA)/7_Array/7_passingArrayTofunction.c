/* Program to understand the effect of passing an array to a function */
/* In case of simple variables the called function creates a copy of variable and workds on it, so any changes made in the function do not effect the original variable. When array is passed as actual argument the called function actually get access to the original array and works on it , so any changes made inside the function affect the original array */
#include<stdio.h>
void func(int arr[]);
void main()
{
  int i, arr[6] = {1, 2, 3, 4, 5, 6};
  func(arr);//only array name not necessary to specify the size
  printf("\n Contents of the array is:- ");
  for (i = 0; i < 6;i++)
    printf("%d ", arr[i]);
  printf("\n");
}
void func(int arr[])
{
  int sum = 0, i;
  for (i = 0; i < 6;i++)
  {
    arr[i] =arr[i] * arr[i];
    sum = sum + arr[i];
  }
  printf("\n Sum of square is:- %d", sum);
}