/* This is program to print whether entered number is even or odd */
/* 
Logic:- 
    if number is divided by 2, and remainder found to be zero then that number is even othewise odd.
 */
#include <bits/stdc++.h>
using namespace std;
int main(void){
    int num1;
    cout << "Enter the number to check for even or odd\n";
    cin >> num1;
    if(num1 % 2 == 0){
        cout << "Entered number is even\n";
    }else{
        cout << "Entered number is odd\n";
    }
    return 0;
}
