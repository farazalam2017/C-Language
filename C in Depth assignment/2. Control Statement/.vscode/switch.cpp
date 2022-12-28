/* 
    Program to understand switch
 */
/*
    Points to rememeber:-
    switch syntax:-
        switch(expression){
            case statement1 :
                statement;
                ----------
                break;
            case statement2 :
                statement;
                ---------
                break;
            default:
                statement;
                -----------
        }
 */
#include <bits/stdc++.h>
using namespace std;
int main(){
    int num;
    cout <<  "\n Enter the choice:-";
    cin >> num;
    switch (num)
    {
    case  1:
        cout << "\n Entered one\n";
        break;
    case  2:
        cout << "\n Entered two\n";
        break;
    case  3:
        cout << "\n Entered three\n";
        break;
    case  4:
        cout << "\n Entered four\n";
        break;
    default:
        cout << "\n Entered no choice";
    }
    return 0;
}

    
