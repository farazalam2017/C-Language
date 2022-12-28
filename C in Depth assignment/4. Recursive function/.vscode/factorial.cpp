/* Factorial of number using recursion */
#include<bits/stdc++.h>
using namespace std;
int fact(int n);

int main(){
    int num1;
    cout << "\n Enter the number :- ";
    cin >>num1;
    if( num1 < 0){
        cout << "\n Factorial of negative number not possible ";
    }else{
        cout << "\n Factorial of entered number is :- " << fact(num1);
    }
    return 0;
}

int fact(int n){
    if( n == 0){
        return 1;
    }else{
        return (n * fact(n - 1));
    }
}



