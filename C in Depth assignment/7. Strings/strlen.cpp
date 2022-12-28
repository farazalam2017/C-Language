/*strlen() function  */

/* 
    This function returns the length of the string i.e. number of character excluding the terminating null character. It accepts a single argument, which is pointer to the first character of the string
    Declartion:- size_t strlen(char const *string)
*/
#include<bits/stdc++.h>
using namespace std;
int main()
{
    char str[50];
    cout << "\n Enter a string:- ";
    gets(str);
    cout << "\n Length of the string is:- " << strlen(str);
    return 0;
}

/*
========= ARRAY VERSION ==============
unsigned int strlen(char str[])
{
    int i= 0;
    while(str[i] != '\0')
    {
        i++;
    }
    return i;
}
*/

/*
============ Pointer version =================
unsigned int strlen(char *str)
{
    char *p= str;
    while(*p != '\0')
    {
        p++;
    }
    return p-str;
}


 */