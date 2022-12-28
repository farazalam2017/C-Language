/* Multiplication of the matrix */
/* Note:- 
  Matrix of multiplication require that the number of columns in first matrix should be equal to the number of rows of second matrix.
  example:- if mXn and nXp then the multiplied matrix will be order of mXp
 */
#include<stdio.h>
#define ROW1 3
#define COL1 4
#define ROW2 COL1
#define COL2 2
void main()
{
  int i, j,k, matrix1[ROW1][COL1], matrix2[ROW2][COL2], matrix3[ROW1][COL2];
  printf("Enter the elements of matrix_1(%d x %d) row wise:- \n", ROW1, COL1);
  for (i = 0; i < ROW1;i++)
  {
    for (j = 0; j < COL1;j++)
      {
        scanf("%d", &matrix1[i][j]);
      }
  }
  printf("Enetr the elements of matrix_2(%d X %d) row wise:- \n", ROW2, COL2);
  for (i = 0; i < ROW2;i++)
  {
      for (j = 0; j < COL2;j++)
      {
        scanf("%d", &matrix2[i][j]);
      }
  }
  /* Multiplication */
  for (i = 0; i < ROW1; i++)
  {
      for (j = 0; j < COL2;j++)
      {
        matrix3[i][j] = 0;
        for (k = 0; k < COL1;k++)
        {
          matrix3[i][j] = matrix3[i][j] + (matrix1[i][k] * matrix2[k][j]);
        }
      }
  }
  printf("The Resultant matrix is:- \n");
  for (i = 0; i < ROW1;i++)
  {
      for (j = 0; j < COL2;j++)
      {
        printf("%d ", matrix3[i][j]);
      }
      printf("\n");
  }
}
