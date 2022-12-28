/* Transpose of a matrix */
/* 
  1 2 3    1 4 7
  4 5 6 => 2 5 8
  7 8 9    3 6 9
*/

#define ROW 3
#define COL 4
#include<bits/stdc++.h>
using namespace std;
int main()
{
    int mat1[ROW][COL], mat2[COL][ROW], i, j;
    cout << "\n Enter the element of matrix 1:- ";
    for (i = 0; i < ROW;i++)
    {
        for (j = 0; j < COL;j++)
        {
            cin >> mat1[i][j];
            cout << " ";
        }
    }
    for (i = 0; i < COL; i++)
    {
        for (j = 0; j < ROW;j++)
        {
            mat2[i][j] = mat1[j][i];
        }
    }
    cout << "\n Transpose of matrix:- \n";
    for (i = 0; i < COL;i++)
    {
        for (j = 0; j < ROW;j++)
        {
            cout << " " << mat2[i][j];
        }
        cout << "\n";
    }

        return 0;
}