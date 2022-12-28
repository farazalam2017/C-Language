/*
    Program to print pattern
 */

// To print following pattern.
// Pattern A
/*-------- *
           **
           *** 
           ****
           ***** --------- */
/* #include <bits/stdc++.h>
using namespace std;
int main(){
    int i,j,n;
    cout << "\n Enter the number of lines:- ";
    cin >> n;
    for (i = 1; i <= n; i++){
        for (j = 1; j <= i; j++){
            cout << " *";
            }
        cout << endl;
    }
} */
//==================================================================
// Pattern B( Replace star with i)
/* -------------- 1
                  2 2
                  3 3 3
                  4 4 4 4
                  5 5 5 5 5 --------- */
/* #include <bits/stdc++.h>
using namespace std;
int main(){
    int i, j, n;
    cout << "\n Enter the number of lines:- ";
    cin >> n;
    for (i = 1; i <= n;i++){
        for (j = 1; j <= i;j++){
            cout << i;
        }
        cout << "\n";
    }
        return 0;
} */
// =================================================================
// Pattern C(Replace star with j)
/* ------------------------1
                           1 2
                           1 2 3
                           1 2 3 4
                           1 2 3 4 5 --------------*/
/* #include <bits/stdc++.h>
using namespace std;
int main(){
    int i, j, n;
    cout << "\n Enter the number of lines:- ";
    cin >> n;
    for (i = 1; i <= n; i++){
        for (j = 1; j <= i; j++){
            cout << j;
        }
        cout << "\n";
    }
        return 0;
} */
// =================================================================
// Pattern D (Replace star with (i + j))
/*--------------------- 2
                        3 4
                        4 5 6
                        5 6 7 8
                        6 7 8 9 10 ----------------------*/
/* #include <bits/stdc++.h>
using namespace std;
int main(){
    int i, j, n;
    cout << "\n Enter the number of lines:- ";
    cin >> n;
    for (i = 1; i <= n; i++){
        for (j = 1; j <= i; j++){
            cout << i + j << "\t";
            
        }
        cout << endl;
    }
        return 0;
} */
// =================================================================
// Pattern E(if (i + j) is even print 1 otherwise 0)
/*-------------1
               0 1
               1 0 1
               0 1 0 1
               1 0 1 0 1 ----------*/ 
/* #include <bits/stdc++.h>
using namespace std;
int main(){
    int i, j, n;
    cout << "\n Enter the number of lines:- ";
    cin >> n;
    for (i = 1; i <= n; i++){
        for (j = 1; j <= i; j++){
            if((i+j) % 2 ==0){
                cout << "1";
                
            }else{
                cout << "0";
            }
        }
        cout << endl;
        }
        return 0;
} */
// =================================================================
// Pattern F
/*---------- * * * * *
             * * * *
             * * *
             * *
             *   -------------*/
/* #include <bits/stdc++.h>
using namespace std;
    int main(){
    int i,j, n;
    cout << "\b Enter the number of lines:-";
    cin >> n;
    for (i = n; i>=1; i--){
        for(j =1 ; j <= i; j++){
            cout << "*";
        }
        cout << "\n";
    }
        return 0;
} */
// =================================================================
// Pattern G( Replace star with 'i' in pattern F)
/*--------------- 5 5 5 5 5
                  4 4 4 4
                  3 3 3 
                  2 2 
                  1 ---------------*/  
/* #include <bits/stdc++.h>
using namespace std;
int main(){
    int i, j, n;
    cout << "\n Enter the number of lines:-";
    cin >> n;
    for (i = n; i >= 1; i--){
        for (j = 1; j <= i; j++){
            cout << i;
        }
        cout << "\n";
    }

        return 0;
} */
// =================================================================
// Pattern H(replace star with 'j' in above program)
/*------------------1 2 3 4 5 
                    1 2 3 4 
                    1 2 3 
                    1 2 
                    1 ------------------------*/
/* #include <bits/stdc++.h>
using namespace std;
int main(){
    int i, j, n;
    cout << "\n Enter the number of lines:- ";
    cin >> n;
    for (i = n; i >= 1; i--)
    {
        for (j = 1; j <= i; j++){
            cout << j;
        }
        cout << "\n";
    }
    return 0;
} */
// =================================================================
// Pattern I(replace star with 'n + 1 -i')
/* -------------------- 1 1 1 1 1 
                        2 2 2 2 
                        3 3 3 
                        2 2 
                        1 ------------------*/
/* #include<bits/stdc++.h>
using namespace std;
int main(){
    int i, j, n;
    cout << "\n Enter the number of lines:- ";
    cin >> n;
    for (i = n; i >= 1; i--){
        for (j = 1; j <= i; j++){
            cout << n + 1 - i;
        }
        cout << "\n";
    }
        return 0;
} */
// ===================================================
// Pattern j
/*           *******
             *******
             *******
             *******
             *******
             *******
             *******
*/
#include <bits/stdc++.h>
using namespace std;
int main(){
    for (int i = 1; i <= 7; i++){
        for( int j =1; j <= i; j++){
            cout << "*" <<"\n";
        }
    }
        return 0;
}
