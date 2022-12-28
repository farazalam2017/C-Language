/* 
    Program to find product of any number
 */

/*  % operator:- fetch the right most digit one by one 
    / operator:- remove the right most digit and print the remaining number
    example:- 284:- 284 % 10= 4
                    284 / 10= 28
 */
/* #include<bits/stdc++.h>
using namespace std;
int main(){
    int num, product = 1, remainder;
    cout << "\n Enter the number";
    cin >> num;
    while(num > 0){
        remainder = num % 10;
        product = product * remainder;
        num = num / 10;
    }
    cout << product << "\n";
    return 0;
} */
#include <bits/stdc++.h>
using namespace std;
int main(){
    int num1, product = 1, remainder;
    cout << "\n enter the number";
    cin >> num1;
    while(num1 >0){
        remainder = num1 % 10;
        product = product * remainder;
        num1 = num1 / 10;
    }
    cout << product << "\n";
    return 0;
}