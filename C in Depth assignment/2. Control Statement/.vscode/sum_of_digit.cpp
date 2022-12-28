/* 
    Program to print sum of digit of any number
 */
/* Logic:-
    % operator:- fetch the right most digit one by one 
    / operator:- remove the right most digit and print the remaining number
    example:- 284:- 284 % 10= 4
                    284 / 10= 28
 */
#include<bits/stdc++.h>
using namespace std;
int main(){
    int num, sum = 0, remainder;
    cout << "\n Enter the number:- ";
    cin >> num;
    while(num > 0){
        remainder = num % 10;//fetch last digit
        sum = sum + remainder;
        num = num / 10;// skip last digit
    }
    cout << sum << "\n";
    return 0;
} 

