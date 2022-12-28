/* 
    Program to find out the grade of a student when marks of 4 subject are given.
 */
/*
    Things to remember:-
    else-if ladder syntax:-
    if(expression){
        statementA;
        -----------
    }else if( expression){
        statementB;
        -----------
    }else if(expression){
        statementC;
        -----------
    }else{
        statement;
        ----------
    }
 */
#include <bits/stdc++.h>
using namespace std;
int main(){
    float sub1, sub2, sub3, sub4, total, percentage;
    cout << "\n Enter the marks for four subjects(out of 100)\n";
    cin >> sub1;
    cin >> sub2;
    cin >> sub3;
    cin >> sub4;
    total = (sub1 + sub2 + sub3 + sub4) / 400;
    percentage = total * 100;
    if(percentage >= 85){
        cout << "\n Percentage is:- " << percentage;
        cout << "\n grade = A";
    }else if(percentage < 85 && percentage >=70){
        cout << "\n Percentage is:- " << percentage;
        cout << "\n grade = B";
    }else if(percentage < 70 && percentage>=55){
        cout << "\n Percentage is:- " << percentage;
        cout << "\n grade = C";
    }else if(percentage < 55 && percentage >=40){
        cout << "\n Percentage is:- " << percentage;
        cout << "\n grade = D";
    }else{
        cout << "\n Percentage is:- " << percentage;
        cout << "\n grade = E";
    }
    return 0;
}