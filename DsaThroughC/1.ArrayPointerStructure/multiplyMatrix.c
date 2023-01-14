/* Program to multiply matrix */
#include<stdio.h>
#define ROW1  2
#define COL1  3
#define ROW2 COL1 
#define COL2  2
void main()
{
  int matrix1[ROW1][COL1], matrix2[COL2][ROW2], matrix3[ROW1][COL2];
  int i, j,k;
  printf("Enter the elements in matrix 1 of %dX%d:- \n", ROW1, COL1);
  for (i = 0; i < ROW1; i++)
  {
    for (j = 0; j < COL1;j++)
    {
      printf("matrix1[%d][%d]:- ", i, j);
      scanf("%d",&matrix1[i][j]);
    }
  }
  printf("Enter the elements in matrix 2 of %dX%d:- \n", ROW2, COL2);
  for (i = 0; i < ROW2; i++)
  {
    for (j = 0; j < COL2;j++)
    {
      printf("matrix1[%d][%d]:- ", i, j);
      scanf("%d",&matrix2[i][j]);
    }
  }
  for (i = 0; i < ROW1; i++){
    for (j = 0; j < COL2;j++)
    {
      matrix3[i][j] = 0;
      for (k = 0; k < COL1;k++)
      {
        matrix3[i][j] = matrix1[i][k] * matrix2[k][j];
      }
    }
  }
  printf("Resultant matrix after multiplication is:- \n");
  for (i = 0; i < ROW1; i++)
  {
    for (j = 0; j < COL2;j++)
    {
      printf("%d ", matrix3[i][j]);
    }
    printf("\n");
  }
}
