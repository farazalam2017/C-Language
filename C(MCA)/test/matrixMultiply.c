#include<stdio.h>
#define ROW1 3
#define COL1 4
#define ROW2 COL1
#define COL2 2
void main()
{
  int i, j, k, matrix1[ROW1][COL1], matrix2[ROW2][COL2], matrix3[ROW1][COL2];
  printf("Enter the elements of the matrix_1(%d X %d):- \n", ROW1, COL1);
  for (i = 0; i < ROW1; i++)
  {
    for (j = 0; j < COL1;j++)
    {
      scanf("%d", &matrix1[i][j]);
    }
  }

  for (i = 0; i < ROW2; i++)
  {
    for (j = 0; j < COL2;j++)
    {
      scanf("%d", &matrix2[i][j]);
    }
  }

  for (i = 0; i < ROW1; i++)
  {
    for (j = 0; j < COL2;j++)
    {
      matrix3[i][j] = 0;
      for (k = 0; k < COL1;k++)
      {
        matrix3[i][j] += matrix1[i][k] * matrix2[k][j];
      }
    }
  }
  for (i = 0; i < ROW1;i++)
  {
    for (j = 0; j < COL2;j++)
    {
      printf("%d ", matrix3[ROW1][COL2]);
    }
    printf("\n");
  }
}