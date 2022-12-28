/* Program to print the address and character of string using pointer */
#include<bits/stdc++.h>
using namespace std;
int main()
{
    char str[] = "Faraz alam";
    char *p;
    p = str;
    while(*p!='\0')
    {
        cout << "\n Character is:- " << *p;
        cout << "\n Address is:- " << &p;
        p++;
    }
    return 0;
}