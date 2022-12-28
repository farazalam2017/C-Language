/* Program to convert a binary number to a decimal number */
#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n, nsave, rem, d, j = 1, dec = 0;
    cout << "\n Enter the number in binary:- ";
    cin >> n;
    nsave = n;
    while(n>0)
    {
        rem = n % 10; // Taking last digit
        d = rem * j;
        dec = dec + d;
        j = j * 2;
        n = n / 10;// Skipping last digit
    }
    cout << "\n Decimal number of entered binary number is:- " << dec;
    return 0;
}