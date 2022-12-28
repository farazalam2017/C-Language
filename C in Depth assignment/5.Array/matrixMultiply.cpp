/* Multiplication of two matrix */
#define ROW1 2
#define COL1 3
#define ROW2 COL1
#define COL2 4
#include<bits/stdc++.h>
using namespace std;
int main(){
    int mat1[ROW1][COL1], mat2[ROW2][COL2], mat3[ROW1][COL2];
    int i, j, k;
    cout << "\n Enter the matrix1:- ";
    for (i = 0; i < ROW1; i++){
        for (j = 0; j < COL1; j++){
            cin >> mat1[i][j];
        }
    }
    cout << "\n Enter the matrix2 :- ";
    for (i = 0; i < ROW2;i++){
        for (j = 0; j<COL2; j++){
            cin >> mat2[i][j];
        }
    }
    /*-------- Multiplication------ */
    for(i = 0; i<ROW1; i++){
        for (j = 0; j < COL2; j++){
            mat3[i][j] = 0;
            for(k =0; k<COL1; k++){
            mat3[i][j] += mat1[i][k] * mat2[k][j];
            }
        }
    }
    cout <<"\n Resultant matrix is:- ";
    for (i = 0;i<ROW1; i++ ){
        for (j = 0; j < COL2; j++){
            cout << mat3[i][j] << " ";
        }
        cout << "\n";
    }

        return 0;
}