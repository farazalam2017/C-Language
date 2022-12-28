/* Program to raise a floating point number to a positive integer */
#include <bits/stdc++.h>
using namespace std;
float power(float a, int n);

int main(void){
    float a, p;
    int n;
    cout << "\n Enter the number:- ";
   

    return 0;
}

float power(float a, int n){
    if(n == 0){
        return 1;
    }
    else{
        return (a * power(a, n - 1));
    }
}