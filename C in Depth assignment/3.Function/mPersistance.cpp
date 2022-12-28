/* If all digit of a number n are multiplied by each other repeating with the product, the one digit obtained at last is called the multiplicative digit root of n. The number of times digit need to be multiplied to reach one digit is called the multiplicative persisitance of n */
/* 
Example:- 
    86= 48= 32= 6 {MDR= 6, Mpersistance= 3}
 */
/* 
Write the function MDR() and Mpersistance() that input number and return its multiplicative digital roots and  multiplicative persistance respectively.
 */

#include<bits/stdc++.h>
using namespace std;

int MDR(int num1);
int Mpersistance(int num2);

int main(){
    int num4;
    cout << " Enter the number ";
    cin >> num4;
    cout << MDR(num4);
    return 0;
}

int MDR(int num1){
    int num3 = 1;
    while(num1 >0 &&  num1 <10){
        num3 = num3 * (num1 % 10);
        num1 = num1 / 10;
    }
    return num3;
}
        