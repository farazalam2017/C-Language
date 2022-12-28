/* Transpose of matrix */
/* Transpose of matrix is defines as the matrix that is obtained by interchanging rows and colums of the matrix */
#include<stdio.h>
#define ROW 3
#define COL 4
void main()
{
  int matrix1[ROW][COL], matrix2[ROW][COL], i, j;
  printf("Enter the matrix (%d x %d) row wise:- \n", ROW, COL);
  for (i = 0; i < ROW;i++)
  {
    for (j = 0; j < COL;j++)
    {
      scanf("%d ", &matrix1[i][j]);
    }
  }
  for (i = 0; i < ROW;i++)
  {
    for (j = 0; j < COL;j++)
    {
      matrix2[i][j] = matrix1[j][i];
    }
  }
  printf("Transpose of the matrix is:- \n");
  for (i = 0; i < COL;i++)
  {
    for (j = 0; j < ROW;j++)
    {
      printf("%d ", matrix2[i][j]);
    }
    printf("\n");
  }
}
