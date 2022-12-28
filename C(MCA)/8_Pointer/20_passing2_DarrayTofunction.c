/* Passing a 2-D array to function */
/* Note:- 
  When a 2-D array is passed to a fucntion the function actually receives the pointer to a 1-D array where the size of the 1-D array is equal to the numbers of column
 */
/* Note:- 
  func(int a[3][4])=> written as,  func(int (*a)[4])
 */
#include<stdio.h>
void func(int (*a)[4]);
void main()
{
  int i, j, arr[3][4] = {
          {10,11,12,13},
          {20,21,22,23},
          {30,31,32,33},
            };
  printf("Inside main(): sizeof(arr)= %d\n", sizeof(arr));
  func(arr);
  printf("Contents of array after calling function func() are:- \n");
  for (int i = 0; i < 3; i++)
  {
    for (int j = 0; j < 4;j++)
    {
      printf("%d ", arr[i][j]);
    }
      printf("\n");
  }
}

void func(int (*a)[4])
{
  int i, j;
  printf("Inside func(): sizeof(a) = %d\n", sizeof(a));
  printf("Inside func(): sizeof(*a)= %d\n", sizeof(*a));
  for (i = 0; i < 3; i++)
  {
    for (j = 0; j < 4;j++)
    {
      a[i][j] = a[i][j] + 2;
    }
  }
}

