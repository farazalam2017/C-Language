/* Program to perform addition of two matrix */
#include<stdio.h>
#define ROW 2
#define COL 2
void main()
{
  int matrix1[ROW][COL], matrix2[ROW][COL], matrix3[ROW][COL], i, j;
  printf("Enter the elements in matrix 1 of %dX%d dimension\n", ROW, COL);
  for (i = 0; i < ROW;i++)
  {
    for (j = 0; j < COL;j++)
    {
      printf("Enter elements in matrix1[%d][%d]:- ", i, j);
      scanf("%d", &matrix1[i][j]);
    }
  }
   printf("Enter the elements in matrix 2 of %dX%d dimension\n", ROW, COL);
  for (i = 0; i < ROW;i++)
  {
    for (j = 0; j < COL;j++)
    {
      printf("Enter elements in matrix2[%d][%d]:- ", i, j);
      scanf("%d", &matrix2[i][j]);
    }
  }
  
  for (i = 0; i < ROW;i++)
  {
    for (j = 0; j < COL;j++)
    {
      matrix3[i][j] = matrix1[i][j] + matrix2[i][j];

    }
  }
  printf("Addition of matrix1 and matrix2 of dimension %dX%d is:- \n", ROW, COL);
  for (i = 0; i < ROW;i++)
  {
    for (j = 0; j < COL;j++)
    {
      printf("%d ",matrix3[i][j]);
    }
    printf("\n");
  }
}