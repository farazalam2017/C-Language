/* Program to input and output matrix */
#include<stdio.h>
#define ROW 2
#define COL 2
void main()
{
  int matrix[ROW][COL], i, j;
  printf("Enter number in %dX%d matrix:- \n", ROW, COL);
  for (i = 0; i < ROW;i++)
  {
    for (j = 0; j < COL;j++)
    {
      printf("Enter value in matix[%d][%d]:- ", i, j);
      scanf("%d", &matrix[i][j]);
    }
  }
  printf("Matrix formed after entering numbers is:- \n");
  for (i = 0; i < ROW;i++)
  {
    for (j = 0; j < COL;j++)
    {
      printf("%d ", matrix[i][j]);
    }
    printf("\n");
  }
}