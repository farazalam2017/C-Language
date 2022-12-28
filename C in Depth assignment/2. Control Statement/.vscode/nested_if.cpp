/* 
    Program to find biggest number from three given numbers
 */
/* Things to remember:-
        Nested if-else Syntax:-
        if(condition){
           if(condition){
            statements;
            ----------
           }else{
            statements;
            -----------
           }
        }else
        {
            if(condition){
                statements;
            }else{
                statemets;
            }
        }
 */
#include <bits/stdc++.h>
using namespace std;
int main(){
    int num1, num2, num3;
    cout << "\n Enter the three numbers:- ";
    cin >> num1 >> num2 >> num3;
    if(num1 > num2){
        if(num1 > num3){
            cout << "\n Greatest number is :- " << num1;
        }else{
            cout << "\n Greatest number is :- " << num3;
        }

    }else{
        if (num2 > num3)
             {
                cout << "\n Greatest number is:- " << num2;
            }else{
                cout << "\n Greatest number is :- " << num3;
            }
    }
    return 0;
}
