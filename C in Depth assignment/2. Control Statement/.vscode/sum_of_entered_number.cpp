/* 
    Program to find sum of entered numbers using do while loop.
 */
/* 
 */
#include<bits/stdc++.h>
using namespace std;
int main(){
    int num,left, sum = 0;
    cout << "\n Enter the number";
    cin >> num;
    do{
        left = left % 10;
        sum = sum + left;
        num = num /10;
    }while(num > 0);
    cout << "\n Sum of entered number is :- " << sum;
    return 0;
}