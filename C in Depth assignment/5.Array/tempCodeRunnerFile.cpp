#define ROW 3
#define COL 4
#include<bits/stdc++.h>
using namespace std;
    int main(){
        int mat[ROW][COL], i, j;
        cout << "\n Enter the elements of the matrix:- ";
        for (i = 0; i < ROW;i++){
            for (j = 0; j < COL; j++){
                cin >> mat[i][j];
            }
        }
        cout << "\n The matrix that you have entered is:-\n";
        for (i = 0; i < ROW;i++){
            for (j = 0; j < COL; j++){
                cout << mat[i][j]<<" ";
                
            }
            cout << "\n ";
        }
        
        return 0;
    }