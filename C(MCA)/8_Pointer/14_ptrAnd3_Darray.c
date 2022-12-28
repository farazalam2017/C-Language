/* Program to print the elements of 3-D array using pointer notation */
/* Note:-
 *(*(*(arr+i)+j)+k)=> arr[i][j][k];
 */
#include<stdio.h>
void main()
{
  int arr[2][3][2] = {
      {
        {1,2},
        {3,4},
        {5,6},
      },
     {
        {7,8},
        {9,10},
        {11,12},
      }
      };
  int i, j, k;
  for (i = 0; i < 2;i++)
    for (j = 0; j < 3;j++)
    {
      for (k = 0; k < 2;k++)
        printf("%d\t", *(*(*(arr + i) + j) + k));
      printf("\n");
    }
}