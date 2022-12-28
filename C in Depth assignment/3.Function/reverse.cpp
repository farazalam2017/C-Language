/* Write a function reverse() that input a number and returns the reverse of that number */
#include<bits/stdc++.h>
using namespace std;
int reverse(int num2);
int main(){
    int num1;
    cout << "\n Enter the number:- ";
    cin >> num1;
    cout << "\n Reverse of the number is:- " << reverse(num1);
    return 0;
}
int reverse(int num2){
    int reverse= 0;
    while(num2 != 0){
       int  d = num2 % 10;
       reverse = reverse * 10 + d;
       num2 = num2 / 10;
    }
    return reverse;
}