/* 
This is program to tell whether entered number is negative or not.
 */
/* 
Logic:-
        if number is less than 0 then that number is negative.
 */
#include <bits/stdc++.h>
using namespace std;
int main(void){
    int num1;
    cout << "Enter the number\n";
    cin >> num1;
    if(num1 < 0){
        cout << "Entered number is negative \n";
    }
    return 0;
}