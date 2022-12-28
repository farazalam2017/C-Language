/* Accept any two numbers,if the first number is greater than second then print the difference of these two number otherwise print their sum  */
/* 
Syntax:-  (condition)? (First statement): (Second Statement);
 */
#include<bits/stdc++.h>
using namespace std;
int main(){
    int num1, num2, temp;
    cout << "Enter the two numbers\n";
    cin >> num1;
    cin >> num2;
    temp = (num1 > num2) ? (num1 - num2) : (num1 + num2);
    cout << "Value of max is:- \n" << temp << "";
    return 0;
}
