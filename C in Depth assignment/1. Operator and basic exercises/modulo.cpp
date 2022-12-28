/*
    Write a program to accept any number print the remainder after dividing by 3.
 */
/* 
   %-> this is called modulo operator, it returns the remainder of operation
 */
#include <bits/stdc++.h>
using namespace std;
int main(){
    int num1, num2;
    cout << "Enter the number:- \n";
    cin >> num1;
    num2 = num1 % 3;
    cout << "Remainder is :- " << num2;
    return 0;
}