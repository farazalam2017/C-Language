/* Passing 1_D array to function */
/* When array is passed to a function the changes made inside the fiunction affect the original array. This is because the function get access to the original array */
#include<stdio.h>
void func(int a[]);
int main(void)
{
  int i, arr[5] = {3, 4, 5, 6, 7};
  func(arr);
  printf("Inside main():- ");
  for (i = 0; i < 5;i++)
    printf("%d ", arr[i]);
  printf("\n");
  return 0;
}

void func(int a[])
{
  int i;
  printf("Inside function():- ");
  for (i = 0; i < 5;i++)
  {
    a[i] = a[i] + 2;
    printf("%d ", a[i]);
  }
  printf("\n");
}