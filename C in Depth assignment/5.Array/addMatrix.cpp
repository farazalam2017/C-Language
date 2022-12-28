/* Addtion of two matrix */
// Note:- Order of  matrix must be same which are added.
#define ROW 3
#define COL 4
#include<bits/stdc++.h>
using namespace std;
int main(){
    int i, j, mat1[ROW][COL], mat2[ROW][COL], mat3[ROW][COL];
    cout << "\n Enter the matrix 1 elements:- ";
    for (i = 0; i < ROW; i++){
        for (j = 0; j < COL;j++){
            cin >> mat1[i][j];
        }
    }
    cout << "\n Enter the matrix 2 elements:- ";
    for (i = 0; i < ROW; i++){
        for (j = 0; j < COL;j++){
            cin >> mat2[i][j];
        }
    }
    /* Addiion */
    for (i = 0; i < ROW; i++){
        for (j = 0; j < COL;j++){
            mat3[i][j] = mat1[i][j] + mat2[i][j];
        }
    }
    cout << "\n The resultant matrix  is:- \n";
    for (i = 0; i < ROW; i++){
        for (j = 0; j < COL;j++){
            cout << mat3[i][j]<< " ";
        }
            cout << "\n";
    }
    return 0;
}

