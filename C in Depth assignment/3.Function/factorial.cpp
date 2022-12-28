/*  Program to find the factorial of number using function */
#include  <bits/stdc++.h>
using namespace std;
long int factorial(int n);
int main(void){
    int num;
    cout << "\n Enter the number:- ";
    cin >> num;
    if( num < 0){
        cout << "\n No factorial of negative number.";
    }else{
        cout << "\n Factorial of number is  : - " << factorial(num) << "\n";
    }
    return 0;
}

long int factorial( int n){
    int i;
    long int fact = 1;
    if( n == 0){
        return i;
    }
    for (i = n; i > 1; i--){
        fact = fact * i;
    }
    return fact;
}