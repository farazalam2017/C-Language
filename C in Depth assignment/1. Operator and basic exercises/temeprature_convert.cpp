/* By Farz alam */
/* This is program to convert given temperature in celsius to farenheit */
/* Logic:- 
    Farenheit = (celsius * 9/5) + 32
    Celsius = (Farenheit - 32) * 5/9
 */
#include<bits/stdc++.h>
using namespace std;
int main(void)
{   float temp1, temp2;
    cout << "\n Enter the temperture in celsius:- \t \n";
    cin >> temp1;
    temp2 = (temp1 * 9/5) + 32;
    cout << "\n Temeperature in farenheit is :- " << temp2;
    return 0;
}

