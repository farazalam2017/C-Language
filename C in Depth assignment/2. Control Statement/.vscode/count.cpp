/* 
    Program to count number of digits in number
 */
/* Logic:-
    counter named as "count will be used here"
 */
#include <bits/stdc++.h>
using namespace std;
int main(){
    int num1, count = 0;
    cout << "\n Enter the number";
    cin >> num1;
    do{
        num1 = num1 / 10;
        count++;
    } while (num1 > 0);
    cout << count;
    return 0;
}
