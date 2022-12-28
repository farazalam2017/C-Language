/* Write a function that input number and print the multiplication table of that number */
#include <bits/stdc++.h>
using namespace std;
int multiply (int x);

int main(){
    int num1;
    cout << "\n Enter the number:- ";
    cin >> num1;
    multiply(num1);
    return 0;
}

int multiply (int x){
    int num2;
    for(int i = 1; i<= 10; i++){
        num2 = i * x;
        cout << num2 << "\n ";
    }
    return 0;
}