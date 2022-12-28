/*
    char str[]= "MUMBAI"
    char *ptr= "Chennai"

    Here str is array of character and 7 bytes are reserved for it. since str is the name of the array it is a constant pointer to the first element of the array.

    While ptr is string constant, which stored somewhere in the memory  with 8 consecutive byte reserved for it. The string constant return the address of the first character of the string that is assigned to the pointer variable ptr.

    Main differnce is that str is constant pointer and will contain address 1000 while pte is a pointer variable and may contain any address.

    str= "BOMBAY";// Invalid
    ptr= "DELHI";// Valid
    char *ptr= "Bareilley"; // Wrong
    cin>> ptr;// Wrong
    Note:- We can't use above statement with an unintialized pointer since it contain garbage value and does not point any location.
 */
#include<bits/stdc++.h>
using namespace std;
int main(void)
{
    char *str;
    str = (char *)malloc(10);
    cout << "\n Enter the string:-  ";
    gets(str);
    puts(str);
    cout << "\n String is:- " << str;
    return 0;
}