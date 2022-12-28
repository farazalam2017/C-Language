/* 
    Program to enter the number and find the reverse of that number and also double reverse of a number.
 */
#include <bits/stdc++.h>
using namespace std;
int main(){
    int num,d, digit, sum = 0, reverse = 0;
    cout << "\n Enter the number:-";
    cin >> num;
    while( num != 0){
        d = num % 10;
        reverse = reverse * 10 + d;
        num = num / 10;
    }
    cout << "\n Reverse of number is:-" << reverse;
    cout << "\n Double the reverse of number:-" << reverse * 2;
    return 0;
}
