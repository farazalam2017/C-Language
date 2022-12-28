/* Program to input and display a matrix */
#include<stdio.h>
#define ROW 3
#define COL 3
void main()
{
  int i, j, matrix1[ROW][COL];
  printf("Enter the element of the matrix (%d x %d) row wise:- \n", ROW, COL);
  for (i = 0; i < ROW; i++)
  {
    for (j = 0; j < COL;j++)
    {
      scanf("%d", &matrix1[i][j]);
    }
  }

  printf("The matrix which you have entered is:- \n");
  for (i = 0; i < ROW;i++)
  {
    for (j = 0; j < COL;j++)
    {
      printf("%d ", matrix1[i][j]);
      // printf("\n");
    }
    printf("\n");
  }
}
