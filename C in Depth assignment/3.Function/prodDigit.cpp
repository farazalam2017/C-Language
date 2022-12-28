/* Write a function prodDigits() that input a number and and returns the product of number */
#include <bits/stdc++.h>
using namespace std;
int prodDigits(int num1);
int main(){
    int num1;
    cout << " Enter the number ";
    cin >> num1;
    cout << " \n Product of number is :- " << prodDigits(num1);
    return 0;
}

int prodDigits(int num1){
    int product = 1;
    while(num1 != 0){
        int d = num1 % 10;
        product = product *d;
        num1 = num1 / 10;
    }
    return product;
}