/* 
    Program to find quotient and remainder
 */
/* 
    Things to remember:-
        i) if(exp!=0) is often written as if(exp)
        ii) if(exp==0) is often written as if(!exp)
    Dividend:- number which is being divided
    Divisor:- number by which the dividend is divided
    Quotient:- Result obtained in division process
    Remainder:- Sometime we cannot divide number exactly, leftover number is called remainder.
    Important Relation:- Dividend= Divisor * quotient + remainder.
 */
/*
    Logic:- 
        "/" :-> this operator returns quotient
        eg:- 32 / 4 = 8 
        "%" :-> this operator returns remainder
        eg:- 32 % 3= 2
 */
#include <bits/stdc++.h>
using namespace std;
int main(){
    int num1, num2, quotient, remainder;
    cout << "Enter the dividend\n";
    cin >> num1;
    cout << "Enter the divisor\n";
    cin >> num2;
    if ( !num2)
    {
        cout << "Divison by zero error \n";
    }else{
        quotient = num1 / num2;
        remainder = num1 % num2;
        cout << "\n quotient is:- " << quotient;
        cout << "\n Remainder is:- " << remainder;
    }
    return 0;
}