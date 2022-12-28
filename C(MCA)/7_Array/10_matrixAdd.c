/* Addition of the matrix */
/*Note:- When two matrix have same order then they can be added only */
/* example:- 3x3 + 3x3= 3x3 */
#include<stdio.h>
#define ROW 2
#define COL 2
void main()
{
  int i, j, matrix1[ROW][COL], matrix2[ROW][COL], matrix3[ROW][COL];
  printf("Enter the matrix matrix 1(%d x %d) row wise:- ", ROW, COL);
  for(i= 0; i<ROW;i++)
  {
    for (j = 0; j < COL;j++)
    {
      scanf("%d", &matrix1[i][j]);
    }
  }
  for(i= 0; i<ROW;i++)
  {
    for (j = 0; j < COL;j++)
    {
      scanf("%d", &matrix2[i][j]);
    }
  }
  /* Addition  */
  for (i = 0; i < ROW;i++)
  {
    for (j = 0; j < COL;j++)
    {
      matrix3[i][j] = matrix1[i][j] + matrix2[i][j];
    }
  }
  printf("The resultant matrix is:- \n");
  for (i = 0; i < ROW;i++)
  {
    for (j = 0; j < COL;j++)
    {
      printf("%d ", matrix3[i][j]);
    }
      printf("\n");
  }
}