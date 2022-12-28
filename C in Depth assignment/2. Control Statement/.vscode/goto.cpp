/*
    Program to find even or odd using goto
 */
/*
    Point to remember:-
        goto syntax:-
            goto label;
            --------------
            label:
                statement
                ----------
                ----------
 */
#include<bits/stdc++.h>
using namespace std;
int main(){
    int num;
    cout << "\n Enter the number:- ";
    cin >> num;
    if(num % 2 == 0){
        goto even;
        }
    else{
        goto odd;
    }
    even:
        {
            cout << "\n number is even";
        }
    odd: 
    {
        cout << "\n number is odd";
    }
    return 0;
}